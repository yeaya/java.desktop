#include <TestJInternalFrameIconify$2.h>

#include <TestJInternalFrameIconify.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $TestJInternalFrameIconify = ::TestJInternalFrameIconify;
using $JInternalFrameArray = $Array<::javax::swing::JInternalFrame>;
using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;

$FieldInfo _TestJInternalFrameIconify$2_FieldInfo_[] = {
	{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(TestJInternalFrameIconify$2, val$lookAndFeelString)},
	{}
};

$MethodInfo _TestJInternalFrameIconify$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(TestJInternalFrameIconify$2::*)($String*)>(&TestJInternalFrameIconify$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestJInternalFrameIconify$2_EnclosingMethodInfo_ = {
	"TestJInternalFrameIconify",
	"executeTest",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _TestJInternalFrameIconify$2_InnerClassesInfo_[] = {
	{"TestJInternalFrameIconify$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJInternalFrameIconify$2_ClassInfo_ = {
	$ACC_SUPER,
	"TestJInternalFrameIconify$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_TestJInternalFrameIconify$2_FieldInfo_,
	_TestJInternalFrameIconify$2_MethodInfo_,
	nullptr,
	&_TestJInternalFrameIconify$2_EnclosingMethodInfo_,
	_TestJInternalFrameIconify$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJInternalFrameIconify"
};

$Object* allocate$TestJInternalFrameIconify$2($Class* clazz) {
	return $of($alloc(TestJInternalFrameIconify$2));
}

void TestJInternalFrameIconify$2::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void TestJInternalFrameIconify$2::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($TestJInternalFrameIconify);
			$var($JInternalFrameArray, internalFrames, $nc($TestJInternalFrameIconify::desktopPane)->getAllFrames());
			if ($nc($nc(internalFrames)->get(0))->isShowing()) {
				$plusAssignStatic($TestJInternalFrameIconify::errorMessage, $$str({"Test Failed for "_s, this->val$lookAndFeelString, " look and feel\n"_s}));
				$nc($System::err)->println($TestJInternalFrameIconify::errorMessage);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init($TestJInternalFrameIconify);
			$nc($TestJInternalFrameIconify::frame)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

TestJInternalFrameIconify$2::TestJInternalFrameIconify$2() {
}

$Class* TestJInternalFrameIconify$2::load$($String* name, bool initialize) {
	$loadClass(TestJInternalFrameIconify$2, name, initialize, &_TestJInternalFrameIconify$2_ClassInfo_, allocate$TestJInternalFrameIconify$2);
	return class$;
}

$Class* TestJInternalFrameIconify$2::class$ = nullptr;