#include <javax/swing/plaf/metal/MetalSplitPaneUI.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <javax/swing/plaf/metal/MetalSplitPaneDivider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $MetalSplitPaneDivider = ::javax::swing::plaf::metal::MetalSplitPaneDivider;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalSplitPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalSplitPaneUI::*)()>(&MetalSplitPaneUI::init$))},
	{"createDefaultDivider", "()Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalSplitPaneUI::createUI))},
	{}
};

$ClassInfo _MetalSplitPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalSplitPaneUI",
	"javax.swing.plaf.basic.BasicSplitPaneUI",
	nullptr,
	nullptr,
	_MetalSplitPaneUI_MethodInfo_
};

$Object* allocate$MetalSplitPaneUI($Class* clazz) {
	return $of($alloc(MetalSplitPaneUI));
}

void MetalSplitPaneUI::init$() {
	$BasicSplitPaneUI::init$();
}

$ComponentUI* MetalSplitPaneUI::createUI($JComponent* x) {
	$init(MetalSplitPaneUI);
	return $new(MetalSplitPaneUI);
}

$BasicSplitPaneDivider* MetalSplitPaneUI::createDefaultDivider() {
	return $new($MetalSplitPaneDivider, this);
}

MetalSplitPaneUI::MetalSplitPaneUI() {
}

$Class* MetalSplitPaneUI::load$($String* name, bool initialize) {
	$loadClass(MetalSplitPaneUI, name, initialize, &_MetalSplitPaneUI_ClassInfo_, allocate$MetalSplitPaneUI);
	return class$;
}

$Class* MetalSplitPaneUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax