#include <sun/java2d/pipe/BufferedPaints.h>

#include <java/awt/Color.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Image.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Paint.h>
#include <java/awt/RadialGradientPaint.h>
#include <java/awt/TexturePaint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/PixelConverter$ArgbPre.h>
#include <sun/awt/image/PixelConverter.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

#undef LINEAR_RGB
#undef MULTI_MAX_FRACTIONS
#undef NO_CYCLE
#undef PAINT_ALPHACOLOR
#undef PAINT_GRADIENT
#undef PAINT_LIN_GRADIENT
#undef PAINT_RAD_GRADIENT
#undef PAINT_TEXTURE
#undef REPEAT
#undef TRANSFORM_ISIDENT
#undef TYPE_NEAREST_NEIGHBOR
#undef USE_MASK

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $GradientPaint = ::java::awt::GradientPaint;
using $Image = ::java::awt::Image;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $Paint = ::java::awt::Paint;
using $RadialGradientPaint = ::java::awt::RadialGradientPaint;
using $TexturePaint = ::java::awt::TexturePaint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelConverter = ::sun::awt::image::PixelConverter;
using $PixelConverter$ArgbPre = ::sun::awt::image::PixelConverter$ArgbPre;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedPaints_FieldInfo_[] = {
	{"MULTI_MAX_FRACTIONS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedPaints, MULTI_MAX_FRACTIONS)},
	{}
};

$MethodInfo _BufferedPaints_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BufferedPaints::*)()>(&BufferedPaints::init$))},
	{"colorToIntArgbPrePixel", "(Ljava/awt/Color;Z)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Color*,bool)>(&BufferedPaints::colorToIntArgbPrePixel))},
	{"convertSRGBtoLinearRGB", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&BufferedPaints::convertSRGBtoLinearRGB))},
	{"convertToIntArgbPrePixels", "([Ljava/awt/Color;Z)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ColorArray*,bool)>(&BufferedPaints::convertToIntArgbPrePixels))},
	{"resetPaint", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $STATIC, $method(static_cast<void(*)($RenderQueue*)>(&BufferedPaints::resetPaint))},
	{"setColor", "(Lsun/java2d/pipe/RenderQueue;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,int32_t)>(&BufferedPaints::setColor))},
	{"setGradientPaint", "(Lsun/java2d/pipe/RenderQueue;Ljava/awt/geom/AffineTransform;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;ZZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$AffineTransform*,$Color*,$Color*,$Point2D*,$Point2D*,bool,bool)>(&BufferedPaints::setGradientPaint))},
	{"setGradientPaint", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SunGraphics2D;Ljava/awt/GradientPaint;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SunGraphics2D*,$GradientPaint*,bool)>(&BufferedPaints::setGradientPaint))},
	{"setLinearGradientPaint", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SunGraphics2D;Ljava/awt/LinearGradientPaint;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SunGraphics2D*,$LinearGradientPaint*,bool)>(&BufferedPaints::setLinearGradientPaint))},
	{"setPaint", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SunGraphics2D;Ljava/awt/Paint;I)V", nullptr, $STATIC, $method(static_cast<void(*)($RenderQueue*,$SunGraphics2D*,$Paint*,int32_t)>(&BufferedPaints::setPaint))},
	{"setRadialGradientPaint", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SunGraphics2D;Ljava/awt/RadialGradientPaint;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SunGraphics2D*,$RadialGradientPaint*,bool)>(&BufferedPaints::setRadialGradientPaint))},
	{"setTexturePaint", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SunGraphics2D;Ljava/awt/TexturePaint;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SunGraphics2D*,$TexturePaint*,bool)>(&BufferedPaints::setTexturePaint))},
	{}
};

$ClassInfo _BufferedPaints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.BufferedPaints",
	"java.lang.Object",
	nullptr,
	_BufferedPaints_FieldInfo_,
	_BufferedPaints_MethodInfo_
};

$Object* allocate$BufferedPaints($Class* clazz) {
	return $of($alloc(BufferedPaints));
}

void BufferedPaints::init$() {
}

