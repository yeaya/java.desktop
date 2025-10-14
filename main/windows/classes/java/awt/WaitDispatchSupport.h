#ifndef _java_awt_WaitDispatchSupport_h_
#define _java_awt_WaitDispatchSupport_h_
//$ class java.awt.WaitDispatchSupport
//$ extends java.awt.SecondaryLoop

#include <java/awt/SecondaryLoop.h>

namespace java {
	namespace awt {
		class Conditional;
		class EventDispatchThread;
		class EventFilter;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class Timer;
		class TimerTask;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {

class WaitDispatchSupport : public ::java::awt::SecondaryLoop {
	$class(WaitDispatchSupport, 0, ::java::awt::SecondaryLoop)
public:
	WaitDispatchSupport();
	void init$(::java::awt::EventDispatchThread* dispatchThread);
	void init$(::java::awt::EventDispatchThread* dispatchThread, ::java::awt::Conditional* extCond);
	void init$(::java::awt::EventDispatchThread* dispatchThread, ::java::awt::Conditional* extCondition, ::java::awt::EventFilter* filter, int64_t interval);
	virtual bool enter() override;
	virtual bool exit() override;
	static $Object* getTreeLock();
	static void initializeTimer();
	void wakeupEDT();
	static ::sun::util::logging::PlatformLogger* log;
	::java::awt::EventDispatchThread* dispatchThread = nullptr;
	::java::awt::EventFilter* filter = nullptr;
	$volatile(::java::awt::Conditional*) extCondition = nullptr;
	$volatile(::java::awt::Conditional*) condition = nullptr;
	int64_t interval = 0;
	static ::java::util::Timer* timer;
	::java::util::TimerTask* timerTask = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* keepBlockingEDT = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* keepBlockingCT = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* afterExit = nullptr;
	::java::lang::Runnable* wakingRunnable = nullptr;
};

	} // awt
} // java

#endif // _java_awt_WaitDispatchSupport_h_