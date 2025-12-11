#include <WrongAltProcessing$3.h>

#include <WrongAltProcessing.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

#undef EVT

using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _WrongAltProcessing$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WrongAltProcessing$3::*)()>(&WrongAltProcessing$3::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WrongAltProcessing$3_EnclosingMethodInfo_ = {
	"WrongAltProcessing",
	"createWindows",
	"()V"
};

$InnerClassInfo _WrongAltProcessing$3_InnerClassesInfo_[] = {
	{"WrongAltProcessing$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WrongAltProcessing$3_ClassInfo_ = {
	$ACC_SUPER,
	"WrongAltProcessing$3",
	"java.awt.event.KeyAdapter",
	nullptr,
	nullptr,
	_WrongAltProcessing$3_MethodInfo_,
	nullptr,
	&_WrongAltProcessing$3_EnclosingMethodInfo_,
	_WrongAltProcessing$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WrongAltProcessing"
};

$Object* allocate$WrongAltProcessing$3($Class* clazz) {
	return $of($alloc(WrongAltProcessing$3));
}

void WrongAltProcessing$3::init$() {
	$KeyAdapter::init$();
}

void WrongAltProcessing$3::keyPressed($KeyEvent* EVT) {
	bool var$0 = $nc(EVT)->getKeyChar() >= u'a';
	if (var$0 && EVT->getKeyChar() <= u'z') {
		try {
			$Thread::sleep(2000);
		} catch ($InterruptedException& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
}

WrongAltProcessing$3::WrongAltProcessing$3() {
}

$Class* WrongAltProcessing$3::load$($String* name, bool initialize) {
	$loadClass(WrongAltProcessing$3, name, initialize, &_WrongAltProcessing$3_ClassInfo_, allocate$WrongAltProcessing$3);
	return class$;
}

$Class* WrongAltProcessing$3::class$ = nullptr;