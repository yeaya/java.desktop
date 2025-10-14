#include <sun/font/TextSourceLabel.h>

#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/GlyphLayout$LayoutEngineFactory.h>
#include <sun/font/GlyphLayout.h>
#include <sun/font/StandardGlyphVector.h>
#include <sun/font/TextLabel.h>
#include <sun/font/TextSource.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $AttributeValues = ::sun::font::AttributeValues;
using $GlyphLayout = ::sun::font::GlyphLayout;
using $GlyphLayout$LayoutEngineFactory = ::sun::font::GlyphLayout$LayoutEngineFactory;
using $StandardGlyphVector = ::sun::font::StandardGlyphVector;
using $TextLabel = ::sun::font::TextLabel;
using $TextSource = ::sun::font::TextSource;

namespace sun {
	namespace font {

$FieldInfo _TextSourceLabel_FieldInfo_[] = {
	{"source", "Lsun/font/TextSource;", nullptr, 0, $field(TextSourceLabel, source)},
	{"lb", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(TextSourceLabel, lb)},
	{"ab", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(TextSourceLabel, ab)},
	{"vb", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(TextSourceLabel, vb)},
	{"ib", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(TextSourceLabel, ib)},
	{"gv", "Ljava/awt/font/GlyphVector;", nullptr, 0, $field(TextSourceLabel, gv)},
	{}
};

$MethodInfo _TextSourceLabel_MethodInfo_[] = {
	{"<init>", "(Lsun/font/TextSource;)V", nullptr, $PUBLIC, $method(static_cast<void(TextSourceLabel::*)($TextSource*)>(&TextSourceLabel::init$))},
	{"<init>", "(Lsun/font/TextSource;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/Rectangle2D;Ljava/awt/font/GlyphVector;)V", nullptr, $PUBLIC, $method(static_cast<void(TextSourceLabel::*)($TextSource*,$Rectangle2D*,$Rectangle2D*,$GlyphVector*)>(&TextSourceLabel::init$))},
	{"createAlignBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PROTECTED},
	{"createGV", "()Ljava/awt/font/GlyphVector;", nullptr, $PROTECTED},
	{"createItalicBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PROTECTED},
	{"createLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PROTECTED},
	{"createVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PROTECTED},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC},
	{"getAlignBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getBaselineTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getGV", "()Ljava/awt/font/GlyphVector;", nullptr, $PRIVATE, $method(static_cast<$GlyphVector*(TextSourceLabel::*)()>(&TextSourceLabel::getGV))},
	{"getItalicBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getLogicalBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getPixelBounds", "(Ljava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getSource", "()Lsun/font/TextSource;", nullptr, $PUBLIC},
	{"getVisualBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _TextSourceLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.TextSourceLabel",
	"sun.font.TextLabel",
	nullptr,
	_TextSourceLabel_FieldInfo_,
	_TextSourceLabel_MethodInfo_
};

$Object* allocate$TextSourceLabel($Class* clazz) {
	return $of($alloc(TextSourceLabel));
}

void TextSourceLabel::init$($TextSource* source) {
	TextSourceLabel::init$(source, nullptr, nullptr, nullptr);
}

void TextSourceLabel::init$($TextSource* source, $Rectangle2D* lb, $Rectangle2D* ab, $GlyphVector* gv) {
	$TextLabel::init$();
	$set(this, source, source);
	$set(this, lb, lb);
	$set(this, ab, ab);
	$set(this, gv, gv);
}

$TextSource* TextSourceLabel::getSource() {
	return this->source;
}

$Rectangle2D* TextSourceLabel::getLogicalBounds(float x, float y) {
	if (this->lb == nullptr) {
		$set(this, lb, createLogicalBounds());
	}
	float var$0 = (float)($nc(this->lb)->getX() + x);
	float var$1 = (float)($nc(this->lb)->getY() + y);
	float var$2 = (float)$nc(this->lb)->getWidth();
	return $new($Rectangle2D$Float, var$0, var$1, var$2, (float)$nc(this->lb)->getHeight());
}

$Rectangle2D* TextSourceLabel::getVisualBounds(float x, float y) {
	if (this->vb == nullptr) {
		$set(this, vb, createVisualBounds());
	}
	float var$0 = (float)($nc(this->vb)->getX() + x);
	float var$1 = (float)($nc(this->vb)->getY() + y);
	float var$2 = (float)$nc(this->vb)->getWidth();
	return $new($Rectangle2D$Float, var$0, var$1, var$2, (float)$nc(this->vb)->getHeight());
}

$Rectangle2D* TextSourceLabel::getAlignBounds(float x, float y) {
	if (this->ab == nullptr) {
		$set(this, ab, createAlignBounds());
	}
	float var$0 = (float)($nc(this->ab)->getX() + x);
	float var$1 = (float)($nc(this->ab)->getY() + y);
	float var$2 = (float)$nc(this->ab)->getWidth();
	return $new($Rectangle2D$Float, var$0, var$1, var$2, (float)$nc(this->ab)->getHeight());
}

$Rectangle2D* TextSourceLabel::getItalicBounds(float x, float y) {
	if (this->ib == nullptr) {
		$set(this, ib, createItalicBounds());
	}
	float var$0 = (float)($nc(this->ib)->getX() + x);
	float var$1 = (float)($nc(this->ib)->getY() + y);
	float var$2 = (float)$nc(this->ib)->getWidth();
	return $new($Rectangle2D$Float, var$0, var$1, var$2, (float)$nc(this->ib)->getHeight());
}

$Rectangle* TextSourceLabel::getPixelBounds($FontRenderContext* frc, float x, float y) {
	return $nc($(getGV()))->getPixelBounds(frc, x, y);
}

$AffineTransform* TextSourceLabel::getBaselineTransform() {
	$var($Font, font, $nc(this->source)->getFont());
	if ($nc(font)->hasLayoutAttributes()) {
		return $AttributeValues::getBaselineTransform($(font->getAttributes()));
	}
	return nullptr;
}

$Shape* TextSourceLabel::getOutline(float x, float y) {
	return $nc($(getGV()))->getOutline(x, y);
}

void TextSourceLabel::draw($Graphics2D* g, float x, float y) {
	$nc(g)->drawGlyphVector($(getGV()), x, y);
}

$Rectangle2D* TextSourceLabel::createLogicalBounds() {
	return $nc($(getGV()))->getLogicalBounds();
}

$Rectangle2D* TextSourceLabel::createVisualBounds() {
	return $nc($(getGV()))->getVisualBounds();
}

$Rectangle2D* TextSourceLabel::createItalicBounds() {
	return $nc($(getGV()))->getLogicalBounds();
}

$Rectangle2D* TextSourceLabel::createAlignBounds() {
	return createLogicalBounds();
}

$GlyphVector* TextSourceLabel::getGV() {
	if (this->gv == nullptr) {
		$set(this, gv, createGV());
	}
	return this->gv;
}

$GlyphVector* TextSourceLabel::createGV() {
	$var($Font, font, $nc(this->source)->getFont());
	$var($FontRenderContext, frc, $nc(this->source)->getFRC());
	int32_t flags = $nc(this->source)->getLayoutFlags();
	$var($chars, context, $nc(this->source)->getChars());
	int32_t start = $nc(this->source)->getStart();
	int32_t length = $nc(this->source)->getLength();
	$var($GlyphLayout, gl, $GlyphLayout::get(nullptr));
	$var($StandardGlyphVector, gv, $nc(gl)->layout(font, frc, context, start, length, flags, nullptr));
	$GlyphLayout::done(gl);
	return gv;
}

TextSourceLabel::TextSourceLabel() {
}

$Class* TextSourceLabel::load$($String* name, bool initialize) {
	$loadClass(TextSourceLabel, name, initialize, &_TextSourceLabel_ClassInfo_, allocate$TextSourceLabel);
	return class$;
}

$Class* TextSourceLabel::class$ = nullptr;

	} // font
} // sun