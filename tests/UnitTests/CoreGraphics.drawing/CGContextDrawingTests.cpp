//******************************************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#include "DrawingTest.h"
#include "DrawingTestConfig.h"
#include "ImageHelpers.h"
#include <windows.h>

void drawPatternWindowsLogo(void* info, CGContextRef context) {
    CGContextFillRect(context, CGRectMake(0, 0, 50, 50));

    CGContextSetRGBFillColor(context, 0, 0.63, 0.94, 1);
    CGContextFillRect(context, CGRectMake(0, 50, 50, 50));

    CGContextSetRGBFillColor(context, 0.48, 0.73, 0, 1);
    CGContextFillRect(context, CGRectMake(50, 50, 50, 50));

    CGContextSetRGBFillColor(context, 1, 0.73, 0, 1);
    CGContextFillRect(context, CGRectMake(50, 0, 50, 50));
}

void _SetPatternForStroke(CGContextRef context, float xStep, float yStep) {
    CGPatternCallbacks coloredPatternCallbacks = { 0, drawPatternWindowsLogo, NULL };

    CGPatternRef pattern = CGPatternCreate(NULL,
                                           CGRectMake(0, 0, 100, 100),
                                           CGAffineTransformIdentity,
                                           xStep,
                                           yStep,
                                           kCGPatternTilingNoDistortion,
                                           false,
                                           &coloredPatternCallbacks);

    woc::unique_cf<CGColorSpaceRef> rgbColorSpace(CGColorSpaceCreateDeviceRGB());
    CGColorSpaceRef patternColorSpace = CGColorSpaceCreatePattern(rgbColorSpace.get());

    CGContextSetStrokeColorSpace(context, patternColorSpace);

    CGFloat color[] = { 0.96, 0.32, 0.07, 1 };
    CGContextSetStrokePattern(context, pattern, color);
}

DRAW_TEST_F(CGContext, PatternStroke, UIKitMimicTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    _SetPatternForStroke(context, 100, 100);
    CGRect borderRect = CGRectInset(bounds, 30, 50);
    CGContextSetLineWidth(context, 45);
    CGContextStrokeRect(context, borderRect);
}

void _SetPatternForFill(CGContextRef context, float xStep, float yStep) {
    CGPatternCallbacks coloredPatternCallbacks = { 0, drawPatternWindowsLogo, NULL };

    CGPatternRef pattern = CGPatternCreate(NULL,
                                           CGRectMake(0, 0, 100, 100),
                                           CGAffineTransformIdentity,
                                           xStep,
                                           yStep,
                                           kCGPatternTilingNoDistortion,
                                           false,
                                           &coloredPatternCallbacks);

    woc::unique_cf<CGColorSpaceRef> rgbColorSpace(CGColorSpaceCreateDeviceRGB());
    CGColorSpaceRef patternColorSpace = CGColorSpaceCreatePattern(rgbColorSpace.get());

    CGFloat color[] = { 0.96, 0.32, 0.07, 1 };

    CGContextSetFillColorSpace(context, patternColorSpace);

    CGContextSetFillPattern(context, pattern, color);
}

DRAW_TEST_F(CGContext, PatternFill, UIKitMimicTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    _SetPatternForFill(context, 100, 100);
    CGContextFillRect(context, bounds);
}

DRAW_TEST_F(CGContext, PatternFillWindowsLogoWithAlpha, UIKitMimicTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGContextSetAlpha(context, 0.8);
    _SetPatternForFill(context, 150, 150);
    CGContextFillRect(context, bounds);
}

DRAW_TEST_F(CGContext, PatternFillWindowsLogoRotate, UIKitMimicTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    _SetPatternForFill(context, 100, 100);
    CGContextRotateCTM(context, 0.4);
    CGContextFillRect(context, bounds);
}

DRAW_TEST_F(CGContext, PatternFillWindowsLogoRegion, UIKitMimicTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    _SetPatternForFill(context, 100, 100);
    CGRect borderRect = CGRectInset(bounds, 30, 50);
    CGContextFillRect(context, borderRect);
}