void BufferedPaints::setPaint($RenderQueue* rq, $SunGraphics2D* sg2d, $Paint* paint, int32_t ctxflags) {
	if ($nc(sg2d)->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) {
		setColor(rq, sg2d->pixel);
	} else {
		bool useMask = ((int32_t)(ctxflags & (uint32_t)$BufferedContext::USE_MASK)) != 0;
		switch (sg2d->paintState) {
		case $SunGraphics2D::PAINT_GRADIENT:
			{
				setGradientPaint(rq, sg2d, $cast($GradientPaint, paint), useMask);
				break;
			}
		case $SunGraphics2D::PAINT_LIN_GRADIENT:
			{
				setLinearGradientPaint(rq, sg2d, $cast($LinearGradientPaint, paint), useMask);
				break;
			}
		case $SunGraphics2D::PAINT_RAD_GRADIENT:
			{
				setRadialGradientPaint(rq, sg2d, $cast($RadialGradientPaint, paint), useMask);
				break;
			}
		case $SunGraphics2D::PAINT_TEXTURE:
			{
				setTexturePaint(rq, sg2d, $cast($TexturePaint, paint), useMask);
				break;
			}
		default:
			{
				break;
			}
		}
	}
}

void BufferedPaints::resetPaint($RenderQueue* rq) {
	$nc(rq)->ensureCapacity(4);
	$var($RenderBuffer, buf, rq->getBuffer());
	$nc(buf)->putInt(100);
}

void BufferedPaints::setColor($RenderQueue* rq, int32_t pixel) {
	$nc(rq)->ensureCapacity(8);
	$var($RenderBuffer, buf, rq->getBuffer());
	$nc(buf)->putInt(101);
	buf->putInt(pixel);
}

void BufferedPaints::setGradientPaint($RenderQueue* rq, $AffineTransform* at, $Color* c1, $Color* c2, $Point2D* pt1, $Point2D* pt2, bool isCyclic, bool useMask) {
	$useLocalCurrentObjectStackCache();
	$init($PixelConverter$ArgbPre);
	$var($PixelConverter, pc, $PixelConverter$ArgbPre::instance);
	int32_t pixel1 = $nc(pc)->rgbToPixel($nc(c1)->getRGB(), nullptr);
	int32_t pixel2 = pc->rgbToPixel($nc(c2)->getRGB(), nullptr);
	double x = $nc(pt1)->getX();
	double y = pt1->getY();
	$nc(at)->translate(x, y);
	x = $nc(pt2)->getX() - x;
	y = pt2->getY() - y;
	double len = $Math::sqrt(x * x + y * y);
	at->rotate(x, y);
	at->scale(2 * len, (double)1);
	at->translate(-0.25, (double)0);
	double p0 = 0.0;
	double p1 = 0.0;
	double p3 = 0.0;
	try {
		at->invert();
		p0 = at->getScaleX();
		p1 = at->getShearX();
		p3 = at->getTranslateX();
	} catch ($NoninvertibleTransformException&) {
		$var($NoninvertibleTransformException, e, $catch());
		p0 = (p1 = (p3 = 0.0));
	}
	$nc(rq)->ensureCapacityAndAlignment(44, 12);
	$var($RenderBuffer, buf, rq->getBuffer());
	$nc(buf)->putInt(102);
	buf->putInt(useMask ? 1 : 0);
	buf->putInt(isCyclic ? 1 : 0);
	$nc($($nc($(buf->putDouble(p0)))->putDouble(p1)))->putDouble(p3);
	$nc($(buf->putInt(pixel1)))->putInt(pixel2);
}

void BufferedPaints::setGradientPaint($RenderQueue* rq, $SunGraphics2D* sg2d, $GradientPaint* paint, bool useMask) {
	$useLocalCurrentObjectStackCache();
	$var($RenderQueue, var$0, rq);
	$var($AffineTransform, var$1, $cast($AffineTransform, $nc($nc(sg2d)->transform$)->clone()));
	$var($Color, var$2, $nc(paint)->getColor1());
	$var($Color, var$3, paint->getColor2());
	$var($Point2D, var$4, paint->getPoint1());
	$var($Point2D, var$5, paint->getPoint2());
	setGradientPaint(var$0, var$1, var$2, var$3, var$4, var$5, paint->isCyclic(), useMask);
}

