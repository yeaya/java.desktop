#include <sun/font/TextLabel.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <jcpp.h>

using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$MethodInfo _TextLabel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextLabel::*)()>(&TextLabel::init$))},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"draw", "(Ljava/awt/Graphics2D;)V", nullptr, $PUBLIC},
	{"getAlignBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAlignBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getItalicBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getItalicBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getLogicalBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutline", "()Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getVisualBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TextLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.TextLabel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TextLabel_MethodInfo_
};

$Object* allocate$TextLabel($Class* clazz) {
	return $of($alloc(TextLabel));
}

void TextLabel::init$() {
}

$Rectangle2D* TextLabel::getVisualBounds() {
	return getVisualBounds(0.0f, 0.0f);
}

$Rectangle2D* TextLabel::getLogicalBounds() {
	return getLogicalBounds(0.0f, 0.0f);
}

$Rectangle2D* TextLabel::getAlignBounds() {
	return getAlignBounds(0.0f, 0.0f);
}

$Rectangle2D* TextLabel::getItalicBounds() {
	return getItalicBounds(0.0f, 0.0f);
}

$Shape* TextLabel::getOutline() {
	return getOutline(0.0f, 0.0f);
}

void TextLabel::draw($Graphics2D* g) {
	draw(g, 0.0f, 0.0f);
}

TextLabel::TextLabel() {
}

$Class* TextLabel::load$($String* name, bool initialize) {
	$loadClass(TextLabel, name, initialize, &_TextLabel_ClassInfo_, allocate$TextLabel);
	return class$;
}

$Class* TextLabel::class$ = nullptr;

	} // font
} // sun