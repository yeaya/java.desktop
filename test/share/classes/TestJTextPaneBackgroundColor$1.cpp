#include <TestJTextPaneBackgroundColor$1.h>

#include <TestJTextPaneBackgroundColor.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $TestJTextPaneBackgroundColor = ::TestJTextPaneBackgroundColor;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextPane = ::javax::swing::JTextPane;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _TestJTextPaneBackgroundColor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestJTextPaneBackgroundColor$1::*)()>(&TestJTextPaneBackgroundColor$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestJTextPaneBackgroundColor$1_EnclosingMethodInfo_ = {
	"TestJTextPaneBackgroundColor",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestJTextPaneBackgroundColor$1_InnerClassesInfo_[] = {
	{"TestJTextPaneBackgroundColor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJTextPaneBackgroundColor$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestJTextPaneBackgroundColor$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TestJTextPaneBackgroundColor$1_MethodInfo_,
	nullptr,
	&_TestJTextPaneBackgroundColor$1_EnclosingMethodInfo_,
	_TestJTextPaneBackgroundColor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJTextPaneBackgroundColor"
};

$Object* allocate$TestJTextPaneBackgroundColor$1($Class* clazz) {
	return $of($alloc(TestJTextPaneBackgroundColor$1));
}

void TestJTextPaneBackgroundColor$1::init$() {
}

void TestJTextPaneBackgroundColor$1::run() {
	$var($JPanel, panel, $new($JPanel));
	$init($TestJTextPaneBackgroundColor);
	$assignStatic($TestJTextPaneBackgroundColor::textPane, $new($JTextPane));
	$nc($TestJTextPaneBackgroundColor::textPane)->setText("             "_s);
	$init($BorderLayout);
	panel->add(static_cast<$Component*>($TestJTextPaneBackgroundColor::textPane), $of($BorderLayout::CENTER));
	$assignStatic($TestJTextPaneBackgroundColor::frame, $new($JFrame, "TestJTextPaneBackgroundColor"_s));
	$nc($TestJTextPaneBackgroundColor::frame)->add(static_cast<$Component*>(panel));
	$nc($TestJTextPaneBackgroundColor::frame)->setSize(200, 200);
	$nc($TestJTextPaneBackgroundColor::frame)->setAlwaysOnTop(true);
	$nc($TestJTextPaneBackgroundColor::frame)->setLocationRelativeTo(nullptr);
	$nc($TestJTextPaneBackgroundColor::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($TestJTextPaneBackgroundColor::frame)->setVisible(true);
}

TestJTextPaneBackgroundColor$1::TestJTextPaneBackgroundColor$1() {
}

$Class* TestJTextPaneBackgroundColor$1::load$($String* name, bool initialize) {
	$loadClass(TestJTextPaneBackgroundColor$1, name, initialize, &_TestJTextPaneBackgroundColor$1_ClassInfo_, allocate$TestJTextPaneBackgroundColor$1);
	return class$;
}

$Class* TestJTextPaneBackgroundColor$1::class$ = nullptr;