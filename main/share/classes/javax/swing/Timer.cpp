#include <javax/swing/Timer.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/EventListener.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/swing/Timer$1.h>
#include <javax/swing/Timer$DoPostEvent.h>
#include <javax/swing/TimerQueue$DelayedTimer.h>
#include <javax/swing/TimerQueue.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $EventListener = ::java::util::EventListener;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Timer$1 = ::javax::swing::Timer$1;
using $Timer$DoPostEvent = ::javax::swing::Timer$DoPostEvent;
using $TimerQueue = ::javax::swing::TimerQueue;
using $TimerQueue$DelayedTimer = ::javax::swing::TimerQueue$DelayedTimer;
using $EventListenerList = ::javax::swing::event::EventListenerList;

namespace javax {
	namespace swing {

$FieldInfo _Timer_FieldInfo_[] = {
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(Timer, listenerList)},
	{"notify", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(Timer, notify$)},
	{"initialDelay", "I", nullptr, $PRIVATE | $VOLATILE, $field(Timer, initialDelay)},
	{"delay", "I", nullptr, $PRIVATE | $VOLATILE, $field(Timer, delay)},
	{"repeats", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Timer, repeats)},
	{"coalesce", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Timer, coalesce)},
	{"doPostEvent", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(Timer, doPostEvent)},
	{"logTimers", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Timer, logTimers)},
	{"lock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(Timer, lock)},
	{"delayedTimer", "Ljavax/swing/TimerQueue$DelayedTimer;", nullptr, $TRANSIENT, $field(Timer, delayedTimer)},
	{"actionCommand", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(Timer, actionCommand)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Timer, acc)},
	{}
};

$MethodInfo _Timer_MethodInfo_[] = {
	{"<init>", "(ILjava/awt/event/ActionListener;)V", nullptr, $PUBLIC, $method(static_cast<void(Timer::*)(int32_t,$ActionListener*)>(&Timer::init$))},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"cancelEvent", "()V", nullptr, 0},
	{"checkDelay", "(ILjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$String*)>(&Timer::checkDelay))},
	{"fireActionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PROTECTED},
	{"getAccessControlContext", "()Ljava/security/AccessControlContext;", nullptr, $FINAL, $method(static_cast<$AccessControlContext*(Timer::*)()>(&Timer::getAccessControlContext))},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC},
	{"getDelay", "()I", nullptr, $PUBLIC},
	{"getInitialDelay", "()I", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, 0},
	{"getLogTimers", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&Timer::getLogTimers))},
	{"isCoalesce", "()Z", nullptr, $PUBLIC},
	{"isRepeats", "()Z", nullptr, $PUBLIC},
	{"isRunning", "()Z", nullptr, $PUBLIC},
	{"post", "()V", nullptr, 0},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Timer::*)($ObjectInputStream*)>(&Timer::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Timer::*)()>(&Timer::readResolve))},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"restart", "()V", nullptr, $PUBLIC},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setCoalesce", "(Z)V", nullptr, $PUBLIC},
	{"setDelay", "(I)V", nullptr, $PUBLIC},
	{"setInitialDelay", "(I)V", nullptr, $PUBLIC},
	{"setLogTimers", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&Timer::setLogTimers))},
	{"setRepeats", "(Z)V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PUBLIC},
	{"stop", "()V", nullptr, $PUBLIC},
	{"timerQueue", "()Ljavax/swing/TimerQueue;", nullptr, $PRIVATE, $method(static_cast<$TimerQueue*(Timer::*)()>(&Timer::timerQueue))},
	{}
};

$InnerClassInfo _Timer_InnerClassesInfo_[] = {
	{"javax.swing.Timer$DoPostEvent", "javax.swing.Timer", "DoPostEvent", 0},
	{"javax.swing.Timer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Timer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.Timer",
	"java.lang.Object",
	"java.io.Serializable",
	_Timer_FieldInfo_,
	_Timer_MethodInfo_,
	nullptr,
	nullptr,
	_Timer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.Timer$DoPostEvent,javax.swing.Timer$1"
};

$Object* allocate$Timer($Class* clazz) {
	return $of($alloc(Timer));
}

$volatile(bool) Timer::logTimers = false;

void Timer::init$(int32_t delay, $ActionListener* listener) {
	$set(this, listenerList, $new($EventListenerList));
	$set(this, notify$, $new($AtomicBoolean, false));
	this->repeats = true;
	this->coalesce = true;
	$set(this, lock, $new($ReentrantLock));
	$set(this, delayedTimer, nullptr);
	$set(this, acc, $AccessController::getContext());
	this->delay = delay;
	this->initialDelay = delay;
	$set(this, doPostEvent, $new($Timer$DoPostEvent, this));
	if (listener != nullptr) {
		addActionListener(listener);
	}
}

$AccessControlContext* Timer::getAccessControlContext() {
	if (this->acc == nullptr) {
		$throwNew($SecurityException, "Timer is missing AccessControlContext"_s);
	}
	return this->acc;
}

void Timer::addActionListener($ActionListener* listener) {
	$load($ActionListener);
	$nc(this->listenerList)->add($ActionListener::class$, listener);
}

void Timer::removeActionListener($ActionListener* listener) {
	$load($ActionListener);
	$nc(this->listenerList)->remove($ActionListener::class$, listener);
}

$ActionListenerArray* Timer::getActionListeners() {
	$load($ActionListener);
	return $fcast($ActionListenerArray, $nc(this->listenerList)->getListeners($ActionListener::class$));
}

void Timer::fireActionPerformed($ActionEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ActionListener);
		if ($equals(listeners->get(i), $ActionListener::class$)) {
			$nc(($cast($ActionListener, listeners->get(i + 1))))->actionPerformed(e);
		}
	}
}

