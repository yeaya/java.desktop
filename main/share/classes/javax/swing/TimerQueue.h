#ifndef _javax_swing_TimerQueue_h_
#define _javax_swing_TimerQueue_h_
//$ class javax.swing.TimerQueue
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

#pragma push_macro("NANO_ORIGIN")
#undef NANO_ORIGIN

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class DelayQueue;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class Timer;
		class TimerQueue$DelayedTimer;
	}
}

namespace javax {
	namespace swing {

class TimerQueue : public ::java::lang::Runnable {
	$class(TimerQueue, 0, ::java::lang::Runnable)
public:
	TimerQueue();
	void init$();
	virtual void addTimer(::javax::swing::Timer* timer, int64_t delayMillis);
	void addTimer(::javax::swing::TimerQueue$DelayedTimer* delayedTimer);
	virtual bool containsTimer(::javax::swing::Timer* timer);
	$Object* lambda$startIfNeeded$0(::java::lang::ThreadGroup* threadGroup);
	static int64_t now();
	virtual void removeTimer(::javax::swing::Timer* timer);
	virtual void run() override;
	static ::javax::swing::TimerQueue* sharedInstance();
	virtual void startIfNeeded();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static $Object* sharedInstanceKey;
	static $Object* expiredTimersKey;
	::java::util::concurrent::DelayQueue* queue = nullptr;
	$volatile(bool) running = false;
	::java::util::concurrent::locks::Lock* runningLock = nullptr;
	static $Object* classLock;
	static int64_t NANO_ORIGIN;
};

	} // swing
} // javax

#pragma pop_macro("NANO_ORIGIN")

#endif // _javax_swing_TimerQueue_h_