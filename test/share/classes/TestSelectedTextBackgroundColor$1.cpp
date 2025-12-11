#include <TestSelectedTextBackgroundColor$1.h>

#include <TestSelectedTextBackgroundColor.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerListModel.h>
#include <javax/swing/SpinnerModel.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $TestSelectedTextBackgroundColor = ::TestSelectedTextBackgroundColor;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerListModel = ::javax::swing::SpinnerListModel;
using $SpinnerModel = ::javax::swing::SpinnerModel;

$MethodInfo _TestSelectedTextBackgroundColor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestSelectedTextBackgroundColor$1::*)()>(&TestSelectedTextBackgroundColor$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestSelectedTextBackgroundColor$1_EnclosingMethodInfo_ = {
	"TestSelectedTextBackgroundColor",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestSelectedTextBackgroundColor$1_InnerClassesInfo_[] = {
	{"TestSelectedTextBackgroundColor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestSelectedTextBackgroundColor$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestSelectedTextBackgroundColor$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TestSelectedTextBackgroundColor$1_MethodInfo_,
	nullptr,
	&_TestSelectedTextBackgroundColor$1_EnclosingMethodInfo_,
	_TestSelectedTextBackgroundColor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestSelectedTextBackgroundColor"
};

$Object* allocate$TestSelectedTextBackgroundColor$1($Class* clazz) {
	return $of($alloc(TestSelectedTextBackgroundColor$1));
}

void TestSelectedTextBackgroundColor$1::init$() {
}

void TestSelectedTextBackgroundColor$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, panel, $new($JPanel));
	$var($StringArray, list, $new($StringArray, {"            "_s}));
	$var($SpinnerListModel, model, $new($SpinnerListModel, list));
	$init($TestSelectedTextBackgroundColor);
	$assignStatic($TestSelectedTextBackgroundColor::listModelSpinner, $new($JSpinner, model));
	$init($BorderLayout);
	panel->add(static_cast<$Component*>($TestSelectedTextBackgroundColor::listModelSpinner), $of($BorderLayout::CENTER));
	$assignStatic($TestSelectedTextBackgroundColor::frame, $new($JFrame, "TestSelectedTextBackgroundColor"_s));
	$nc($TestSelectedTextBackgroundColor::frame)->add(static_cast<$Component*>(panel));
	$nc($TestSelectedTextBackgroundColor::frame)->setSize(200, 200);
	$nc($TestSelectedTextBackgroundColor::frame)->setAlwaysOnTop(true);
	$nc($TestSelectedTextBackgroundColor::frame)->setLocationRelativeTo(nullptr);
	$nc($TestSelectedTextBackgroundColor::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($TestSelectedTextBackgroundColor::frame)->setVisible(true);
}

TestSelectedTextBackgroundColor$1::TestSelectedTextBackgroundColor$1() {
}

$Class* TestSelectedTextBackgroundColor$1::load$($String* name, bool initialize) {
	$loadClass(TestSelectedTextBackgroundColor$1, name, initialize, &_TestSelectedTextBackgroundColor$1_ClassInfo_, allocate$TestSelectedTextBackgroundColor$1);
	return class$;
}

$Class* TestSelectedTextBackgroundColor$1::class$ = nullptr;