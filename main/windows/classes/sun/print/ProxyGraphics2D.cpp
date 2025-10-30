#include <sun/print/ProxyGraphics2D.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/RenderContext.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <java/awt/print/PrinterJob.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/util/Map.h>
#include <sun/print/PrinterGraphicsConfig.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

#undef TYPE_GENERAL_ROTATION
#undef TYPE_GENERAL_TRANSFORM
#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $RenderContext = ::java::awt::image::renderable::RenderContext;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $PrinterGraphics = ::java::awt::print::PrinterGraphics;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $Map = ::java::util::Map;
using $PrinterGraphicsConfig = ::sun::print::PrinterGraphicsConfig;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _ProxyGraphics2D_FieldInfo_[] = {
	{"mGraphics", "Ljava/awt/Graphics2D;", nullptr, 0, $field(ProxyGraphics2D, mGraphics)},
	{"mPrinterJob", "Ljava/awt/print/PrinterJob;", nullptr, 0, $field(ProxyGraphics2D, mPrinterJob)},
	{}
};

$MethodInfo _ProxyGraphics2D_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Graphics2D;Ljava/awt/print/PrinterJob;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyGraphics2D::*)($Graphics2D*,$PrinterJob*)>(&ProxyGraphics2D::init$))},
	{"addRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC},
	{"clearRect", "(IIII)V", nullptr, $PUBLIC},
	{"clip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"clipRect", "(IIII)V", nullptr, $PUBLIC},
	{"copyArea", "(IIIIII)V", nullptr, $PUBLIC},
	{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"draw", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawArc", "(IIIIII)V", nullptr, $PUBLIC},
	{"drawGlyphVector", "(Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(IIII)V", nullptr, $PUBLIC},
	{"drawPolygon", "([I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "([I[II)V", nullptr, $PUBLIC},
	{"drawRenderableImage", "(Ljava/awt/image/renderable/RenderableImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"drawRenderedImage", "(Ljava/awt/image/RenderedImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;FF)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC},
	{"fill", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillArc", "(IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(IIII)V", nullptr, $PUBLIC},
	{"fillPolygon", "([I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBufferedImageCopy", "(Ljava/awt/Image;Ljava/awt/Color;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(static_cast<$BufferedImage*(ProxyGraphics2D::*)($Image*,$Color*)>(&ProxyGraphics2D::getBufferedImageCopy))},
	{"getClip", "()Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getClipBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getComposite", "()Ljava/awt/Composite;", nullptr, $PUBLIC},
	{"getDelegate", "()Ljava/awt/Graphics2D;", nullptr, $PUBLIC},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC},
	{"getPaint", "()Ljava/awt/Paint;", nullptr, $PUBLIC},
	{"getPrinterJob", "()Ljava/awt/print/PrinterJob;", nullptr, $PUBLIC},
	{"getRenderingHint", "(Ljava/awt/RenderingHints$Key;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC},
	{"getStroke", "()Ljava/awt/Stroke;", nullptr, $PUBLIC},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"hit", "(Ljava/awt/Rectangle;Ljava/awt/Shape;Z)Z", nullptr, $PUBLIC},
	{"needToCopyBgColorImage", "(Ljava/awt/Image;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ProxyGraphics2D::*)($Image*)>(&ProxyGraphics2D::needToCopyBgColorImage))},
	{"rotate", "(D)V", nullptr, $PUBLIC},
	{"rotate", "(DDD)V", nullptr, $PUBLIC},
	{"scale", "(DD)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setClip", "(IIII)V", nullptr, $PUBLIC},
	{"setClip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setComposite", "(Ljava/awt/Composite;)V", nullptr, $PUBLIC},
	{"setDelegate", "(Ljava/awt/Graphics2D;)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setPaint", "(Ljava/awt/Paint;)V", nullptr, $PUBLIC},
	{"setPaintMode", "()V", nullptr, $PUBLIC},
	{"setRenderingHint", "(Ljava/awt/RenderingHints$Key;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC},
	{"setStroke", "(Ljava/awt/Stroke;)V", nullptr, $PUBLIC},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"setXORMode", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"shear", "(DD)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{"translate", "(DD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ProxyGraphics2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.ProxyGraphics2D",
	"java.awt.Graphics2D",
	"java.awt.print.PrinterGraphics",
	_ProxyGraphics2D_FieldInfo_,
	_ProxyGraphics2D_MethodInfo_
};

$Object* allocate$ProxyGraphics2D($Class* clazz) {
	return $of($alloc(ProxyGraphics2D));
}

$String* ProxyGraphics2D::toString() {
	 return this->$Graphics2D::toString();
}

int32_t ProxyGraphics2D::hashCode() {
	 return this->$Graphics2D::hashCode();
}

bool ProxyGraphics2D::equals(Object$* arg0) {
	 return this->$Graphics2D::equals(arg0);
}

$Object* ProxyGraphics2D::clone() {
	 return this->$Graphics2D::clone();
}

void ProxyGraphics2D::init$($Graphics2D* graphics, $PrinterJob* printerJob) {
	$Graphics2D::init$();
	$set(this, mGraphics, graphics);
	$set(this, mPrinterJob, printerJob);
}

$Graphics2D* ProxyGraphics2D::getDelegate() {
	return this->mGraphics;
}

void ProxyGraphics2D::setDelegate($Graphics2D* graphics) {
	$set(this, mGraphics, graphics);
}

$PrinterJob* ProxyGraphics2D::getPrinterJob() {
	return this->mPrinterJob;
}

$GraphicsConfiguration* ProxyGraphics2D::getDeviceConfiguration() {
	return $nc(($cast($RasterPrinterJob, this->mPrinterJob)))->getPrinterGraphicsConfig();
}

$Graphics* ProxyGraphics2D::create() {
	return $new(ProxyGraphics2D, $cast($Graphics2D, $($nc(this->mGraphics)->create())), this->mPrinterJob);
}

void ProxyGraphics2D::translate(int32_t x, int32_t y) {
	$nc(this->mGraphics)->translate(x, y);
}

void ProxyGraphics2D::translate(double tx, double ty) {
	$nc(this->mGraphics)->translate(tx, ty);
}

void ProxyGraphics2D::rotate(double theta) {
	$nc(this->mGraphics)->rotate(theta);
}

void ProxyGraphics2D::rotate(double theta, double x, double y) {
	$nc(this->mGraphics)->rotate(theta, x, y);
}

void ProxyGraphics2D::scale(double sx, double sy) {
	$nc(this->mGraphics)->scale(sx, sy);
}

void ProxyGraphics2D::shear(double shx, double shy) {
	$nc(this->mGraphics)->shear(shx, shy);
}

$Color* ProxyGraphics2D::getColor() {
	return $nc(this->mGraphics)->getColor();
}

void ProxyGraphics2D::setColor($Color* c) {
	$nc(this->mGraphics)->setColor(c);
}

void ProxyGraphics2D::setPaintMode() {
	$nc(this->mGraphics)->setPaintMode();
}

void ProxyGraphics2D::setXORMode($Color* c1) {
	$nc(this->mGraphics)->setXORMode(c1);
}

$Font* ProxyGraphics2D::getFont() {
	return $nc(this->mGraphics)->getFont();
}

void ProxyGraphics2D::setFont($Font* font) {
	$nc(this->mGraphics)->setFont(font);
}

$FontMetrics* ProxyGraphics2D::getFontMetrics($Font* f) {
	return $nc(this->mGraphics)->getFontMetrics(f);
}

$FontRenderContext* ProxyGraphics2D::getFontRenderContext() {
	return $nc(this->mGraphics)->getFontRenderContext();
}

$Rectangle* ProxyGraphics2D::getClipBounds() {
	return $nc(this->mGraphics)->getClipBounds();
}

void ProxyGraphics2D::clipRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->mGraphics)->clipRect(x, y, width, height);
}

void ProxyGraphics2D::setClip(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->mGraphics)->setClip(x, y, width, height);
}

$Shape* ProxyGraphics2D::getClip() {
	return $nc(this->mGraphics)->getClip();
}

void ProxyGraphics2D::setClip($Shape* clip) {
	$nc(this->mGraphics)->setClip(clip);
}

void ProxyGraphics2D::copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) {
	$nc(this->mGraphics)->copyArea(x, y, width, height, dx, dy);
}

void ProxyGraphics2D::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$nc(this->mGraphics)->drawLine(x1, y1, x2, y2);
}

void ProxyGraphics2D::fillRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->mGraphics)->fillRect(x, y, width, height);
}

void ProxyGraphics2D::clearRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->mGraphics)->clearRect(x, y, width, height);
}

void ProxyGraphics2D::drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$nc(this->mGraphics)->drawRoundRect(x, y, width, height, arcWidth, arcHeight);
}

