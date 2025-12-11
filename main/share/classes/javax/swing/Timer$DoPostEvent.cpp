#include <javax/swing/Timer$DoPostEvent.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Timer = ::javax::swing::Timer;

namespace javax {
	namespace swing {

$FieldInfo _Timer$DoPostEvent_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/Timer;", nullptr, $FINAL | $SYNTHETIC, $field(Timer$DoPostEvent, this$0)},
	{}
};

$MethodInfo _Timer$DoPostEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Timer;)V", nullptr, 0, $method(static_cast<void(Timer$DoPostEvent::*)($Timer*)>(&Timer$DoPostEvent::init$))},
	{"getTimer", "()Ljavax/swing/Timer;", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Timer$DoPostEvent_InnerClassesInfo_[] = {
	{"javax.swing.Timer$DoPostEvent", "javax.swing.Timer", "DoPostEvent", 0},
	{}
};

$ClassInfo _Timer$DoPostEvent_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Timer$DoPostEvent",
	"java.lang.Object",
	"java.lang.Runnable",
	_Timer$DoPostEvent_FieldInfo_,
	_Timer$DoPostEvent_MethodInfo_,
	nullptr,
	nullptr,
	_Timer$DoPostEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Timer"
};

$Object* allocate$Timer$DoPostEvent($Class* clazz) {
	return $of($alloc(Timer$DoPostEvent));
}

void Timer$DoPostEvent::init$($Timer* this$0) {
	$set(this, this$0, this$0);
}

void Timer$DoPostEvent::run() {
	$useLocalCurrentObjectStackCache();
	$init($Timer);
	if ($Timer::logTimers) {
		$nc($System::out)->println($$str({"Timer ringing: "_s, this->this$0}));
	}
	if ($nc(this->this$0->notify$)->get()) {
		$var($Object, var$0, $of(this->this$0));
		$var($String, var$1, this->this$0->getActionCommand());
		this->this$0->fireActionPerformed($$new($ActionEvent, var$0, 0, var$1, $System::currentTimeMillis(), 0));
		if (this->this$0->coalesce) {
			this->this$0->cancelEvent();
		}
	}
}

$Timer* Timer$DoPostEvent::getTimer() {
	return this->this$0;
}

Timer$DoPostEvent::Timer$DoPostEvent() {
}

$Class* Timer$DoPostEvent::load$($String* name, bool initialize) {
	$loadClass(Timer$DoPostEvent, name, initialize, &_Timer$DoPostEvent_ClassInfo_, allocate$Timer$DoPostEvent);
	return class$;
}

$Class* Timer$DoPostEvent::class$ = nullptr;

	} // swing
} // javax