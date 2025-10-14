#include <TestJProgressBarHighlightColor$1.h>

#include <TestJProgressBarHighlightColor.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JProgressBar.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $TestJProgressBarHighlightColor = ::TestJProgressBarHighlightColor;
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
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JProgressBar = ::javax::swing::JProgressBar;

$MethodInfo _TestJProgressBarHighlightColor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestJProgressBarHighlightColor$1::*)()>(&TestJProgressBarHighlightColor$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestJProgressBarHighlightColor$1_EnclosingMethodInfo_ = {
	"TestJProgressBarHighlightColor",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestJProgressBarHighlightColor$1_InnerClassesInfo_[] = {
	{"TestJProgressBarHighlightColor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJProgressBarHighlightColor$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestJProgressBarHighlightColor$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TestJProgressBarHighlightColor$1_MethodInfo_,
	nullptr,
	&_TestJProgressBarHighlightColor$1_EnclosingMethodInfo_,
	_TestJProgressBarHighlightColor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJProgressBarHighlightColor"
};

$Object* allocate$TestJProgressBarHighlightColor$1($Class* clazz) {
	return $of($alloc(TestJProgressBarHighlightColor$1));
}

void TestJProgressBarHighlightColor$1::init$() {
}

void TestJProgressBarHighlightColor$1::run() {
	$var($JPanel, panel, $new($JPanel));
	$init($TestJProgressBarHighlightColor);
	$assignStatic($TestJProgressBarHighlightColor::progressBar, $new($JProgressBar));
	$nc($TestJProgressBarHighlightColor::progressBar)->setValue(50);
	$init($BorderLayout);
	panel->add(static_cast<$Component*>($TestJProgressBarHighlightColor::progressBar), $of($BorderLayout::CENTER));
	$assignStatic($TestJProgressBarHighlightColor::frame, $new($JFrame, "TestSelectedTextBackgroundColor"_s));
	$nc($TestJProgressBarHighlightColor::frame)->add(static_cast<$Component*>(panel));
	$nc($TestJProgressBarHighlightColor::frame)->setSize(200, 200);
	$nc($TestJProgressBarHighlightColor::frame)->setAlwaysOnTop(true);
	$nc($TestJProgressBarHighlightColor::frame)->setLocationRelativeTo(nullptr);
	$nc($TestJProgressBarHighlightColor::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($TestJProgressBarHighlightColor::frame)->setVisible(true);
}

TestJProgressBarHighlightColor$1::TestJProgressBarHighlightColor$1() {
}

$Class* TestJProgressBarHighlightColor$1::load$($String* name, bool initialize) {
	$loadClass(TestJProgressBarHighlightColor$1, name, initialize, &_TestJProgressBarHighlightColor$1_ClassInfo_, allocate$TestJProgressBarHighlightColor$1);
	return class$;
}

$Class* TestJProgressBarHighlightColor$1::class$ = nullptr;