#include <TestPopupMenu$TestInternalFrameWPopup.h>

#include <TestPopupMenu.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

#undef CENTER
#undef CYAN
#undef NONE

using $TestPopupMenu = ::TestPopupMenu;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLabel = ::javax::swing::JLabel;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$FieldInfo _TestPopupMenu$TestInternalFrameWPopup_FieldInfo_[] = {
	{"this$0", "LTestPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(TestPopupMenu$TestInternalFrameWPopup, this$0)},
	{}
};

$MethodInfo _TestPopupMenu$TestInternalFrameWPopup_MethodInfo_[] = {
	{"<init>", "(LTestPopupMenu;)V", nullptr, 0, $method(static_cast<void(TestPopupMenu$TestInternalFrameWPopup::*)($TestPopupMenu*)>(&TestPopupMenu$TestInternalFrameWPopup::init$))},
	{"getContainerPanel", "()Ljavax/swing/JPanel;", nullptr, $PRIVATE, $method(static_cast<$JPanel*(TestPopupMenu$TestInternalFrameWPopup::*)()>(&TestPopupMenu$TestInternalFrameWPopup::getContainerPanel))},
	{"jbInit", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestPopupMenu$TestInternalFrameWPopup::*)()>(&TestPopupMenu$TestInternalFrameWPopup::jbInit))},
	{}
};

$InnerClassInfo _TestPopupMenu$TestInternalFrameWPopup_InnerClassesInfo_[] = {
	{"TestPopupMenu$TestInternalFrameWPopup", "TestPopupMenu", "TestInternalFrameWPopup", 0},
	{}
};

$ClassInfo _TestPopupMenu$TestInternalFrameWPopup_ClassInfo_ = {
	$ACC_SUPER,
	"TestPopupMenu$TestInternalFrameWPopup",
	"javax.swing.JInternalFrame",
	nullptr,
	_TestPopupMenu$TestInternalFrameWPopup_FieldInfo_,
	_TestPopupMenu$TestInternalFrameWPopup_MethodInfo_,
	nullptr,
	nullptr,
	_TestPopupMenu$TestInternalFrameWPopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestPopupMenu"
};

$Object* allocate$TestPopupMenu$TestInternalFrameWPopup($Class* clazz) {
	return $of($alloc(TestPopupMenu$TestInternalFrameWPopup));
}

void TestPopupMenu$TestInternalFrameWPopup::init$($TestPopupMenu* this$0) {
	$set(this, this$0, this$0);
	$JInternalFrame::init$();
	jbInit();
}

void TestPopupMenu$TestInternalFrameWPopup::jbInit() {
	$useLocalCurrentObjectStackCache();
	setTitle("Test Internal Frame With Popup"_s);
	setContentPane($(getContainerPanel()));
	setMaximizable(true);
	setClosable(true);
	setMinimumSize($$new($Dimension, 500, 300));
	setSize(500, 300);
}

$JPanel* TestPopupMenu$TestInternalFrameWPopup::getContainerPanel() {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, panel, $new($JPanel));
	panel->setLayout($$new($GridBagLayout));
	$set(this->this$0, label, $new($JLabel, "Test Label"_s));
	$var($JPopupMenu, popup, $new($JPopupMenu));
	$var($JMenuItem, menuItem1, $new($JMenuItem, "Item 1"_s));
	$var($JMenuItem, menuItem2, $new($JMenuItem, "Item 2"_s));
	$var($JMenuItem, menuItem3, $new($JMenuItem, "Item 3"_s));
	$var($JMenuItem, menuItem4, $new($JMenuItem, "Item 4"_s));
	$var($JMenuItem, menuItem5, $new($JMenuItem, "Item 5"_s));
	menuItem1->setOpaque(false);
	menuItem2->setOpaque(false);
	menuItem3->setOpaque(false);
	menuItem4->setOpaque(false);
	menuItem5->setOpaque(false);
	popup->add(menuItem1);
	popup->add(menuItem2);
	popup->add(menuItem3);
	popup->add(menuItem4);
	popup->add(menuItem5);
	$nc(this->this$0->label)->setComponentPopupMenu(popup);
	$init($Color);
	popup->setBackground($Color::CYAN);
	panel->add(static_cast<$Component*>(this->this$0->label), $of($$new($GridBagConstraints, 0, 0, 1, 1, 0.0, 0.0, $GridBagConstraints::CENTER, $GridBagConstraints::NONE, $$new($Insets, 5, 5, 5, 5), 0, 0)));
	panel->setBackground($Color::CYAN);
	return panel;
}

TestPopupMenu$TestInternalFrameWPopup::TestPopupMenu$TestInternalFrameWPopup() {
}

$Class* TestPopupMenu$TestInternalFrameWPopup::load$($String* name, bool initialize) {
	$loadClass(TestPopupMenu$TestInternalFrameWPopup, name, initialize, &_TestPopupMenu$TestInternalFrameWPopup_ClassInfo_, allocate$TestPopupMenu$TestInternalFrameWPopup);
	return class$;
}

$Class* TestPopupMenu$TestInternalFrameWPopup::class$ = nullptr;