#include <TestTooltipBackgroundColor$1.h>

#include <TestTooltipBackgroundColor$1$1.h>
#include <TestTooltipBackgroundColor$1$2.h>
#include <TestTooltipBackgroundColor.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/event/ContainerAdapter.h>
#include <java/awt/event/ContainerListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $TestTooltipBackgroundColor = ::TestTooltipBackgroundColor;
using $TestTooltipBackgroundColor$1$1 = ::TestTooltipBackgroundColor$1$1;
using $TestTooltipBackgroundColor$1$2 = ::TestTooltipBackgroundColor$1$2;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ContainerAdapter = ::java::awt::event::ContainerAdapter;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _TestTooltipBackgroundColor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestTooltipBackgroundColor$1::*)()>(&TestTooltipBackgroundColor$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestTooltipBackgroundColor$1_EnclosingMethodInfo_ = {
	"TestTooltipBackgroundColor",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestTooltipBackgroundColor$1_InnerClassesInfo_[] = {
	{"TestTooltipBackgroundColor$1", nullptr, nullptr, 0},
	{"TestTooltipBackgroundColor$1$2", nullptr, nullptr, 0},
	{"TestTooltipBackgroundColor$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestTooltipBackgroundColor$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestTooltipBackgroundColor$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TestTooltipBackgroundColor$1_MethodInfo_,
	nullptr,
	&_TestTooltipBackgroundColor$1_EnclosingMethodInfo_,
	_TestTooltipBackgroundColor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestTooltipBackgroundColor"
};

$Object* allocate$TestTooltipBackgroundColor$1($Class* clazz) {
	return $of($alloc(TestTooltipBackgroundColor$1));
}

void TestTooltipBackgroundColor$1::init$() {
}

void TestTooltipBackgroundColor$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, panel, $new($JPanel));
	$init($TestTooltipBackgroundColor);
	$assignStatic($TestTooltipBackgroundColor::label, $new($TestTooltipBackgroundColor$1$1, this, "Label with tooltip"_s));
	$nc($TestTooltipBackgroundColor::label)->setToolTipText("<html> This is tooltip <br><br><br><br></html>"_s);
	$init($BorderLayout);
	panel->add(static_cast<$Component*>($TestTooltipBackgroundColor::label), $of($BorderLayout::CENTER));
	$assignStatic($TestTooltipBackgroundColor::frame, $new($JFrame, "TestTooltipBackgroundColor"_s));
	$nc($TestTooltipBackgroundColor::frame)->add(static_cast<$Component*>(panel));
	$nc($TestTooltipBackgroundColor::frame)->setSize(200, 200);
	$nc($TestTooltipBackgroundColor::frame)->setAlwaysOnTop(true);
	$nc($TestTooltipBackgroundColor::frame)->setLocationRelativeTo(nullptr);
	$nc($TestTooltipBackgroundColor::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JLayeredPane, layeredPane, $cast($JLayeredPane, $TestTooltipBackgroundColor::findSubComponent($TestTooltipBackgroundColor::frame, "JLayeredPane"_s)));
	$nc(layeredPane)->addContainerListener($$new($TestTooltipBackgroundColor$1$2, this));
	$nc($TestTooltipBackgroundColor::frame)->setVisible(true);
}

TestTooltipBackgroundColor$1::TestTooltipBackgroundColor$1() {
}

$Class* TestTooltipBackgroundColor$1::load$($String* name, bool initialize) {
	$loadClass(TestTooltipBackgroundColor$1, name, initialize, &_TestTooltipBackgroundColor$1_ClassInfo_, allocate$TestTooltipBackgroundColor$1);
	return class$;
}

$Class* TestTooltipBackgroundColor$1::class$ = nullptr;