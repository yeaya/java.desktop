#include <javax/swing/TimerQueue.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/DelayQueue.h>
#include <java/util/concurrent/Delayed.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/TimerQueue$DelayedTimer.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef MILLISECONDS
#undef NANO_ORIGIN
#undef NORM_PRIORITY

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $StringBuffer = ::java::lang::StringBuffer;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $DelayQueue = ::java::util::concurrent::DelayQueue;
using $Delayed = ::java::util::concurrent::Delayed;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Condition = ::java::util::concurrent::locks::Condition;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $TimerQueue$DelayedTimer = ::javax::swing::TimerQueue$DelayedTimer;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {

class TimerQueue$$Lambda$lambda$startIfNeeded$0 : public $PrivilegedAction {
	$class(TimerQueue$$Lambda$lambda$startIfNeeded$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(TimerQueue* inst, $ThreadGroup* threadGroup) {
		$set(this, inst$, inst);
		$set(this, threadGroup, threadGroup);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$startIfNeeded$0(threadGroup);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TimerQueue$$Lambda$lambda$startIfNeeded$0>());
	}
	TimerQueue* inst$ = nullptr;
	$ThreadGroup* threadGroup = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TimerQueue$$Lambda$lambda$startIfNeeded$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TimerQueue$$Lambda$lambda$startIfNeeded$0, inst$)},
	{"threadGroup", "Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $field(TimerQueue$$Lambda$lambda$startIfNeeded$0, threadGroup)},
	{}
};
$MethodInfo TimerQueue$$Lambda$lambda$startIfNeeded$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/TimerQueue;Ljava/lang/ThreadGroup;)V", nullptr, $PUBLIC, $method(static_cast<void(TimerQueue$$Lambda$lambda$startIfNeeded$0::*)(TimerQueue*,$ThreadGroup*)>(&TimerQueue$$Lambda$lambda$startIfNeeded$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TimerQueue$$Lambda$lambda$startIfNeeded$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.TimerQueue$$Lambda$lambda$startIfNeeded$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* TimerQueue$$Lambda$lambda$startIfNeeded$0::load$($String* name, bool initialize) {
	$loadClass(TimerQueue$$Lambda$lambda$startIfNeeded$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TimerQueue$$Lambda$lambda$startIfNeeded$0::class$ = nullptr;

$FieldInfo _TimerQueue_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TimerQueue, $assertionsDisabled)},
	{"sharedInstanceKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TimerQueue, sharedInstanceKey)},
	{"expiredTimersKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TimerQueue, expiredTimersKey)},
	{"queue", "Ljava/util/concurrent/DelayQueue;", "Ljava/util/concurrent/DelayQueue<Ljavax/swing/TimerQueue$DelayedTimer;>;", $PRIVATE | $FINAL, $field(TimerQueue, queue)},
	{"running", "Z", nullptr, $PRIVATE | $VOLATILE, $field(TimerQueue, running)},
	{"runningLock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL, $field(TimerQueue, runningLock)},
	{"classLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TimerQueue, classLock)},
	{"NANO_ORIGIN", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TimerQueue, NANO_ORIGIN)},
	{}
};

$MethodInfo _TimerQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimerQueue::*)()>(&TimerQueue::init$))},
	{"addTimer", "(Ljavax/swing/Timer;J)V", nullptr, 0},
	{"addTimer", "(Ljavax/swing/TimerQueue$DelayedTimer;)V", nullptr, $PRIVATE, $method(static_cast<void(TimerQueue::*)($TimerQueue$DelayedTimer*)>(&TimerQueue::addTimer))},
	{"containsTimer", "(Ljavax/swing/Timer;)Z", nullptr, 0},
	{"lambda$startIfNeeded$0", "(Ljava/lang/ThreadGroup;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(TimerQueue::*)($ThreadGroup*)>(&TimerQueue::lambda$startIfNeeded$0))},
	{"now", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&TimerQueue::now))},
	{"removeTimer", "(Ljavax/swing/Timer;)V", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{"sharedInstance", "()Ljavax/swing/TimerQueue;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TimerQueue*(*)()>(&TimerQueue::sharedInstance))},
	{"startIfNeeded", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TimerQueue_InnerClassesInfo_[] = {
	{"javax.swing.TimerQueue$DelayedTimer", "javax.swing.TimerQueue", "DelayedTimer", $STATIC},
	{}
};

$ClassInfo _TimerQueue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TimerQueue",
	"java.lang.Object",
	"java.lang.Runnable",
	_TimerQueue_FieldInfo_,
	_TimerQueue_MethodInfo_,
	nullptr,
	nullptr,
	_TimerQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.TimerQueue$DelayedTimer"
};

$Object* allocate$TimerQueue($Class* clazz) {
	return $of($alloc(TimerQueue));
}

bool TimerQueue::$assertionsDisabled = false;
$Object* TimerQueue::sharedInstanceKey = nullptr;
$Object* TimerQueue::expiredTimersKey = nullptr;
$Object* TimerQueue::classLock = nullptr;

int64_t TimerQueue::NANO_ORIGIN = 0;

void TimerQueue::init$() {
	$set(this, queue, $new($DelayQueue));
	$set(this, runningLock, $new($ReentrantLock));
	startIfNeeded();
}

TimerQueue* TimerQueue::sharedInstance() {
	$init(TimerQueue);
	$synchronized(TimerQueue::classLock) {
		$var(TimerQueue, sharedInst, $cast(TimerQueue, $SwingUtilities::appContextGet(TimerQueue::sharedInstanceKey)));
		if (sharedInst == nullptr) {
			$assign(sharedInst, $new(TimerQueue));
			$SwingUtilities::appContextPut(TimerQueue::sharedInstanceKey, sharedInst);
		}
		return sharedInst;
	}
}

void TimerQueue::startIfNeeded() {
	$beforeCallerSensitive();
	if (!this->running) {
		$nc(this->runningLock)->lock();
		if (this->running) {
			return;
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($ThreadGroup, threadGroup, $nc($($AppContext::getAppContext()))->getThreadGroup());
				$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(TimerQueue$$Lambda$lambda$startIfNeeded$0, this, threadGroup)));
				this->running = true;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(this->runningLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void TimerQueue::addTimer($Timer* timer, int64_t delayMillis) {
	$nc($($nc(timer)->getLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!containsTimer(timer)) {
				$init($TimeUnit);
				int64_t var$1 = $TimeUnit::MILLISECONDS->toNanos(delayMillis);
				addTimer($$new($TimerQueue$DelayedTimer, timer, var$1 + now()));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc($(timer->getLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TimerQueue::addTimer($TimerQueue$DelayedTimer* delayedTimer) {
	if (!TimerQueue::$assertionsDisabled && !(delayedTimer != nullptr && !containsTimer($(delayedTimer->getTimer())))) {
		$throwNew($AssertionError);
	}
	$var($Timer, timer, $nc(delayedTimer)->getTimer());
	$nc($($nc(timer)->getLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(timer, delayedTimer, delayedTimer);
			$nc(this->queue)->add(static_cast<$Delayed*>(delayedTimer));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc($(timer->getLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TimerQueue::removeTimer($Timer* timer) {
	$nc($($nc(timer)->getLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (timer->delayedTimer != nullptr) {
				$nc(this->queue)->remove(timer->delayedTimer);
				$set(timer, delayedTimer, nullptr);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc($(timer->getLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool TimerQueue::containsTimer($Timer* timer) {
	$nc($($nc(timer)->getLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = timer->delayedTimer != nullptr;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc($(timer->getLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void TimerQueue::run() {
	$nc(this->runningLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				while (this->running) {
					try {
						$var($TimerQueue$DelayedTimer, runningTimer, $cast($TimerQueue$DelayedTimer, $cast($Delayed, $nc(this->queue)->take())));
						$var($Timer, timer, $nc(runningTimer)->getTimer());
						$nc($($nc(timer)->getLock()))->lock();
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									$var($TimerQueue$DelayedTimer, delayedTimer, timer->delayedTimer);
									if (delayedTimer == runningTimer) {
										timer->post();
										$set(timer, delayedTimer, nullptr);
										if (timer->isRepeats()) {
											int64_t var$2 = now();
											$init($TimeUnit);
											$nc(delayedTimer)->setTime(var$2 + $TimeUnit::MILLISECONDS->toNanos(timer->getDelay()));
											addTimer(delayedTimer);
										}
									}
									$nc($($nc($(timer->getLock()))->newCondition()))->awaitNanos(1);
								} catch ($SecurityException&) {
									$catch();
								}
							} catch ($Throwable&) {
								$assign(var$1, $catch());
							} /*finally*/ {
								$nc($(timer->getLock()))->unlock();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($InterruptedException&) {
						$var($InterruptedException, ie, $catch());
						if ($nc($($AppContext::getAppContext()))->isDisposed()) {
							break;
						}
					}
				}
			} catch ($ThreadDeath&) {
				$var($ThreadDeath, td, $catch());
				{
					$var($Iterator, i$, $nc(this->queue)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($TimerQueue$DelayedTimer, delayedTimer, $cast($TimerQueue$DelayedTimer, i$->next()));
						{
							$nc($($nc(delayedTimer)->getTimer()))->cancelEvent();
						}
					}
				}
				$throw(td);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->running = false;
			$nc(this->runningLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* TimerQueue::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("TimerQueue ("_s);
	bool isFirst = true;
	{
		$var($Iterator, i$, $nc(this->queue)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TimerQueue$DelayedTimer, delayedTimer, $cast($TimerQueue$DelayedTimer, i$->next()));
			{
				if (!isFirst) {
					buf->append(", "_s);
				}
				buf->append($($nc($of($($nc(delayedTimer)->getTimer())))->toString()));
				isFirst = false;
			}
		}
	}
	buf->append(")"_s);
	return buf->toString();
}

int64_t TimerQueue::now() {
	$init(TimerQueue);
	return $System::nanoTime() - TimerQueue::NANO_ORIGIN;
}

$Object* TimerQueue::lambda$startIfNeeded$0($ThreadGroup* threadGroup) {
	$var($String, name, "TimerQueue"_s);
	$var($Thread, timerThread, $new($Thread, threadGroup, this, name, 0, false));
	timerThread->setDaemon(true);
	timerThread->setPriority($Thread::NORM_PRIORITY);
	timerThread->start();
	return $of(nullptr);
}

void clinit$TimerQueue($Class* class$) {
	TimerQueue::$assertionsDisabled = !TimerQueue::class$->desiredAssertionStatus();
	$assignStatic(TimerQueue::sharedInstanceKey, $new($StringBuffer, "TimerQueue.sharedInstanceKey"_s));
	$assignStatic(TimerQueue::expiredTimersKey, $new($StringBuffer, "TimerQueue.expiredTimersKey"_s));
	$assignStatic(TimerQueue::classLock, $new($Object));
	TimerQueue::NANO_ORIGIN = $System::nanoTime();
}

TimerQueue::TimerQueue() {
}

$Class* TimerQueue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TimerQueue$$Lambda$lambda$startIfNeeded$0::classInfo$.name)) {
			return TimerQueue$$Lambda$lambda$startIfNeeded$0::load$(name, initialize);
		}
	}
	$loadClass(TimerQueue, name, initialize, &_TimerQueue_ClassInfo_, clinit$TimerQueue, allocate$TimerQueue);
	return class$;
}

$Class* TimerQueue::class$ = nullptr;

	} // swing
} // javax