void ProxyGraphics2D::fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$nc(this->mGraphics)->fillRoundRect(x, y, width, height, arcWidth, arcHeight);
}

void ProxyGraphics2D::drawOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->mGraphics)->drawOval(x, y, width, height);
}

void ProxyGraphics2D::fillOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->mGraphics)->fillOval(x, y, width, height);
}

void ProxyGraphics2D::drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$nc(this->mGraphics)->drawArc(x, y, width, height, startAngle, arcAngle);
}

void ProxyGraphics2D::fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$nc(this->mGraphics)->fillArc(x, y, width, height, startAngle, arcAngle);
}

void ProxyGraphics2D::drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$nc(this->mGraphics)->drawPolyline(xPoints, yPoints, nPoints);
}

void ProxyGraphics2D::drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$nc(this->mGraphics)->drawPolygon(xPoints, yPoints, nPoints);
}

void ProxyGraphics2D::fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$nc(this->mGraphics)->fillPolygon(xPoints, yPoints, nPoints);
}

void ProxyGraphics2D::drawString($String* str, int32_t x, int32_t y) {
	$nc(this->mGraphics)->drawString(str, x, y);
}

void ProxyGraphics2D::drawString($AttributedCharacterIterator* iterator, int32_t x, int32_t y) {
	$nc(this->mGraphics)->drawString(iterator, x, y);
}

