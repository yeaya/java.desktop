#include <javax/swing/border/CompoundBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
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
using $Border = ::javax::swing::border::Border;

namespace javax {
	namespace swing {
		namespace border {

$Attribute CompoundBorder_Attribute_var$1[] = {
	{'s', "outsideBorder"},
	{'s', "insideBorder"},
	{'-'}
};

$NamedAttribute CompoundBorder_Attribute_var$0[] = {
	{"value", '[', CompoundBorder_Attribute_var$1},
	{}
};

$CompoundAttribute _CompoundBorder_MethodAnnotations_init$1[] = {
	{"Ljava/beans/ConstructorProperties;", CompoundBorder_Attribute_var$0},
	{}
};

$FieldInfo _CompoundBorder_FieldInfo_[] = {
	{"outsideBorder", "Ljavax/swing/border/Border;", nullptr, $PROTECTED, $field(CompoundBorder, outsideBorder)},
	{"insideBorder", "Ljavax/swing/border/Border;", nullptr, $PROTECTED, $field(CompoundBorder, insideBorder)},
	{}
};

$MethodInfo _CompoundBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompoundBorder::*)()>(&CompoundBorder::init$))},
	{"<init>", "(Ljavax/swing/border/Border;Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(static_cast<void(CompoundBorder::*)($Border*,$Border*)>(&CompoundBorder::init$)), nullptr, nullptr, _CompoundBorder_MethodAnnotations_init$1},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getInsideBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"getOutsideBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompoundBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.border.CompoundBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_CompoundBorder_FieldInfo_,
	_CompoundBorder_MethodInfo_
};

$Object* allocate$CompoundBorder($Class* clazz) {
	return $of($alloc(CompoundBorder));
}

void CompoundBorder::init$() {
	$AbstractBorder::init$();
	$set(this, outsideBorder, nullptr);
	$set(this, insideBorder, nullptr);
}

void CompoundBorder::init$($Border* outsideBorder, $Border* insideBorder) {
	$AbstractBorder::init$();
	$set(this, outsideBorder, outsideBorder);
	$set(this, insideBorder, insideBorder);
}

bool CompoundBorder::isBorderOpaque() {
	bool var$0 = (this->outsideBorder == nullptr || $nc(this->outsideBorder)->isBorderOpaque());
	return var$0 && (this->insideBorder == nullptr || $nc(this->insideBorder)->isBorderOpaque());
}

void CompoundBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Insets, nextInsets, nullptr);
	int32_t px = 0;
	int32_t py = 0;
	int32_t pw = 0;
	int32_t ph = 0;
	px = x;
	py = y;
	pw = width;
	ph = height;
	if (this->outsideBorder != nullptr) {
		$nc(this->outsideBorder)->paintBorder(c, g, px, py, pw, ph);
		$assign(nextInsets, $nc(this->outsideBorder)->getBorderInsets(c));
		px += $nc(nextInsets)->left;
		py += nextInsets->top;
		pw = pw - nextInsets->right - nextInsets->left;
		ph = ph - nextInsets->bottom - nextInsets->top;
	}
	if (this->insideBorder != nullptr) {
		$nc(this->insideBorder)->paintBorder(c, g, px, py, pw, ph);
	}
}

$Insets* CompoundBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($Insets, nextInsets, nullptr);
	$nc(insets)->top = (insets->left = (insets->right = (insets->bottom = 0)));
	if (this->outsideBorder != nullptr) {
		$assign(nextInsets, $nc(this->outsideBorder)->getBorderInsets(c));
		insets->top += $nc(nextInsets)->top;
		insets->left += nextInsets->left;
		insets->right += nextInsets->right;
		insets->bottom += nextInsets->bottom;
	}
	if (this->insideBorder != nullptr) {
		$assign(nextInsets, $nc(this->insideBorder)->getBorderInsets(c));
		insets->top += $nc(nextInsets)->top;
		insets->left += nextInsets->left;
		insets->right += nextInsets->right;
		insets->bottom += nextInsets->bottom;
	}
	return insets;
}

$Border* CompoundBorder::getOutsideBorder() {
	return this->outsideBorder;
}

$Border* CompoundBorder::getInsideBorder() {
	return this->insideBorder;
}

CompoundBorder::CompoundBorder() {
}

$Class* CompoundBorder::load$($String* name, bool initialize) {
	$loadClass(CompoundBorder, name, initialize, &_CompoundBorder_ClassInfo_, allocate$CompoundBorder);
	return class$;
}

$Class* CompoundBorder::class$ = nullptr;

		} // border
	} // swing
} // javax