#include <javax/swing/border/EtchedBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$Attribute EtchedBorder_Attribute_var$1[] = {
	{'s', "etchType"},
	{'s', "highlightColor"},
	{'s', "shadowColor"},
	{'-'}
};

$NamedAttribute EtchedBorder_Attribute_var$0[] = {
	{"value", '[', EtchedBorder_Attribute_var$1},
	{}
};

$CompoundAttribute _EtchedBorder_MethodAnnotations_init$3[] = {
	{"Ljava/beans/ConstructorProperties;", EtchedBorder_Attribute_var$0},
	{}
};

$FieldInfo _EtchedBorder_FieldInfo_[] = {
	{"RAISED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EtchedBorder, RAISED)},
	{"LOWERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EtchedBorder, LOWERED)},
	{"etchType", "I", nullptr, $PROTECTED, $field(EtchedBorder, etchType)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(EtchedBorder, highlight)},
	{"shadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(EtchedBorder, shadow)},
	{}
};

$MethodInfo _EtchedBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EtchedBorder::*)()>(&EtchedBorder::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(EtchedBorder::*)(int32_t)>(&EtchedBorder::init$))},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(EtchedBorder::*)($Color*,$Color*)>(&EtchedBorder::init$))},
	{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(EtchedBorder::*)(int32_t,$Color*,$Color*)>(&EtchedBorder::init$)), nullptr, nullptr, _EtchedBorder_MethodAnnotations_init$3},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getEtchType", "()I", nullptr, $PUBLIC},
	{"getHighlightColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getHighlightColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getShadowColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getShadowColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EtchedBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.border.EtchedBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_EtchedBorder_FieldInfo_,
	_EtchedBorder_MethodInfo_
};

$Object* allocate$EtchedBorder($Class* clazz) {
	return $of($alloc(EtchedBorder));
}

void EtchedBorder::init$() {
	EtchedBorder::init$(EtchedBorder::LOWERED);
}

void EtchedBorder::init$(int32_t etchType) {
	EtchedBorder::init$(etchType, nullptr, nullptr);
}

void EtchedBorder::init$($Color* highlight, $Color* shadow) {
	EtchedBorder::init$(EtchedBorder::LOWERED, highlight, shadow);
}

void EtchedBorder::init$(int32_t etchType, $Color* highlight, $Color* shadow) {
	$AbstractBorder::init$();
	this->etchType = etchType;
	$set(this, highlight, highlight);
	$set(this, shadow, shadow);
}

void EtchedBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	int32_t w = width;
	int32_t h = height;
	$nc(g)->translate(x, y);
	g->setColor(this->etchType == EtchedBorder::LOWERED ? $(getShadowColor(c)) : $(getHighlightColor(c)));
	g->drawRect(0, 0, w - 2, h - 2);
	g->setColor(this->etchType == EtchedBorder::LOWERED ? $(getHighlightColor(c)) : $(getShadowColor(c)));
	g->drawLine(1, h - 3, 1, 1);
	g->drawLine(1, 1, w - 3, 1);
	g->drawLine(0, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, h - 1, w - 1, 0);
	g->translate(-x, -y);
}

$Insets* EtchedBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 2, 2);
	return insets;
}

bool EtchedBorder::isBorderOpaque() {
	return true;
}

int32_t EtchedBorder::getEtchType() {
	return this->etchType;
}

$Color* EtchedBorder::getHighlightColor($Component* c) {
	return this->highlight != nullptr ? this->highlight : $nc($($nc(c)->getBackground()))->brighter();
}

$Color* EtchedBorder::getHighlightColor() {
	return this->highlight;
}

$Color* EtchedBorder::getShadowColor($Component* c) {
	return this->shadow != nullptr ? this->shadow : $nc($($nc(c)->getBackground()))->darker();
}

$Color* EtchedBorder::getShadowColor() {
	return this->shadow;
}

EtchedBorder::EtchedBorder() {
}

$Class* EtchedBorder::load$($String* name, bool initialize) {
	$loadClass(EtchedBorder, name, initialize, &_EtchedBorder_ClassInfo_, allocate$EtchedBorder);
	return class$;
}

$Class* EtchedBorder::class$ = nullptr;

		} // border
	} // swing
} // javax