#include <javax/swing/border/EmptyBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <jcpp.h>

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

$Attribute EmptyBorder_Attribute_var$1[] = {
	{'s', "borderInsets"},
	{'-'}
};

$NamedAttribute EmptyBorder_Attribute_var$0[] = {
	{"value", '[', EmptyBorder_Attribute_var$1},
	{}
};

$CompoundAttribute _EmptyBorder_MethodAnnotations_init$1[] = {
	{"Ljava/beans/ConstructorProperties;", EmptyBorder_Attribute_var$0},
	{}
};

$FieldInfo _EmptyBorder_FieldInfo_[] = {
	{"left", "I", nullptr, $PROTECTED, $field(EmptyBorder, left)},
	{"right", "I", nullptr, $PROTECTED, $field(EmptyBorder, right)},
	{"top", "I", nullptr, $PROTECTED, $field(EmptyBorder, top)},
	{"bottom", "I", nullptr, $PROTECTED, $field(EmptyBorder, bottom)},
	{}
};

$MethodInfo _EmptyBorder_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(EmptyBorder::*)(int32_t,int32_t,int32_t,int32_t)>(&EmptyBorder::init$))},
	{"<init>", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC, $method(static_cast<void(EmptyBorder::*)($Insets*)>(&EmptyBorder::init$)), nullptr, nullptr, _EmptyBorder_MethodAnnotations_init$1},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getBorderInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EmptyBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.border.EmptyBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_EmptyBorder_FieldInfo_,
	_EmptyBorder_MethodInfo_
};

$Object* allocate$EmptyBorder($Class* clazz) {
	return $of($alloc(EmptyBorder));
}

void EmptyBorder::init$(int32_t top, int32_t left, int32_t bottom, int32_t right) {
	$AbstractBorder::init$();
	this->top = top;
	this->right = right;
	this->bottom = bottom;
	this->left = left;
}

void EmptyBorder::init$($Insets* borderInsets) {
	$AbstractBorder::init$();
	this->top = $nc(borderInsets)->top;
	this->right = borderInsets->right;
	this->bottom = borderInsets->bottom;
	this->left = borderInsets->left;
}

void EmptyBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
}

$Insets* EmptyBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->left = this->left;
	insets->top = this->top;
	insets->right = this->right;
	insets->bottom = this->bottom;
	return insets;
}

$Insets* EmptyBorder::getBorderInsets() {
	return $new($Insets, this->top, this->left, this->bottom, this->right);
}

bool EmptyBorder::isBorderOpaque() {
	return false;
}

EmptyBorder::EmptyBorder() {
}

$Class* EmptyBorder::load$($String* name, bool initialize) {
	$loadClass(EmptyBorder, name, initialize, &_EmptyBorder_ClassInfo_, allocate$EmptyBorder);
	return class$;
}

$Class* EmptyBorder::class$ = nullptr;

		} // border
	} // swing
} // javax