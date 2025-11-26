#include <javax/swing/border/BevelBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <jcpp.h>

#undef LOWERED
#undef RAISED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;

namespace javax {
	namespace swing {
		namespace border {

$Attribute BevelBorder_Attribute_var$1[] = {
	{'s', "bevelType"},
	{'s', "highlightOuterColor"},
	{'s', "highlightInnerColor"},
	{'s', "shadowOuterColor"},
	{'s', "shadowInnerColor"},
	{'-'}
};

$NamedAttribute BevelBorder_Attribute_var$0[] = {
	{"value", '[', BevelBorder_Attribute_var$1},
	{}
};

$CompoundAttribute _BevelBorder_MethodAnnotations_init$2[] = {
	{"Ljava/beans/ConstructorProperties;", BevelBorder_Attribute_var$0},
	{}
};

$FieldInfo _BevelBorder_FieldInfo_[] = {
	{"RAISED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BevelBorder, RAISED)},
	{"LOWERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BevelBorder, LOWERED)},
	{"bevelType", "I", nullptr, $PROTECTED, $field(BevelBorder, bevelType)},
	{"highlightOuter", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BevelBorder, highlightOuter)},
	{"highlightInner", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BevelBorder, highlightInner)},
	{"shadowInner", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BevelBorder, shadowInner)},
	{"shadowOuter", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BevelBorder, shadowOuter)},
	{}
};

$MethodInfo _BevelBorder_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BevelBorder::*)(int32_t)>(&BevelBorder::init$))},
	{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BevelBorder::*)(int32_t,$Color*,$Color*)>(&BevelBorder::init$))},
	{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BevelBorder::*)(int32_t,$Color*,$Color*,$Color*,$Color*)>(&BevelBorder::init$)), nullptr, nullptr, _BevelBorder_MethodAnnotations_init$2},
	{"getBevelType", "()I", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getHighlightInnerColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getHighlightInnerColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getHighlightOuterColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getHighlightOuterColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getShadowInnerColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getShadowInnerColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getShadowOuterColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getShadowOuterColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintLoweredBevel", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{"paintRaisedBevel", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BevelBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.border.BevelBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_BevelBorder_FieldInfo_,
	_BevelBorder_MethodInfo_
};

$Object* allocate$BevelBorder($Class* clazz) {
	return $of($alloc(BevelBorder));
}

void BevelBorder::init$(int32_t bevelType) {
	$AbstractBorder::init$();
	this->bevelType = bevelType;
}

void BevelBorder::init$(int32_t bevelType, $Color* highlight, $Color* shadow) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = bevelType;
	$var($Color, var$1, $nc(highlight)->brighter());
	$var($Color, var$2, highlight);
	$var($Color, var$3, shadow);
	BevelBorder::init$(var$0, var$1, var$2, var$3, $($nc(shadow)->brighter()));
}

void BevelBorder::init$(int32_t bevelType, $Color* highlightOuterColor, $Color* highlightInnerColor, $Color* shadowOuterColor, $Color* shadowInnerColor) {
	BevelBorder::init$(bevelType);
	$set(this, highlightOuter, highlightOuterColor);
	$set(this, highlightInner, highlightInnerColor);
	$set(this, shadowOuter, shadowOuterColor);
	$set(this, shadowInner, shadowInnerColor);
}

void BevelBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (this->bevelType == BevelBorder::RAISED) {
		paintRaisedBevel(c, g, x, y, width, height);
	} else if (this->bevelType == BevelBorder::LOWERED) {
		paintLoweredBevel(c, g, x, y, width, height);
	}
}

$Insets* BevelBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 2, 2);
	return insets;
}

$Color* BevelBorder::getHighlightOuterColor($Component* c) {
	$useLocalCurrentObjectStackCache();
	$var($Color, highlight, getHighlightOuterColor());
	return highlight != nullptr ? highlight : $nc($($nc($($nc(c)->getBackground()))->brighter()))->brighter();
}

$Color* BevelBorder::getHighlightInnerColor($Component* c) {
	$useLocalCurrentObjectStackCache();
	$var($Color, highlight, getHighlightInnerColor());
	return highlight != nullptr ? highlight : $nc($($nc(c)->getBackground()))->brighter();
}

$Color* BevelBorder::getShadowInnerColor($Component* c) {
	$useLocalCurrentObjectStackCache();
	$var($Color, shadow, getShadowInnerColor());
	return shadow != nullptr ? shadow : $nc($($nc(c)->getBackground()))->darker();
}

$Color* BevelBorder::getShadowOuterColor($Component* c) {
	$useLocalCurrentObjectStackCache();
	$var($Color, shadow, getShadowOuterColor());
	return shadow != nullptr ? shadow : $nc($($nc($($nc(c)->getBackground()))->darker()))->darker();
}

$Color* BevelBorder::getHighlightOuterColor() {
	return this->highlightOuter;
}

$Color* BevelBorder::getHighlightInnerColor() {
	return this->highlightInner;
}

$Color* BevelBorder::getShadowInnerColor() {
	return this->shadowInner;
}

$Color* BevelBorder::getShadowOuterColor() {
	return this->shadowOuter;
}

int32_t BevelBorder::getBevelType() {
	return this->bevelType;
}

bool BevelBorder::isBorderOpaque() {
	return true;
}

void BevelBorder::paintRaisedBevel($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Color, oldColor, $nc(g)->getColor());
	int32_t h = height;
	int32_t w = width;
	g->translate(x, y);
	g->setColor($(getHighlightOuterColor(c)));
	g->drawLine(0, 0, 0, h - 2);
	g->drawLine(1, 0, w - 2, 0);
	g->setColor($(getHighlightInnerColor(c)));
	g->drawLine(1, 1, 1, h - 3);
	g->drawLine(2, 1, w - 3, 1);
	g->setColor($(getShadowOuterColor(c)));
	g->drawLine(0, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, 0, w - 1, h - 2);
	g->setColor($(getShadowInnerColor(c)));
	g->drawLine(1, h - 2, w - 2, h - 2);
	g->drawLine(w - 2, 1, w - 2, h - 3);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

void BevelBorder::paintLoweredBevel($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Color, oldColor, $nc(g)->getColor());
	int32_t h = height;
	int32_t w = width;
	g->translate(x, y);
	g->setColor($(getShadowInnerColor(c)));
	g->drawLine(0, 0, 0, h - 1);
	g->drawLine(1, 0, w - 1, 0);
	g->setColor($(getShadowOuterColor(c)));
	g->drawLine(1, 1, 1, h - 2);
	g->drawLine(2, 1, w - 2, 1);
	g->setColor($(getHighlightOuterColor(c)));
	g->drawLine(1, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, 1, w - 1, h - 2);
	g->setColor($(getHighlightInnerColor(c)));
	g->drawLine(2, h - 2, w - 2, h - 2);
	g->drawLine(w - 2, 2, w - 2, h - 3);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

BevelBorder::BevelBorder() {
}

$Class* BevelBorder::load$($String* name, bool initialize) {
	$loadClass(BevelBorder, name, initialize, &_BevelBorder_ClassInfo_, allocate$BevelBorder);
	return class$;
}

$Class* BevelBorder::class$ = nullptr;

		} // border
	} // swing
} // javax