$EventListenerArray* Timer::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

$TimerQueue* Timer::timerQueue() {
	return $TimerQueue::sharedInstance();
}

void Timer::setLogTimers(bool flag) {
	$init(Timer);
	Timer::logTimers = flag;
}

bool Timer::getLogTimers() {
	$init(Timer);
	return Timer::logTimers;
}

void Timer::setDelay(int32_t delay) {
	checkDelay(delay, "Invalid delay: "_s);
	this->delay = delay;
}

void Timer::checkDelay(int32_t delay, $String* message) {
	$init(Timer);
	$useLocalCurrentObjectStackCache();
	if (delay < 0) {
		$throwNew($IllegalArgumentException, $$str({message, $$str(delay)}));
	}
}

int32_t Timer::getDelay() {
	return this->delay;
}

void Timer::setInitialDelay(int32_t initialDelay) {
	checkDelay(initialDelay, "Invalid initial delay: "_s);
	this->initialDelay = initialDelay;
}

int32_t Timer::getInitialDelay() {
	return this->initialDelay;
}

void Timer::setRepeats(bool flag) {
	this->repeats = flag;
}

bool Timer::isRepeats() {
	return this->repeats;
}

void Timer::setCoalesce(bool flag) {
	bool old = this->coalesce;
	this->coalesce = flag;
	if (!old && this->coalesce) {
		cancelEvent();
	}
}

bool Timer::isCoalesce() {
	return this->coalesce;
}

void Timer::setActionCommand($String* command) {
	$set(this, actionCommand, command);
}

$String* Timer::getActionCommand() {
	return this->actionCommand;
}

void Timer::start() {
	$nc($(timerQueue()))->addTimer(this, getInitialDelay());
}

bool Timer::isRunning() {
	return $nc($(timerQueue()))->containsTimer(this);
}

void Timer::stop() {
	$useLocalCurrentObjectStackCache();
	$nc($(getLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			cancelEvent();
			$nc($(timerQueue()))->removeTimer(this);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($(getLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Timer::restart() {
	$useLocalCurrentObjectStackCache();
	$nc($(getLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			stop();
			start();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($(getLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Timer::cancelEvent() {
	$nc(this->notify$)->set(false);
}

void Timer::post() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(this->notify$)->compareAndSet(false, true) || !this->coalesce) {
		$var($PrivilegedAction, var$0, static_cast<$PrivilegedAction*>($new($Timer$1, this)));
		$AccessController::doPrivileged(var$0, $(getAccessControlContext()));
	}
}

$Lock* Timer::getLock() {
	return this->lock;
}

void Timer::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$set(this, acc, $AccessController::getContext());
	$var($ObjectInputStream$GetField, f, $nc(in)->readFields());
	$var($EventListenerList, newListenerList, $cast($EventListenerList, $nc(f)->get("listenerList"_s, ($Object*)nullptr)));
	if (newListenerList == nullptr) {
		$throwNew($InvalidObjectException, "Null listenerList"_s);
	}
	$set(this, listenerList, newListenerList);
	int32_t newInitialDelay = f->get("initialDelay"_s, 0);
	checkDelay(newInitialDelay, "Invalid initial delay: "_s);
	this->initialDelay = newInitialDelay;
	int32_t newDelay = f->get("delay"_s, 0);
	checkDelay(newDelay, "Invalid delay: "_s);
	this->delay = newDelay;
	this->repeats = f->get("repeats"_s, false);
	this->coalesce = f->get("coalesce"_s, false);
	$set(this, actionCommand, $cast($String, f->get("actionCommand"_s, ($Object*)nullptr)));
}

$Object* Timer::readResolve() {
	$var(Timer, timer, $new(Timer, getDelay(), nullptr));
	$set(timer, listenerList, this->listenerList);
	timer->initialDelay = this->initialDelay;
	timer->delay = this->delay;
	timer->repeats = this->repeats;
	timer->coalesce = this->coalesce;
	$set(timer, actionCommand, this->actionCommand);
	return $of(timer);
}

Timer::Timer() {
}

$Class* Timer::load$($String* name, bool initialize) {
	$loadClass(Timer, name, initialize, &_Timer_ClassInfo_, allocate$Timer);
	return class$;
}

$Class* Timer::class$ = nullptr;

	} // swing
} // javax