void ProxyGraphics2D::drawString($AttributedCharacterIterator* iterator, float x, float y) {
	$nc(this->mGraphics)->drawString(iterator, x, y);
}

bool ProxyGraphics2D::drawImage($Image* img, int32_t x, int32_t y, $ImageObserver* observer) {
	return $nc(this->mGraphics)->drawImage(img, x, y, observer);
}

bool ProxyGraphics2D::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $ImageObserver* observer) {
	return $nc(this->mGraphics)->drawImage(img, x, y, width, height, observer);
}

bool ProxyGraphics2D::drawImage($Image* img, int32_t x, int32_t y, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	bool result = false;
	if (needToCopyBgColorImage(img)) {
		$var($BufferedImage, imageCopy, getBufferedImageCopy(img, bgcolor));
		result = $nc(this->mGraphics)->drawImage(imageCopy, x, y, nullptr);
	} else {
		result = $nc(this->mGraphics)->drawImage(img, x, y, bgcolor, observer);
	}
	return result;
}

bool ProxyGraphics2D::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	bool result = false;
	if (needToCopyBgColorImage(img)) {
		$var($BufferedImage, imageCopy, getBufferedImageCopy(img, bgcolor));
		result = $nc(this->mGraphics)->drawImage(imageCopy, x, y, width, height, nullptr);
	} else {
		result = $nc(this->mGraphics)->drawImage(img, x, y, width, height, bgcolor, observer);
	}
	return result;
}

bool ProxyGraphics2D::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $ImageObserver* observer) {
	return $nc(this->mGraphics)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, observer);
}

bool ProxyGraphics2D::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	bool result = false;
	if (needToCopyBgColorImage(img)) {
		$var($BufferedImage, imageCopy, getBufferedImageCopy(img, bgcolor));
		result = $nc(this->mGraphics)->drawImage(imageCopy, dx1, dy1, dx2, dy2, sy1, sy1, sx2, sy2, nullptr);
	} else {
		result = $nc(this->mGraphics)->drawImage(img, dx1, dy1, dx2, dy2, sy1, sy1, sx2, sy2, bgcolor, observer);
	}
	return result;
}

bool ProxyGraphics2D::needToCopyBgColorImage($Image* img) {
	bool needToCopy = false;
	$var($AffineTransform, transform, getTransform());
	return ((int32_t)($nc(transform)->getType() & (uint32_t)($AffineTransform::TYPE_GENERAL_ROTATION | $AffineTransform::TYPE_GENERAL_TRANSFORM))) != 0;
}

$BufferedImage* ProxyGraphics2D::getBufferedImageCopy($Image* img, $Color* bgcolor) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, imageCopy, nullptr);
	int32_t width = $nc(img)->getWidth(nullptr);
	int32_t height = img->getHeight(nullptr);
	if (width > 0 && height > 0) {
		int32_t imageType = 0;
		if ($instanceOf($BufferedImage, img)) {
			$var($BufferedImage, bufImage, $cast($BufferedImage, img));
			imageType = bufImage->getType();
		} else {
			imageType = $BufferedImage::TYPE_INT_ARGB;
		}
		$assign(imageCopy, $new($BufferedImage, width, height, imageType));
		$var($Graphics, g, imageCopy->createGraphics());
		$nc(g)->drawImage(img, 0, 0, bgcolor, nullptr);
		g->dispose();
	} else {
		$assign(imageCopy, nullptr);
	}
	return imageCopy;
}

void ProxyGraphics2D::drawRenderedImage($RenderedImage* img, $AffineTransform* xform) {
	$nc(this->mGraphics)->drawRenderedImage(img, xform);
}