DRAW_TEST_F(CGContext, PatternFillWindowsLogoPath, UIKitMimicTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    _SetPatternForFill(context, 100, 100);

    CGMutablePathRef thepath = CGPathCreateMutable();
    CGPathMoveToPoint(thepath, NULL, 30, 100);
    CGPathAddCurveToPoint(thepath, NULL, 47.0f, 67.0f, 50.0f, 55.0f, 45.0f, 50.0f);
    CGPathAddCurveToPoint(thepath, NULL, 42.0f, 47.0f, 37.0f, 46.0f, 30.0f, 55.0f);

    CGPathAddCurveToPoint(thepath, NULL, 23.0f, 46.0f, 18.0f, 47.0f, 15.0f, 50.0f);
    CGPathAddCurveToPoint(thepath, NULL, 10.0f, 55.0f, 13.0f, 67.0f, 30.0f, 100.0f);

    CGPathCloseSubpath(thepath);
    CGContextAddPath(context, thepath);
    CGContextFillPath(context);
}

#ifdef WINOBJC
#include "CGContextInternal.h"

DISABLED_DRAW_TEST_F(CGContext, DrawIntoRect, UIKitMimicTest) {
    // Draw a portion of an image into a different region.
    auto drawingConfig = DrawingTestConfig::Get();

    woc::unique_cf<CFStringRef> testFilename{ _CFStringCreateWithStdString(drawingConfig->GetResourcePath("png3.9.png")) };
    woc::unique_cf<CGImageRef> image{ _CGImageCreateFromPNGFile(testFilename.get()) };
    ASSERT_NE(image, nullptr);

    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGAffineTransform flip = CGAffineTransformMakeScale(1, -1);
    CGAffineTransform shift = CGAffineTransformTranslate(flip, 0, bounds.size.height * -1);
    CGContextConcatCTM(context, shift);

    _CGContextDrawImageRect(context,
                            image.get(),
                            { 0, 0, bounds.size.width / 4, bounds.size.height / 4 },
                            { 0, 0, bounds.size.width, bounds.size.height });
}
#endif

static void _drawTiledImage(CGContextRef context, CGRect rect, const std::string& name) {
    auto drawingConfig = DrawingTestConfig::Get();
    woc::unique_cf<CFStringRef> testFilename{ _CFStringCreateWithStdString(drawingConfig->GetResourcePath(name)) };
    woc::unique_cf<CGImageRef> image{ _CGImageCreateFromPNGFile(testFilename.get()) };
    ASSERT_NE(image, nullptr);
    CGContextDrawTiledImage(context, rect, image.get());
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageHeart, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 128, 128 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageHeart.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageHeartScaledUp, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 250, 250 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageHeart.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageHeartScaledTiny, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 1, 1 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageHeart.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageHeartScaledAlpha1, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 100, 100 } };
    CGContextSetAlpha(GetDrawingContext(), 0.8);
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageHeart.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageHeartScaledAlpha2, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 256, 256 } };
    CGContextSetAlpha(GetDrawingContext(), 0.24);
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageHeart.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageHeartScaledAlpha3, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 300, 513 } };
    CGContextSetAlpha(GetDrawingContext(), 0.66);
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageHeart.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageHeartScaledDown, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 50, 50 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageHeart.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageHeartScaled, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 250, 128 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageHeart.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDog, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 256, 256 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDogScaledDown, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 50, 50 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDogScaledUp, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 512, 512 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDogScaled, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 350, 500 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDogScaled2, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 128, 240 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDogScaledAspectRatioWrong, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 1024, 25 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDogScaledAspectRatio, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 1024, 1024 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDogScaledAlpha, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 100, 100 } };
    CGContextSetAlpha(GetDrawingContext(), 0.8);
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDogScaledAlpha2, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 256, 256 } };
    CGContextSetAlpha(GetDrawingContext(), 0.24);
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageDogScaledAlpha3, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 300, 513 } };
    CGContextSetAlpha(GetDrawingContext(), 0.66);
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageDog.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageCustom, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 562, 469 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageCircleMe.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageCustomScaledUp, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 2050, 2050 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageCircleMe.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageCustomScaledDown, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 20, 20 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageCircleMe.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageCustomScaledDownReallyLow, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 1, 1 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageCircleMe.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageCustomScaled, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 10, 250 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageCircleMe.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageCustomScaledObscure, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 253, 13 } };
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageCircleMe.png");
}

