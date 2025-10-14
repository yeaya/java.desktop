#include <javax/swing/plaf/metal/MetalBorders$RolloverMarginBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalBorders$RolloverMarginBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$RolloverMarginBorder::*)()>(&MetalBorders$RolloverMarginBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$RolloverMarginBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder", "javax.swing.plaf.metal.MetalBorders", "RolloverMarginBorder", $STATIC},
	{}
};

$ClassInfo _MetalBorders$RolloverMarginBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder",
	"javax.swing.border.EmptyBorder",
	nullptr,
	nullptr,
	_MetalBorders$RolloverMarginBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$RolloverMarginBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$RolloverMarginBorder($Class* clazz) {
	return $of($alloc(MetalBorders$RolloverMarginBorder));
}

void MetalBorders$RolloverMarginBorder::init$() {
	$EmptyBorder::init$(3, 3, 3, 3);
}

$Insets* MetalBorders$RolloverMarginBorder::getBorderInsets($Component* c, $Insets* insets) {
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

MetalBorders$RolloverMarginBorder::MetalBorders$RolloverMarginBorder() {
}

$Class* MetalBorders$RolloverMarginBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$RolloverMarginBorder, name, initialize, &_MetalBorders$RolloverMarginBorder_ClassInfo_, allocate$MetalBorders$RolloverMarginBorder);
	return class$;
}

$Class* MetalBorders$RolloverMarginBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax