#include <Test4319113$1$1.h>

#include <Test4319113$1.h>
#include <Test4319113.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Test4319113 = ::Test4319113;
using $Test4319113$1 = ::Test4319113$1;
using $FrameArray = $Array<::java::awt::Frame>;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComboBox = ::javax::swing::JComboBox;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _Test4319113$1$1_FieldInfo_[] = {
	{"this$1", "LTest4319113$1;", nullptr, $FINAL | $SYNTHETIC, $field(Test4319113$1$1, this$1)},
	{}
};

$MethodInfo _Test4319113$1$1_MethodInfo_[] = {
	{"<init>", "(LTest4319113$1;)V", nullptr, 0, $method(static_cast<void(Test4319113$1$1::*)($Test4319113$1*)>(&Test4319113$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test4319113$1$1_EnclosingMethodInfo_ = {
	"Test4319113$1",
	"itemStateChanged",
	"(Ljava/awt/event/ItemEvent;)V"
};

$InnerClassInfo _Test4319113$1$1_InnerClassesInfo_[] = {
	{"Test4319113$1", nullptr, nullptr, 0},
	{"Test4319113$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test4319113$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test4319113$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test4319113$1$1_FieldInfo_,
	_Test4319113$1$1_MethodInfo_,
	nullptr,
	&_Test4319113$1$1_EnclosingMethodInfo_,
	_Test4319113$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test4319113"
};

$Object* allocate$Test4319113$1$1($Class* clazz) {
	return $of($alloc(Test4319113$1$1));
}

void Test4319113$1$1::init$($Test4319113$1* this$1) {
	$set(this, this$1, this$1);
}

void Test4319113$1$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, $cast($UIManager$LookAndFeelInfo, $nc($nc(this->this$1->this$0)->cbPlaf)->getSelectedItem()));
	try {
		$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
		$var($FrameArray, arrframe, $Frame::getFrames());
		int32_t n = $nc(arrframe)->length;
		while (--n >= 0) {
			$Test4319113::updateWindowTreeUI(arrframe->get(n));
		}
	} catch ($Exception& var2_3) {
		$nc($System::err)->println("Exception while changing L&F!"_s);
	}
}

Test4319113$1$1::Test4319113$1$1() {
}

$Class* Test4319113$1$1::load$($String* name, bool initialize) {
	$loadClass(Test4319113$1$1, name, initialize, &_Test4319113$1$1_ClassInfo_, allocate$Test4319113$1$1);
	return class$;
}

$Class* Test4319113$1$1::class$ = nullptr;