DISABLED_DRAW_TEST_F(CGContext, TiledImageCustomScaledAlpha, UIKitMimicTest) {
    CGRect rect = { { 0, 0 }, { 128, 128 } };
    CGContextSetAlpha(GetDrawingContext(), 0.88);
    _drawTiledImage(GetDrawingContext(), rect, "tiledImageCircleMe.png");
}

DISABLED_DRAW_TEST_F(CGContext, DrawAnImage, UIKitMimicTest) {
    // Load an Image and draw it into the canvas context
    auto drawingConfig = DrawingTestConfig::Get();

    woc::unique_cf<CFStringRef> testFilename{ _CFStringCreateWithStdString(drawingConfig->GetResourcePath("jpg1.jpg")) };
    woc::unique_cf<CGImageRef> image{ _CGImageCreateFromJPEGFile(testFilename.get()) };
    ASSERT_NE(image, nullptr);

    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGAffineTransform flip = CGAffineTransformMakeScale(1, -1);
    CGAffineTransform shift = CGAffineTransformTranslate(flip, 0, bounds.size.height * -1);
    CGContextConcatCTM(context, shift);

    CGContextDrawImage(context, bounds, image.get());
}

DISABLED_DRAW_TEST_F(CGContext, RedBox, UIKitMimicTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGContextSetRGBFillColor(context, 1.0, 0.0, 0.0, 1.0);
    CGContextFillRect(context, CGRectInset(bounds, 10, 10));
}

DISABLED_DRAW_TEST_F(CGContext, DrawAContextIntoAnImage, UIKitMimicTest) {
    // This test will create a bitmap context, draw some entity into the context, then create a image out of the bitmap context.
    // Thereafter it will draw the image into the Canvas context

    static woc::unique_cf<CGColorSpaceRef> rgbColorSpace(CGColorSpaceCreateDeviceRGB());
    // Create a bitmap context to draw the Image into
    woc::unique_cf<CGContextRef> contextImage(CGBitmapContextCreate(
        nullptr, 10, 10, 8, 4 * 10 /* bytesPerRow = bytesPerPixel*width*/, rgbColorSpace.get(), kCGImageAlphaPremultipliedFirst));
    ASSERT_NE(contextImage, nullptr);

    CGContextSetRGBFillColor(contextImage.get(), 1.0, 0.0, 0.0, 1.0);
    CGContextFillRect(contextImage.get(), { 0, 0, 10, 10 });

    // Create the image out of the bitmap context
    woc::unique_cf<CGImageRef> image(CGBitmapContextCreateImage(contextImage.get()));
    ASSERT_NE(image, nullptr);

    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGAffineTransform flip = CGAffineTransformMakeScale(1, -1);
    CGAffineTransform shift = CGAffineTransformTranslate(flip, 0, bounds.size.height * -1);
    CGContextConcatCTM(context, shift);

    // draw the image
    CGContextDrawImage(context, bounds, image.get());
}

DISABLED_DRAW_TEST_F(CGContext, FillThenStrokeIsSameAsDrawFillStroke, WhiteBackgroundTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    // Black with a faint red outline will allow us to see through the red.
    CGContextSetRGBFillColor(context, 0.0, 0.0, 0.0, 1.0);
    CGContextSetRGBStrokeColor(context, 1.0, 0.0, 0.0, 0.33);
    CGContextSetLineWidth(context, 5.f);

    CGPoint leftCenter{ bounds.size.width / 4.f, bounds.size.height / 2.f };
    CGPoint rightCenter{ 3.f * bounds.size.width / 4.f, bounds.size.height / 2.f };

    // Left circle, fill then stroke.
    CGContextBeginPath(context);
    CGContextAddEllipseInRect(context, _CGRectCenteredOnPoint({ 150, 150 }, leftCenter));
    CGContextFillPath(context);
    CGContextBeginPath(context);
    CGContextAddEllipseInRect(context, _CGRectCenteredOnPoint({ 150, 150 }, leftCenter));
    CGContextStrokePath(context);

    // Right circle, all at once
    CGContextBeginPath(context);
    CGContextAddEllipseInRect(context, _CGRectCenteredOnPoint({ 150, 150 }, rightCenter));
    CGContextDrawPath(context, kCGPathFillStroke);
}

