#include <TestJSliderRendering$1.h>

#include <TestJSliderRendering.h>
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
#include <javax/swing/JSlider.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL

using $TestJSliderRendering = ::TestJSliderRendering;
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
using $JSlider = ::javax::swing::JSlider;

$MethodInfo _TestJSliderRendering$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestJSliderRendering$1::*)()>(&TestJSliderRendering$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestJSliderRendering$1_EnclosingMethodInfo_ = {
	"TestJSliderRendering",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestJSliderRendering$1_InnerClassesInfo_[] = {
	{"TestJSliderRendering$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJSliderRendering$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestJSliderRendering$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TestJSliderRendering$1_MethodInfo_,
	nullptr,
	&_TestJSliderRendering$1_EnclosingMethodInfo_,
	_TestJSliderRendering$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJSliderRendering"
};

$Object* allocate$TestJSliderRendering$1($Class* clazz) {
	return $of($alloc(TestJSliderRendering$1));
}

void TestJSliderRendering$1::init$() {
}

void TestJSliderRendering$1::run() {
	$var($JPanel, panel, $new($JPanel));
	$init($TestJSliderRendering);
	$assignStatic($TestJSliderRendering::slider, $new($JSlider, $JSlider::HORIZONTAL, 0, 100, 50));
	panel->add(static_cast<$Component*>($TestJSliderRendering::slider));
	$assignStatic($TestJSliderRendering::frame, $new($JFrame, "TestJSliderRendering"_s));
	$nc($TestJSliderRendering::frame)->add(static_cast<$Component*>(panel));
	$nc($TestJSliderRendering::frame)->setSize(200, 200);
	$nc($TestJSliderRendering::frame)->setAlwaysOnTop(true);
	$nc($TestJSliderRendering::frame)->setLocationRelativeTo(nullptr);
	$nc($TestJSliderRendering::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($TestJSliderRendering::frame)->setVisible(true);
}

TestJSliderRendering$1::TestJSliderRendering$1() {
}

$Class* TestJSliderRendering$1::load$($String* name, bool initialize) {
	$loadClass(TestJSliderRendering$1, name, initialize, &_TestJSliderRendering$1_ClassInfo_, allocate$TestJSliderRendering$1);
	return class$;
}

$Class* TestJSliderRendering$1::class$ = nullptr;