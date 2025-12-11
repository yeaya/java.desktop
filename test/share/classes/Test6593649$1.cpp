#include <Test6593649$1.h>

#include <Test6593649.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $Test6593649 = ::Test6593649;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JTextArea = ::javax::swing::JTextArea;

$MethodInfo _Test6593649$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6593649$1::*)()>(&Test6593649$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6593649$1_EnclosingMethodInfo_ = {
	"Test6593649",
	nullptr,
	nullptr
};

$InnerClassInfo _Test6593649$1_InnerClassesInfo_[] = {
	{"Test6593649$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6593649$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test6593649$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_Test6593649$1_MethodInfo_,
	nullptr,
	&_Test6593649$1_EnclosingMethodInfo_,
	_Test6593649$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6593649"
};

$Object* allocate$Test6593649$1($Class* clazz) {
	return $of($alloc(Test6593649$1));
}

void Test6593649$1::init$() {
}

void Test6593649$1::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($Test6593649);
	bool failed = !$nc($($nc($($nc($Test6593649::textArea)->getParent()))->getSize()))->equals($($nc($Test6593649::textArea)->getSize()));
	$nc($Test6593649::frame)->dispose();
	if (failed) {
		$throwNew($RuntimeException, "The test failed"_s);
	}
}

Test6593649$1::Test6593649$1() {
}

$Class* Test6593649$1::load$($String* name, bool initialize) {
	$loadClass(Test6593649$1, name, initialize, &_Test6593649$1_ClassInfo_, allocate$Test6593649$1);
	return class$;
}

$Class* Test6593649$1::class$ = nullptr;