static void _drawThreeCirclesInContext(CGContextRef context, CGRect bounds) {
    CGPoint center = _CGRectGetCenter(bounds);
    CGRect centerEllipseRect = _CGRectCenteredOnPoint({ 150, 150 }, center);
    CGFloat translations[]{ -60.f, 0.f, +60.f };

    for (float xSlide : translations) {
        CGRect translatedRect = CGRectApplyAffineTransform(centerEllipseRect, CGAffineTransformMakeTranslation(xSlide, 0));
        CGContextFillEllipseInRect(context, translatedRect);
        CGContextStrokeEllipseInRect(context, translatedRect);
    }
}

DISABLED_DRAW_TEST_F(CGContext, OverlappingCirclesColorAlpha, WhiteBackgroundTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGContextSetRGBFillColor(context, 1.0, 0.0, 0.0, 0.5);
    CGContextSetRGBStrokeColor(context, 1.0, 0.0, 0.0, 1.0);
    CGContextSetLineWidth(context, 5);

    _drawThreeCirclesInContext(context, bounds);
}

DISABLED_DRAW_TEST_F(CGContext, OverlappingCirclesGlobalAlpha, WhiteBackgroundTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGContextSetRGBFillColor(context, 1.0, 0.0, 0.0, 1.0);
    CGContextSetRGBStrokeColor(context, 1.0, 0.0, 0.0, 1.0);
    CGContextSetLineWidth(context, 5);

    CGContextSetAlpha(context, 0.5);

    _drawThreeCirclesInContext(context, bounds);
}

DISABLED_DRAW_TEST_F(CGContext, OverlappingCirclesGlobalAlphaStackedWithColorAlpha, WhiteBackgroundTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGContextSetRGBFillColor(context, 1.0, 0.0, 0.0, 0.5);
    CGContextSetRGBStrokeColor(context, 1.0, 0.0, 0.0, 1.0);
    CGContextSetLineWidth(context, 5);

    CGContextSetAlpha(context, 0.75);

    _drawThreeCirclesInContext(context, bounds);
}

DISABLED_DRAW_TEST_F(CGContext, OverlappingCirclesTransparencyLayerAlpha, WhiteBackgroundTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGContextSetRGBFillColor(context, 1.0, 0.0, 0.0, 1.0);
    CGContextSetRGBStrokeColor(context, 1.0, 0.0, 0.0, 1.0);
    CGContextSetLineWidth(context, 5);

    CGContextSetAlpha(context, 0.5);

    CGContextBeginTransparencyLayer(context, nullptr);

    _drawThreeCirclesInContext(context, bounds);

    CGContextEndTransparencyLayer(context);
}

// This test proves that the path is stored fully transformed;
// changing the CTM before stroking it does not cause it to scale!
// However, the stroke width _is_ scaled (!)
DISABLED_DRAW_TEST_F(CGContext, ChangeCTMAfterCreatingPath, WhiteBackgroundTest) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGContextSetRGBStrokeColor(context, 1.0, 0.0, 0.0, 1.0);
    CGContextSetLineWidth(context, 1);

    CGContextBeginPath(context);
    CGContextMoveToPoint(context, 5, 5.5);
    CGContextAddLineToPoint(context, (bounds.size.width - 5) / 3, 5.5);
    CGContextStrokePath(context);

    CGContextSaveGState(context);
    CGContextBeginPath(context);
    CGContextMoveToPoint(context, 5, 10.5);
    CGContextAddLineToPoint(context, (bounds.size.width - 5) / 3, 10.5);
    CGContextScaleCTM(context, 2.0, 2.0);
    CGContextStrokePath(context);
    CGContextRestoreGState(context);

    CGContextSaveGState(context);
    CGContextBeginPath(context);
    CGContextMoveToPoint(context, 5, 15.5);
    CGContextAddLineToPoint(context, (bounds.size.width - 5) / 3, 15.5);
    CGContextScaleCTM(context, 3.0, 3.0);
    CGContextStrokePath(context);
    CGContextRestoreGState(context);
}

DRAW_TEST(CGContext, PremultipliedAlphaImage) {
    CGContextRef context = GetDrawingContext();
    CGRect bounds = GetDrawingBounds();

    CGContextSetRGBFillColor(context, 1.0, 0.0, 0.0, 0.5);
    CGContextFillRect(context, { 0, 0, 100, 100 });
}
