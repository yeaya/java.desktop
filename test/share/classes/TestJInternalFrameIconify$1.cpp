#include <TestJInternalFrameIconify$1.h>

#include <TestJInternalFrameIconify.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $TestJInternalFrameIconify = ::TestJInternalFrameIconify;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;

$FieldInfo _TestJInternalFrameIconify$1_FieldInfo_[] = {
	{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(TestJInternalFrameIconify$1, val$lookAndFeelString)},
	{}
};

$MethodInfo _TestJInternalFrameIconify$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(TestJInternalFrameIconify$1::*)($String*)>(&TestJInternalFrameIconify$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestJInternalFrameIconify$1_EnclosingMethodInfo_ = {
	"TestJInternalFrameIconify",
	"createUI",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _TestJInternalFrameIconify$1_InnerClassesInfo_[] = {
	{"TestJInternalFrameIconify$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJInternalFrameIconify$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestJInternalFrameIconify$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_TestJInternalFrameIconify$1_FieldInfo_,
	_TestJInternalFrameIconify$1_MethodInfo_,
	nullptr,
	&_TestJInternalFrameIconify$1_EnclosingMethodInfo_,
	_TestJInternalFrameIconify$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJInternalFrameIconify"
};

$Object* allocate$TestJInternalFrameIconify$1($Class* clazz) {
	return $of($alloc(TestJInternalFrameIconify$1));
}

void TestJInternalFrameIconify$1::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void TestJInternalFrameIconify$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($TestJInternalFrameIconify);
	$assignStatic($TestJInternalFrameIconify::frame, $new($JFrame, this->val$lookAndFeelString));
	$assignStatic($TestJInternalFrameIconify::desktopPane, $new($JDesktopPane));
	$nc($($nc($TestJInternalFrameIconify::frame)->getContentPane()))->add(static_cast<$Component*>($TestJInternalFrameIconify::desktopPane));
	$nc($TestJInternalFrameIconify::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JInternalFrame, f, $new($JInternalFrame, "Child "_s, true, true, true, true));
	f->setSize(200, 300);
	f->setLocation(20, 20);
	try {
		f->setIcon(true);
	} catch ($PropertyVetoException& ex) {
		$plusAssignStatic($TestJInternalFrameIconify::errorMessage, $$str({$(ex->getMessage()), "\n"_s}));
	}
	$nc($TestJInternalFrameIconify::desktopPane)->add(static_cast<$Component*>(f));
	f->setVisible(true);
	$nc($TestJInternalFrameIconify::frame)->setSize(500, 500);
	$nc($TestJInternalFrameIconify::frame)->setLocationRelativeTo(nullptr);
	$nc($TestJInternalFrameIconify::frame)->setVisible(true);
}

TestJInternalFrameIconify$1::TestJInternalFrameIconify$1() {
}

$Class* TestJInternalFrameIconify$1::load$($String* name, bool initialize) {
	$loadClass(TestJInternalFrameIconify$1, name, initialize, &_TestJInternalFrameIconify$1_ClassInfo_, allocate$TestJInternalFrameIconify$1);
	return class$;
}

$Class* TestJInternalFrameIconify$1::class$ = nullptr;