void ProxyGraphics2D::drawRenderableImage($RenderableImage* img, $AffineTransform* xform) {
	$useLocalCurrentObjectStackCache();
	if (img == nullptr) {
		return;
	}
	$var($AffineTransform, pipeTransform, getTransform());
	$var($AffineTransform, concatTransform, $new($AffineTransform, xform));
	concatTransform->concatenate(pipeTransform);
	$var($AffineTransform, reverseTransform, nullptr);
	$var($RenderContext, rc, $new($RenderContext, concatTransform));
	try {
		$assign(reverseTransform, $nc(pipeTransform)->createInverse());
	} catch ($NoninvertibleTransformException& nte) {
		$assign(rc, $new($RenderContext, pipeTransform));
		$assign(reverseTransform, $new($AffineTransform));
	}
	$var($RenderedImage, rendering, $nc(img)->createRendering(rc));
	drawRenderedImage(rendering, reverseTransform);
}

void ProxyGraphics2D::dispose() {
	$nc(this->mGraphics)->dispose();
}

void ProxyGraphics2D::finalize() {
}

void ProxyGraphics2D::draw($Shape* s) {
	$nc(this->mGraphics)->draw(s);
}

bool ProxyGraphics2D::drawImage($Image* img, $AffineTransform* xform, $ImageObserver* obs) {
	return $nc(this->mGraphics)->drawImage(img, xform, obs);
}

void ProxyGraphics2D::drawImage($BufferedImage* img, $BufferedImageOp* op, int32_t x, int32_t y) {
	$nc(this->mGraphics)->drawImage(img, op, x, y);
}

void ProxyGraphics2D::drawString($String* str, float x, float y) {
	$nc(this->mGraphics)->drawString(str, x, y);
}

void ProxyGraphics2D::drawGlyphVector($GlyphVector* g, float x, float y) {
	$nc(this->mGraphics)->drawGlyphVector(g, x, y);
}

void ProxyGraphics2D::fill($Shape* s) {
	$nc(this->mGraphics)->fill(s);
}

bool ProxyGraphics2D::hit($Rectangle* rect, $Shape* s, bool onStroke) {
	return $nc(this->mGraphics)->hit(rect, s, onStroke);
}

void ProxyGraphics2D::setComposite($Composite* comp) {
	$nc(this->mGraphics)->setComposite(comp);
}

void ProxyGraphics2D::setPaint($Paint* paint) {
	$nc(this->mGraphics)->setPaint(paint);
}

void ProxyGraphics2D::setStroke($Stroke* s) {
	$nc(this->mGraphics)->setStroke(s);
}

void ProxyGraphics2D::setRenderingHint($RenderingHints$Key* hintCategory, Object$* hintValue) {
	$nc(this->mGraphics)->setRenderingHint(hintCategory, hintValue);
}

$Object* ProxyGraphics2D::getRenderingHint($RenderingHints$Key* hintCategory) {
	return $of($nc(this->mGraphics)->getRenderingHint(hintCategory));
}

void ProxyGraphics2D::setRenderingHints($Map* hints) {
	$nc(this->mGraphics)->setRenderingHints(hints);
}

void ProxyGraphics2D::addRenderingHints($Map* hints) {
	$nc(this->mGraphics)->addRenderingHints(hints);
}

$RenderingHints* ProxyGraphics2D::getRenderingHints() {
	return $nc(this->mGraphics)->getRenderingHints();
}

void ProxyGraphics2D::transform($AffineTransform* Tx) {
	$nc(this->mGraphics)->transform(Tx);
}

void ProxyGraphics2D::setTransform($AffineTransform* Tx) {
	$nc(this->mGraphics)->setTransform(Tx);
}

$AffineTransform* ProxyGraphics2D::getTransform() {
	return $nc(this->mGraphics)->getTransform();
}

$Paint* ProxyGraphics2D::getPaint() {
	return $nc(this->mGraphics)->getPaint();
}

$Composite* ProxyGraphics2D::getComposite() {
	return $nc(this->mGraphics)->getComposite();
}

void ProxyGraphics2D::setBackground($Color* color) {
	$nc(this->mGraphics)->setBackground(color);
}

$Color* ProxyGraphics2D::getBackground() {
	return $nc(this->mGraphics)->getBackground();
}

$Stroke* ProxyGraphics2D::getStroke() {
	return $nc(this->mGraphics)->getStroke();
}

void ProxyGraphics2D::clip($Shape* s) {
	$nc(this->mGraphics)->clip(s);
}

ProxyGraphics2D::ProxyGraphics2D() {
}

$Class* ProxyGraphics2D::load$($String* name, bool initialize) {
	$loadClass(ProxyGraphics2D, name, initialize, &_ProxyGraphics2D_ClassInfo_, allocate$ProxyGraphics2D);
	return class$;
}

$Class* ProxyGraphics2D::class$ = nullptr;

	} // print
} // sun