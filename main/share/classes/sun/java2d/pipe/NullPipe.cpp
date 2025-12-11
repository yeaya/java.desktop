#include <sun/java2d/pipe/NullPipe.h>

#include <java/awt/Color.h>
#include <java/awt/Image.h>
#include <java/awt/Shape.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $Shape = ::java::awt::Shape;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _NullPipe_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullPipe::*)()>(&NullPipe::init$))},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawChars", "(Lsun/java2d/SunGraphics2D;[CIIII)V", nullptr, $PUBLIC},
	{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawString", "(Lsun/java2d/SunGraphics2D;Ljava/lang/String;DD)V", nullptr, $PUBLIC},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NullPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.NullPipe",
	"java.lang.Object",
	"sun.java2d.pipe.PixelDrawPipe,sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.TextPipe,sun.java2d.pipe.DrawImagePipe",
	nullptr,
	_NullPipe_MethodInfo_
};

$Object* allocate$NullPipe($Class* clazz) {
	return $of($alloc(NullPipe));
}

int32_t NullPipe::hashCode() {
	 return this->$PixelDrawPipe::hashCode();
}

bool NullPipe::equals(Object$* arg0) {
	 return this->$PixelDrawPipe::equals(arg0);
}

$Object* NullPipe::clone() {
	 return this->$PixelDrawPipe::clone();
}

$String* NullPipe::toString() {
	 return this->$PixelDrawPipe::toString();
}

void NullPipe::finalize() {
	this->$PixelDrawPipe::finalize();
}

void NullPipe::init$() {
}

void NullPipe::drawLine($SunGraphics2D* sg, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
}

void NullPipe::drawRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void NullPipe::fillRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void NullPipe::drawRoundRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
}

void NullPipe::fillRoundRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
}

void NullPipe::drawOval($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void NullPipe::fillOval($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void NullPipe::drawArc($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
}

void NullPipe::fillArc($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
}

void NullPipe::drawPolyline($SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
}

void NullPipe::drawPolygon($SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
}

void NullPipe::fillPolygon($SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
}

void NullPipe::draw($SunGraphics2D* sg, $Shape* s) {
}

void NullPipe::fill($SunGraphics2D* sg, $Shape* s) {
}

void NullPipe::drawString($SunGraphics2D* sg, $String* s, double x, double y) {
}

void NullPipe::drawGlyphVector($SunGraphics2D* sg, $GlyphVector* g, float x, float y) {
}

void NullPipe::drawChars($SunGraphics2D* sg, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
}

bool NullPipe::copyImage($SunGraphics2D* sg, $Image* img, int32_t x, int32_t y, $Color* bgColor, $ImageObserver* observer) {
	return false;
}

bool NullPipe::copyImage($SunGraphics2D* sg, $Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h, $Color* bgColor, $ImageObserver* observer) {
	return false;
}

bool NullPipe::scaleImage($SunGraphics2D* sg, $Image* img, int32_t x, int32_t y, int32_t w, int32_t h, $Color* bgColor, $ImageObserver* observer) {
	return false;
}

bool NullPipe::scaleImage($SunGraphics2D* sg, $Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor, $ImageObserver* observer) {
	return false;
}

bool NullPipe::transformImage($SunGraphics2D* sg, $Image* img, $AffineTransform* atfm, $ImageObserver* observer) {
	return false;
}

void NullPipe::transformImage($SunGraphics2D* sg, $BufferedImage* img, $BufferedImageOp* op, int32_t x, int32_t y) {
}

NullPipe::NullPipe() {
}

$Class* NullPipe::load$($String* name, bool initialize) {
	$loadClass(NullPipe, name, initialize, &_NullPipe_ClassInfo_, allocate$NullPipe);
	return class$;
}

$Class* NullPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun