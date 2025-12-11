#include <bug6742358$TestPanel.h>

#include <bug6742358.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $bug6742358 = ::bug6742358;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _bug6742358$TestPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6742358$TestPanel::*)()>(&bug6742358$TestPanel::init$))},
	{}
};

$InnerClassInfo _bug6742358$TestPanel_InnerClassesInfo_[] = {
	{"bug6742358$TestPanel", "bug6742358", "TestPanel", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6742358$TestPanel_ClassInfo_ = {
	$ACC_SUPER,
	"bug6742358$TestPanel",
	"javax.swing.JPanel",
	nullptr,
	nullptr,
	_bug6742358$TestPanel_MethodInfo_,
	nullptr,
	nullptr,
	_bug6742358$TestPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6742358"
};

$Object* allocate$bug6742358$TestPanel($Class* clazz) {
	return $of($alloc(bug6742358$TestPanel));
}

void bug6742358$TestPanel::init$() {
	$useLocalCurrentObjectStackCache();
	$JPanel::init$();
	$var($JPanel, pnVertical, $new($JPanel));
	pnVertical->setLayout($$new($BoxLayout, pnVertical, $BoxLayout::Y_AXIS));
	for (int32_t i = 0; i < 8; ++i) {
		pnVertical->add($(static_cast<$Component*>($bug6742358::createSlider(false, ((int32_t)(i & (uint32_t)4)) == 0, ((int32_t)(i & (uint32_t)2)) == 0, ((int32_t)(i & (uint32_t)1)) == 0))));
	}
	$var($JPanel, pnHorizontal, $new($JPanel));
	pnHorizontal->setLayout($$new($BoxLayout, pnHorizontal, $BoxLayout::X_AXIS));
	for (int32_t i = 0; i < 8; ++i) {
		pnHorizontal->add($(static_cast<$Component*>($bug6742358::createSlider(true, ((int32_t)(i & (uint32_t)4)) == 0, ((int32_t)(i & (uint32_t)2)) == 0, ((int32_t)(i & (uint32_t)1)) == 0))));
	}
	add(static_cast<$Component*>(pnHorizontal));
	add(static_cast<$Component*>(pnVertical));
}

bug6742358$TestPanel::bug6742358$TestPanel() {
}

$Class* bug6742358$TestPanel::load$($String* name, bool initialize) {
	$loadClass(bug6742358$TestPanel, name, initialize, &_bug6742358$TestPanel_ClassInfo_, allocate$bug6742358$TestPanel);
	return class$;
}

$Class* bug6742358$TestPanel::class$ = nullptr;