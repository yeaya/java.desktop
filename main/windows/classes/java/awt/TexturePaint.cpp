#include <java/awt/TexturePaint.h>

#include <java/awt/PaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/TexturePaintContext.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

using $Paint = ::java::awt::Paint;
using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $TexturePaintContext = ::java::awt::TexturePaintContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _TexturePaint_FieldInfo_[] = {
	{"bufImg", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(TexturePaint, bufImg)},
	{"tx", "D", nullptr, 0, $field(TexturePaint, tx)},
	{"ty", "D", nullptr, 0, $field(TexturePaint, ty)},
	{"sx", "D", nullptr, 0, $field(TexturePaint, sx)},
	{"sy", "D", nullptr, 0, $field(TexturePaint, sy)},
	{}
};

$MethodInfo _TexturePaint_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/BufferedImage;Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC, $method(static_cast<void(TexturePaint::*)($BufferedImage*,$Rectangle2D*)>(&TexturePaint::init$))},
	{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)Ljava/awt/PaintContext;", nullptr, $PUBLIC},
	{"getAnchorRect", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getImage", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TexturePaint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.TexturePaint",
	"java.lang.Object",
	"java.awt.Paint",
	_TexturePaint_FieldInfo_,
	_TexturePaint_MethodInfo_
};

$Object* allocate$TexturePaint($Class* clazz) {
	return $of($alloc(TexturePaint));
}

void TexturePaint::init$($BufferedImage* txtr, $Rectangle2D* anchor) {
	$set(this, bufImg, txtr);
	this->tx = $nc(anchor)->getX();
	this->ty = anchor->getY();
	double var$0 = anchor->getWidth();
	this->sx = var$0 / $nc(this->bufImg)->getWidth();
	double var$1 = anchor->getHeight();
	this->sy = var$1 / $nc(this->bufImg)->getHeight();
}

$BufferedImage* TexturePaint::getImage() {
	return this->bufImg;
}

$Rectangle2D* TexturePaint::getAnchorRect() {
	double var$0 = this->tx;
	double var$1 = this->ty;
	double var$2 = this->sx * $nc(this->bufImg)->getWidth();
	return $new($Rectangle2D$Double, var$0, var$1, var$2, this->sy * $nc(this->bufImg)->getHeight());
}

$PaintContext* TexturePaint::createContext($ColorModel* cm, $Rectangle* deviceBounds, $Rectangle2D* userBounds, $AffineTransform* xform$renamed, $RenderingHints* hints) {
	$var($AffineTransform, xform, xform$renamed);
	if (xform == nullptr) {
		$assign(xform, $new($AffineTransform));
	} else {
		$assign(xform, $cast($AffineTransform, $nc(xform)->clone()));
	}
	$nc(xform)->translate(this->tx, this->ty);
	xform->scale(this->sx, this->sy);
	return $TexturePaintContext::getContext(this->bufImg, xform, hints, deviceBounds);
}

int32_t TexturePaint::getTransparency() {
	return $nc(($($nc(this->bufImg)->getColorModel())))->getTransparency();
}

TexturePaint::TexturePaint() {
}

$Class* TexturePaint::load$($String* name, bool initialize) {
	$loadClass(TexturePaint, name, initialize, &_TexturePaint_ClassInfo_, allocate$TexturePaint);
	return class$;
}

$Class* TexturePaint::class$ = nullptr;

	} // awt
} // java