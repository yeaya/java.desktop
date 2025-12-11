#include <javax/swing/plaf/basic/BasicBorders$RolloverMarginBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicBorders$RolloverMarginBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicBorders$RolloverMarginBorder::*)()>(&BasicBorders$RolloverMarginBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicBorders$RolloverMarginBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$RolloverMarginBorder", "javax.swing.plaf.basic.BasicBorders", "RolloverMarginBorder", $STATIC},
	{}
};

$ClassInfo _BasicBorders$RolloverMarginBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders$RolloverMarginBorder",
	"javax.swing.border.EmptyBorder",
	nullptr,
	nullptr,
	_BasicBorders$RolloverMarginBorder_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders$RolloverMarginBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders"
};

$Object* allocate$BasicBorders$RolloverMarginBorder($Class* clazz) {
	return $of($alloc(BasicBorders$RolloverMarginBorder));
}

void BasicBorders$RolloverMarginBorder::init$() {
	$EmptyBorder::init$(3, 3, 3, 3);
}

$Insets* BasicBorders$RolloverMarginBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($Insets, margin, nullptr);
	if ($instanceOf($AbstractButton, c)) {
		$assign(margin, $nc(($cast($AbstractButton, c)))->getMargin());
	}
	if (margin == nullptr || $instanceOf($UIResource, margin)) {
		$nc(insets)->left = this->left;
		insets->top = this->top;
		insets->right = this->right;
		insets->bottom = this->bottom;
	} else {
		$nc(insets)->left = $nc(margin)->left;
		insets->top = margin->top;
		insets->right = margin->right;
		insets->bottom = margin->bottom;
	}
	return insets;
}

BasicBorders$RolloverMarginBorder::BasicBorders$RolloverMarginBorder() {
}

$Class* BasicBorders$RolloverMarginBorder::load$($String* name, bool initialize) {
	$loadClass(BasicBorders$RolloverMarginBorder, name, initialize, &_BasicBorders$RolloverMarginBorder_ClassInfo_, allocate$BasicBorders$RolloverMarginBorder);
	return class$;
}

$Class* BasicBorders$RolloverMarginBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax