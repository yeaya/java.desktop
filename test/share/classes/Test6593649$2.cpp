#include <Test6593649$2.h>

#include <Test6593649.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/Timer.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef LINE_AXIS
#undef SOUTH

using $Test6593649 = ::Test6593649;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $Timer = ::javax::swing::Timer;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _Test6593649$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6593649$2::*)()>(&Test6593649$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6593649$2_EnclosingMethodInfo_ = {
	"Test6593649",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test6593649$2_InnerClassesInfo_[] = {
	{"Test6593649$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6593649$2_ClassInfo_ = {
	$ACC_SUPER,
	"Test6593649$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test6593649$2_MethodInfo_,
	nullptr,
	&_Test6593649$2_EnclosingMethodInfo_,
	_Test6593649$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6593649"
};

$Object* allocate$Test6593649$2($Class* clazz) {
	return $of($alloc(Test6593649$2));
}

void Test6593649$2::init$() {
}

void Test6593649$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($Test6593649);
	$assignStatic($Test6593649::frame, $new($JFrame));
	$nc($Test6593649::frame)->setSize(200, 100);
	$assignStatic($Test6593649::textArea, $new($JTextArea, "This is a long line that should wrap, but doesn\'t..."_s));
	$nc($Test6593649::textArea)->setLineWrap(true);
	$nc($Test6593649::textArea)->setWrapStyleWord(true);
	$var($JPanel, innerPanel, $new($JPanel));
	innerPanel->setLayout($$new($BoxLayout, innerPanel, $BoxLayout::LINE_AXIS));
	innerPanel->add(static_cast<$Component*>($Test6593649::textArea));
	$init($BorderLayout);
	$nc($($nc($Test6593649::frame)->getContentPane()))->add(static_cast<$Component*>(innerPanel), $of($BorderLayout::SOUTH));
	$nc($Test6593649::frame)->setVisible(true);
	$nc($Test6593649::timer)->setRepeats(false);
	$nc($Test6593649::timer)->start();
}

Test6593649$2::Test6593649$2() {
}

$Class* Test6593649$2::load$($String* name, bool initialize) {
	$loadClass(Test6593649$2, name, initialize, &_Test6593649$2_ClassInfo_, allocate$Test6593649$2);
	return class$;
}

$Class* Test6593649$2::class$ = nullptr;