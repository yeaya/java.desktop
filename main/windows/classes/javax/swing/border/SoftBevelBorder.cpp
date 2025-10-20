#include <javax/swing/border/SoftBevelBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/border/BevelBorder.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $BevelBorder = ::javax::swing::border::BevelBorder;

namespace javax {
	namespace swing {
		namespace border {

$Attribute SoftBevelBorder_Attribute_var$1[] = {
	{'s', "bevelType"},
	{'s', "highlightOuterColor"},
	{'s', "highlightInnerColor"},
	{'s', "shadowOuterColor"},
	{'s', "shadowInnerColor"},
	{'-'}
};

$NamedAttribute SoftBevelBorder_Attribute_var$0[] = {
	{"value", '[', SoftBevelBorder_Attribute_var$1},
	{}
};

$CompoundAttribute _SoftBevelBorder_MethodAnnotations_init$2[] = {
	{"Ljava/beans/ConstructorProperties;", SoftBevelBorder_Attribute_var$0},
	{}
};

$MethodInfo _SoftBevelBorder_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftBevelBorder::*)(int32_t)>(&SoftBevelBorder::init$))},
	{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftBevelBorder::*)(int32_t,$Color*,$Color*)>(&SoftBevelBorder::init$))},
	{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftBevelBorder::*)(int32_t,$Color*,$Color*,$Color*,$Color*)>(&SoftBevelBorder::init$)), nullptr, nullptr, _SoftBevelBorder_MethodAnnotations_init$2},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftBevelBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.border.SoftBevelBorder",
	"javax.swing.border.BevelBorder",
	nullptr,
	nullptr,
	_SoftBevelBorder_MethodInfo_
};

$Object* allocate$SoftBevelBorder($Class* clazz) {
	return $of($alloc(SoftBevelBorder));
}

void SoftBevelBorder::init$(int32_t bevelType) {
	$BevelBorder::init$(bevelType);
}

void SoftBevelBorder::init$(int32_t bevelType, $Color* highlight, $Color* shadow) {
	$BevelBorder::init$(bevelType, highlight, shadow);
}

void SoftBevelBorder::init$(int32_t bevelType, $Color* highlightOuterColor, $Color* highlightInnerColor, $Color* shadowOuterColor, $Color* shadowInnerColor) {
	$BevelBorder::init$(bevelType, highlightOuterColor, highlightInnerColor, shadowOuterColor, shadowInnerColor);
}

void SoftBevelBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	if (this->bevelType == $BevelBorder::RAISED) {
		g->setColor($(getHighlightOuterColor(c)));
		g->drawLine(0, 0, width - 2, 0);
		g->drawLine(0, 0, 0, height - 2);
		g->drawLine(1, 1, 1, 1);
		g->setColor($(getHighlightInnerColor(c)));
		g->drawLine(2, 1, width - 2, 1);
		g->drawLine(1, 2, 1, height - 2);
		g->drawLine(2, 2, 2, 2);
		g->drawLine(0, height - 1, 0, height - 2);
		g->drawLine(width - 1, 0, width - 1, 0);
		g->setColor($(getShadowOuterColor(c)));
		g->drawLine(2, height - 1, width - 1, height - 1);
		g->drawLine(width - 1, 2, width - 1, height - 1);
		g->setColor($(getShadowInnerColor(c)));
		g->drawLine(width - 2, height - 2, width - 2, height - 2);
	} else if (this->bevelType == $BevelBorder::LOWERED) {
		g->setColor($(getShadowOuterColor(c)));
		g->drawLine(0, 0, width - 2, 0);
		g->drawLine(0, 0, 0, height - 2);
		g->drawLine(1, 1, 1, 1);
		g->setColor($(getShadowInnerColor(c)));
		g->drawLine(2, 1, width - 2, 1);
		g->drawLine(1, 2, 1, height - 2);
		g->drawLine(2, 2, 2, 2);
		g->drawLine(0, height - 1, 0, height - 2);
		g->drawLine(width - 1, 0, width - 1, 0);
		g->setColor($(getHighlightOuterColor(c)));
		g->drawLine(2, height - 1, width - 1, height - 1);
		g->drawLine(width - 1, 2, width - 1, height - 1);
		g->setColor($(getHighlightInnerColor(c)));
		g->drawLine(width - 2, height - 2, width - 2, height - 2);
	}
	g->translate(-x, -y);
	g->setColor(oldColor);
}

$Insets* SoftBevelBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(3, 3, 3, 3);
	return insets;
}

bool SoftBevelBorder::isBorderOpaque() {
	return false;
}

SoftBevelBorder::SoftBevelBorder() {
}

$Class* SoftBevelBorder::load$($String* name, bool initialize) {
	$loadClass(SoftBevelBorder, name, initialize, &_SoftBevelBorder_ClassInfo_, allocate$SoftBevelBorder);
	return class$;
}

$Class* SoftBevelBorder::class$ = nullptr;

		} // border
	} // swing
} // javax