void BufferedPaints::setTexturePaint($RenderQueue* rq, $SunGraphics2D* sg2d, $TexturePaint* paint, bool useMask) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bi, $nc(paint)->getImage());
	$var($SurfaceData, dstData, $nc(sg2d)->surfaceData);
	$init($CompositeType);
	$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	bool filter = (sg2d->interpolationType != $AffineTransformOp::TYPE_NEAREST_NEIGHBOR);
	$var($AffineTransform, at, $cast($AffineTransform, $nc(sg2d->transform$)->clone()));
	$var($Rectangle2D, anchor, paint->getAnchorRect());
	double var$0 = $nc(anchor)->getX();
	$nc(at)->translate(var$0, anchor->getY());
	double var$1 = $nc(anchor)->getWidth();
	at->scale(var$1, anchor->getHeight());
	double xp0 = 0.0;
	double xp1 = 0.0;
	double xp3 = 0.0;
	double yp0 = 0.0;
	double yp1 = 0.0;
	double yp3 = 0.0;
	try {
		at->invert();
		xp0 = at->getScaleX();
		xp1 = at->getShearX();
		xp3 = at->getTranslateX();
		yp0 = at->getShearY();
		yp1 = at->getScaleY();
		yp3 = at->getTranslateY();
	} catch ($NoninvertibleTransformException&) {
		$var($NoninvertibleTransformException, e, $catch());
		xp0 = (xp1 = (xp3 = (yp0 = (yp1 = (yp3 = 0.0)))));
	}
	$nc(rq)->ensureCapacityAndAlignment(68, 12);
	$var($RenderBuffer, buf, rq->getBuffer());
	$nc(buf)->putInt(105);
	buf->putInt(useMask ? 1 : 0);
	buf->putInt(filter ? 1 : 0);
	buf->putLong($nc(srcData)->getNativeOps());
	$nc($($nc($(buf->putDouble(xp0)))->putDouble(xp1)))->putDouble(xp3);
	$nc($($nc($(buf->putDouble(yp0)))->putDouble(yp1)))->putDouble(yp3);
}

int32_t BufferedPaints::convertSRGBtoLinearRGB(int32_t color) {
	float input = 0.0;
	float output = 0.0;
	input = color / 255.0f;
	if (input <= 0.04045f) {
		output = input / 12.92f;
	} else {
		output = (float)$Math::pow((input + 0.055) / 1.055, 2.4);
	}
	return $Math::round(output * 255.0f);
}

int32_t BufferedPaints::colorToIntArgbPrePixel($Color* c, bool linear) {
	int32_t rgb = $nc(c)->getRGB();
	if (!linear && ((rgb >> 24) == -1)) {
		return rgb;
	}
	int32_t a = (int32_t)((uint32_t)rgb >> 24);
	int32_t r = (int32_t)((rgb >> 16) & (uint32_t)255);
	int32_t g = (int32_t)((rgb >> 8) & (uint32_t)255);
	int32_t b = (int32_t)((rgb) & (uint32_t)255);
	if (linear) {
		r = convertSRGBtoLinearRGB(r);
		g = convertSRGBtoLinearRGB(g);
		b = convertSRGBtoLinearRGB(b);
	}
	int32_t a2 = a + (a >> 7);
	r = (r * a2) >> 8;
	g = (g * a2) >> 8;
	b = (b * a2) >> 8;
	return ((((a << 24) | (r << 16)) | (g << 8)) | (b));
}

$ints* BufferedPaints::convertToIntArgbPrePixels($ColorArray* colors, bool linear) {
	$var($ints, pixels, $new($ints, $nc(colors)->length));
	for (int32_t i = 0; i < colors->length; ++i) {
		pixels->set(i, colorToIntArgbPrePixel(colors->get(i), linear));
	}
	return pixels;
}

