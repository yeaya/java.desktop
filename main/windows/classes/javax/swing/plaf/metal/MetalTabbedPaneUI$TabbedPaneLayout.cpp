#include <javax/swing/plaf/metal/MetalTabbedPaneUI$TabbedPaneLayout.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <javax/swing/plaf/metal/MetalTabbedPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$TabbedPaneLayout = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout;
using $MetalTabbedPaneUI = ::javax::swing::plaf::metal::MetalTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTabbedPaneUI$TabbedPaneLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTabbedPaneUI$TabbedPaneLayout, this$0)},
	{}
};

$MethodInfo _MetalTabbedPaneUI$TabbedPaneLayout_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalTabbedPaneUI$TabbedPaneLayout::*)($MetalTabbedPaneUI*)>(&MetalTabbedPaneUI$TabbedPaneLayout::init$))},
	{"normalizeTabRuns", "(IIII)V", nullptr, $PROTECTED},
	{"padSelectedTab", "(II)V", nullptr, $PROTECTED},
	{"rotateTabRuns", "(II)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetalTabbedPaneUI$TabbedPaneLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalTabbedPaneUI$TabbedPaneLayout", "javax.swing.plaf.metal.MetalTabbedPaneUI", "TabbedPaneLayout", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabbedPaneLayout", $PUBLIC},
	{}
};

$ClassInfo _MetalTabbedPaneUI$TabbedPaneLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalTabbedPaneUI$TabbedPaneLayout",
	"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout",
	nullptr,
	_MetalTabbedPaneUI$TabbedPaneLayout_FieldInfo_,
	_MetalTabbedPaneUI$TabbedPaneLayout_MethodInfo_,
	nullptr,
	nullptr,
	_MetalTabbedPaneUI$TabbedPaneLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalTabbedPaneUI"
};

$Object* allocate$MetalTabbedPaneUI$TabbedPaneLayout($Class* clazz) {
	return $of($alloc(MetalTabbedPaneUI$TabbedPaneLayout));
}

void MetalTabbedPaneUI$TabbedPaneLayout::init$($MetalTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTabbedPaneUI$TabbedPaneLayout::init$((static_cast<$MetalTabbedPaneUI*>(this$0)));
}

void MetalTabbedPaneUI$TabbedPaneLayout::normalizeTabRuns(int32_t tabPlacement, int32_t tabCount, int32_t start, int32_t max) {
	if (tabPlacement == 1 || tabPlacement == 3) {
		$BasicTabbedPaneUI$TabbedPaneLayout::normalizeTabRuns(tabPlacement, tabCount, start, max);
	}
}

void MetalTabbedPaneUI$TabbedPaneLayout::rotateTabRuns(int32_t tabPlacement, int32_t selectedRun) {
}

void MetalTabbedPaneUI$TabbedPaneLayout::padSelectedTab(int32_t tabPlacement, int32_t selectedIndex) {
}

MetalTabbedPaneUI$TabbedPaneLayout::MetalTabbedPaneUI$TabbedPaneLayout() {
}

$Class* MetalTabbedPaneUI$TabbedPaneLayout::load$($String* name, bool initialize) {
	$loadClass(MetalTabbedPaneUI$TabbedPaneLayout, name, initialize, &_MetalTabbedPaneUI$TabbedPaneLayout_ClassInfo_, allocate$MetalTabbedPaneUI$TabbedPaneLayout);
	return class$;
}

$Class* MetalTabbedPaneUI$TabbedPaneLayout::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax