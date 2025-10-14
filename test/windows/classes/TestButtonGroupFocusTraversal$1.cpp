#include <TestButtonGroupFocusTraversal$1.h>

#include <TestButtonGroupFocusTraversal$1$1.h>
#include <TestButtonGroupFocusTraversal$1$2.h>
#include <TestButtonGroupFocusTraversal$1$3.h>
#include <TestButtonGroupFocusTraversal$1$4.h>
#include <TestButtonGroupFocusTraversal.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $TestButtonGroupFocusTraversal = ::TestButtonGroupFocusTraversal;
using $TestButtonGroupFocusTraversal$1$1 = ::TestButtonGroupFocusTraversal$1$1;
using $TestButtonGroupFocusTraversal$1$2 = ::TestButtonGroupFocusTraversal$1$2;
using $TestButtonGroupFocusTraversal$1$3 = ::TestButtonGroupFocusTraversal$1$3;
using $TestButtonGroupFocusTraversal$1$4 = ::TestButtonGroupFocusTraversal$1$4;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _TestButtonGroupFocusTraversal$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestButtonGroupFocusTraversal$1::*)()>(&TestButtonGroupFocusTraversal$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestButtonGroupFocusTraversal$1_EnclosingMethodInfo_ = {
	"TestButtonGroupFocusTraversal",
	"createUI",
	"()V"
};

$InnerClassInfo _TestButtonGroupFocusTraversal$1_InnerClassesInfo_[] = {
	{"TestButtonGroupFocusTraversal$1", nullptr, nullptr, 0},
	{"TestButtonGroupFocusTraversal$1$4", nullptr, nullptr, 0},
	{"TestButtonGroupFocusTraversal$1$3", nullptr, nullptr, 0},
	{"TestButtonGroupFocusTraversal$1$2", nullptr, nullptr, 0},
	{"TestButtonGroupFocusTraversal$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestButtonGroupFocusTraversal$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestButtonGroupFocusTraversal$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TestButtonGroupFocusTraversal$1_MethodInfo_,
	nullptr,
	&_TestButtonGroupFocusTraversal$1_EnclosingMethodInfo_,
	_TestButtonGroupFocusTraversal$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestButtonGroupFocusTraversal"
};

$Object* allocate$TestButtonGroupFocusTraversal$1($Class* clazz) {
	return $of($alloc(TestButtonGroupFocusTraversal$1));
}

void TestButtonGroupFocusTraversal$1::init$() {
}

void TestButtonGroupFocusTraversal$1::run() {
	$init($TestButtonGroupFocusTraversal);
	$assignStatic($TestButtonGroupFocusTraversal::textFieldFirst, $new($JTextField, "First"_s));
	$assignStatic($TestButtonGroupFocusTraversal::textFieldLast, $new($JTextField, "Last"_s));
	$assignStatic($TestButtonGroupFocusTraversal::toggleButton1, $new($JToggleButton, "1"_s));
	$assignStatic($TestButtonGroupFocusTraversal::toggleButton2, $new($JToggleButton, "2"_s));
	$assignStatic($TestButtonGroupFocusTraversal::radioButton1, $new($JRadioButton, "1"_s));
	$assignStatic($TestButtonGroupFocusTraversal::radioButton2, $new($JRadioButton, "2"_s));
	$assignStatic($TestButtonGroupFocusTraversal::checkBox1, $new($JCheckBox, "1"_s));
	$assignStatic($TestButtonGroupFocusTraversal::checkBox2, $new($JCheckBox, "2"_s));
	$nc($TestButtonGroupFocusTraversal::toggleButton1)->setAction($$new($TestButtonGroupFocusTraversal$1$1, this));
	$nc($TestButtonGroupFocusTraversal::toggleButton2)->setAction($$new($TestButtonGroupFocusTraversal$1$2, this));
	$nc($TestButtonGroupFocusTraversal::checkBox1)->setAction($$new($TestButtonGroupFocusTraversal$1$3, this));
	$nc($TestButtonGroupFocusTraversal::checkBox2)->setAction($$new($TestButtonGroupFocusTraversal$1$4, this));
	$var($ButtonGroup, toggleGroup, $new($ButtonGroup));
	toggleGroup->add($TestButtonGroupFocusTraversal::toggleButton1);
	toggleGroup->add($TestButtonGroupFocusTraversal::toggleButton2);
	$var($ButtonGroup, radioGroup, $new($ButtonGroup));
	radioGroup->add($TestButtonGroupFocusTraversal::radioButton1);
	radioGroup->add($TestButtonGroupFocusTraversal::radioButton2);
	$var($ButtonGroup, checkboxButtonGroup, $new($ButtonGroup));
	checkboxButtonGroup->add($TestButtonGroupFocusTraversal::checkBox1);
	checkboxButtonGroup->add($TestButtonGroupFocusTraversal::checkBox2);
	$nc($TestButtonGroupFocusTraversal::toggleButton2)->setSelected(true);
	$nc($TestButtonGroupFocusTraversal::radioButton2)->setSelected(true);
	$nc($TestButtonGroupFocusTraversal::checkBox2)->setSelected(true);
	$assignStatic($TestButtonGroupFocusTraversal::frame, $new($JFrame, "Test"_s));
	$nc($TestButtonGroupFocusTraversal::frame)->setLayout($$new($FlowLayout));
	$var($Container, pane, $nc($TestButtonGroupFocusTraversal::frame)->getContentPane());
	$nc(pane)->add(static_cast<$Component*>($TestButtonGroupFocusTraversal::textFieldFirst));
	pane->add(static_cast<$Component*>($TestButtonGroupFocusTraversal::toggleButton1));
	pane->add(static_cast<$Component*>($TestButtonGroupFocusTraversal::toggleButton2));
	pane->add(static_cast<$Component*>($TestButtonGroupFocusTraversal::radioButton1));
	pane->add(static_cast<$Component*>($TestButtonGroupFocusTraversal::radioButton2));
	pane->add(static_cast<$Component*>($TestButtonGroupFocusTraversal::checkBox1));
	pane->add(static_cast<$Component*>($TestButtonGroupFocusTraversal::checkBox2));
	pane->add(static_cast<$Component*>($TestButtonGroupFocusTraversal::textFieldLast));
	$nc($TestButtonGroupFocusTraversal::frame)->pack();
	$nc($TestButtonGroupFocusTraversal::frame)->setAlwaysOnTop(true);
	$nc($TestButtonGroupFocusTraversal::frame)->setLocationRelativeTo(nullptr);
	$nc($TestButtonGroupFocusTraversal::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($TestButtonGroupFocusTraversal::frame)->setVisible(true);
}

TestButtonGroupFocusTraversal$1::TestButtonGroupFocusTraversal$1() {
}

$Class* TestButtonGroupFocusTraversal$1::load$($String* name, bool initialize) {
	$loadClass(TestButtonGroupFocusTraversal$1, name, initialize, &_TestButtonGroupFocusTraversal$1_ClassInfo_, allocate$TestButtonGroupFocusTraversal$1);
	return class$;
}

$Class* TestButtonGroupFocusTraversal$1::class$ = nullptr;