void BufferedPaints::setLinearGradientPaint($RenderQueue* rq, $SunGraphics2D* sg2d, $LinearGradientPaint* paint, bool useMask) {
	$useLocalCurrentObjectStackCache();
	$init($MultipleGradientPaint$ColorSpaceType);
	bool linear = ($nc(paint)->getColorSpace() == $MultipleGradientPaint$ColorSpaceType::LINEAR_RGB);
	$var($ColorArray, colors, paint->getColors());
	int32_t numStops = $nc(colors)->length;
	$var($Point2D, pt1, paint->getStartPoint());
	$var($Point2D, pt2, paint->getEndPoint());
	$var($AffineTransform, at, paint->getTransform());
	$nc(at)->preConcatenate($nc(sg2d)->transform$);
	$init($MultipleGradientPaint$CycleMethod);
	if (!linear && numStops == 2 && paint->getCycleMethod() != $MultipleGradientPaint$CycleMethod::REPEAT) {
		bool isCyclic = (paint->getCycleMethod() != $MultipleGradientPaint$CycleMethod::NO_CYCLE);
		setGradientPaint(rq, at, colors->get(0), colors->get(1), pt1, pt2, isCyclic, useMask);
		return;
	}
	int32_t cycleMethod = $nc($(paint->getCycleMethod()))->ordinal();
	$var($floats, fractions, paint->getFractions());
	$var($ints, pixels, convertToIntArgbPrePixels(colors, linear));
	double x = $nc(pt1)->getX();
	double y = pt1->getY();
	at->translate(x, y);
	x = $nc(pt2)->getX() - x;
	y = pt2->getY() - y;
	double len = $Math::sqrt(x * x + y * y);
	at->rotate(x, y);
	at->scale(len, (double)1);
	float p0 = 0.0;
	float p1 = 0.0;
	float p3 = 0.0;
	try {
		at->invert();
		p0 = (float)at->getScaleX();
		p1 = (float)at->getShearX();
		p3 = (float)at->getTranslateX();
	} catch ($NoninvertibleTransformException&) {
		$var($NoninvertibleTransformException, e, $catch());
		p0 = (p1 = (p3 = 0.0f));
	}
	$nc(rq)->ensureCapacity(20 + 12 + (numStops * 4 * 2));
	$var($RenderBuffer, buf, rq->getBuffer());
	$nc(buf)->putInt(103);
	buf->putInt(useMask ? 1 : 0);
	buf->putInt(linear ? 1 : 0);
	buf->putInt(cycleMethod);
	buf->putInt(numStops);
	buf->putFloat(p0);
	buf->putFloat(p1);
	buf->putFloat(p3);
	buf->put(fractions);
	buf->put(pixels);
}

void BufferedPaints::setRadialGradientPaint($RenderQueue* rq, $SunGraphics2D* sg2d, $RadialGradientPaint* paint, bool useMask) {
	$useLocalCurrentObjectStackCache();
	$init($MultipleGradientPaint$ColorSpaceType);
	bool linear = ($nc(paint)->getColorSpace() == $MultipleGradientPaint$ColorSpaceType::LINEAR_RGB);
	int32_t cycleMethod = $nc($(paint->getCycleMethod()))->ordinal();
	$var($floats, fractions, paint->getFractions());
	$var($ColorArray, colors, paint->getColors());
	int32_t numStops = $nc(colors)->length;
	$var($ints, pixels, convertToIntArgbPrePixels(colors, linear));
	$var($Point2D, center, paint->getCenterPoint());
	$var($Point2D, focus, paint->getFocusPoint());
	float radius = paint->getRadius();
	double cx = $nc(center)->getX();
	double cy = center->getY();
	double fx = $nc(focus)->getX();
	double fy = focus->getY();
	$var($AffineTransform, at, paint->getTransform());
	$nc(at)->preConcatenate($nc(sg2d)->transform$);
	$assign(focus, at->transform(focus, focus));
	at->translate(cx, cy);
	at->rotate(fx - cx, fy - cy);
	at->scale(radius, radius);
	try {
		at->invert();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		at->setToScale(0.0, 0.0);
	}
	$assign(focus, at->transform(focus, focus));
	fx = $Math::min(focus->getX(), 0.99);
	$nc(rq)->ensureCapacity(20 + 28 + (numStops * 4 * 2));
	$var($RenderBuffer, buf, rq->getBuffer());
	$nc(buf)->putInt(104);
	buf->putInt(useMask ? 1 : 0);
	buf->putInt(linear ? 1 : 0);
	buf->putInt(numStops);
	buf->putInt(cycleMethod);
	buf->putFloat((float)at->getScaleX());
	buf->putFloat((float)at->getShearX());
	buf->putFloat((float)at->getTranslateX());
	buf->putFloat((float)at->getShearY());
	buf->putFloat((float)at->getScaleY());
	buf->putFloat((float)at->getTranslateY());
	buf->putFloat((float)fx);
	buf->put(fractions);
	buf->put(pixels);
}

BufferedPaints::BufferedPaints() {
}

$Class* BufferedPaints::load$($String* name, bool initialize) {
	$loadClass(BufferedPaints, name, initialize, &_BufferedPaints_ClassInfo_, allocate$BufferedPaints);
	return class$;
}

$Class* BufferedPaints::class$ = nullptr;

		} // pipe
	} // java2d
} // sun