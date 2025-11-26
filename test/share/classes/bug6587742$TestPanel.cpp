#include <bug6587742$TestPanel.h>

#include <bug6587742$TestPanel$1.h>
#include <bug6587742.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ItemListener.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/OceanTheme.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $bug6587742 = ::bug6587742;
using $bug6587742$TestPanel$1 = ::bug6587742$TestPanel$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ItemListener = ::java::awt::event::ItemListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JSlider = ::javax::swing::JSlider;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $OceanTheme = ::javax::swing::plaf::metal::OceanTheme;

$FieldInfo _bug6587742$TestPanel_FieldInfo_[] = {
	{"this$0", "Lbug6587742;", nullptr, $FINAL | $SYNTHETIC, $field(bug6587742$TestPanel, this$0)},
	{"cbThemes", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $FINAL, $field(bug6587742$TestPanel, cbThemes)},
	{}
};

$MethodInfo _bug6587742$TestPanel_MethodInfo_[] = {
	{"<init>", "(Lbug6587742;)V", nullptr, $PRIVATE, $method(static_cast<void(bug6587742$TestPanel::*)($bug6587742*)>(&bug6587742$TestPanel::init$))},
	{}
};

$InnerClassInfo _bug6587742$TestPanel_InnerClassesInfo_[] = {
	{"bug6587742$TestPanel", "bug6587742", "TestPanel", $PRIVATE},
	{"bug6587742$TestPanel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6587742$TestPanel_ClassInfo_ = {
	$ACC_SUPER,
	"bug6587742$TestPanel",
	"javax.swing.JPanel",
	nullptr,
	_bug6587742$TestPanel_FieldInfo_,
	_bug6587742$TestPanel_MethodInfo_,
	nullptr,
	nullptr,
	_bug6587742$TestPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6587742"
};

$Object* allocate$bug6587742$TestPanel($Class* clazz) {
	return $of($alloc(bug6587742$TestPanel));
}

void bug6587742$TestPanel::init$($bug6587742* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, cbThemes, $new($JComboBox));
	$nc(this->cbThemes)->addItem($$new($OceanTheme));
	$nc(this->cbThemes)->addItem($$new($DefaultMetalTheme));
	$nc(this->cbThemes)->addItemListener($$new($bug6587742$TestPanel$1, this, this$0));
	$var($JPanel, pnVertical, $new($JPanel));
	pnVertical->setLayout($$new($BoxLayout, pnVertical, $BoxLayout::Y_AXIS));
	for (int32_t i = 0; i < 12; ++i) {
		int32_t filled = i >> 2;
		pnVertical->add($(static_cast<$Component*>($bug6587742::createSlider(false, filled > 1 ? ($Boolean*)nullptr : $($Boolean::valueOf(filled == 1)), ((int32_t)(i & (uint32_t)2)) == 0, ((int32_t)(i & (uint32_t)1)) != 0))));
	}
	$var($JPanel, pnHorizontal, $new($JPanel));
	pnHorizontal->setLayout($$new($BoxLayout, pnHorizontal, $BoxLayout::X_AXIS));
	for (int32_t i = 0; i < 12; ++i) {
		int32_t filled = i >> 2;
		pnHorizontal->add($(static_cast<$Component*>($bug6587742::createSlider(true, filled > 1 ? ($Boolean*)nullptr : $($Boolean::valueOf(filled == 1)), ((int32_t)(i & (uint32_t)2)) == 0, ((int32_t)(i & (uint32_t)1)) != 0))));
	}
	$var($JTabbedPane, tpSliders, $new($JTabbedPane));
	tpSliders->add("Vertical sliders"_s, static_cast<$Component*>(pnVertical));
	tpSliders->add("Horizontal sliders"_s, static_cast<$Component*>(pnHorizontal));
	setLayout($$new($BoxLayout, this, $BoxLayout::Y_AXIS));
	add(static_cast<$Component*>($$new($JLabel, "Select theme:"_s)));
	add(static_cast<$Component*>(this->cbThemes));
	add(static_cast<$Component*>(tpSliders));
}

bug6587742$TestPanel::bug6587742$TestPanel() {
}

$Class* bug6587742$TestPanel::load$($String* name, bool initialize) {
	$loadClass(bug6587742$TestPanel, name, initialize, &_bug6587742$TestPanel_ClassInfo_, allocate$bug6587742$TestPanel);
	return class$;
}

$Class* bug6587742$TestPanel::class$ = nullptr;