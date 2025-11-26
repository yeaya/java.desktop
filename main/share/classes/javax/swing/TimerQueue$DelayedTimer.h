#ifndef _javax_swing_TimerQueue$DelayedTimer_h_
#define _javax_swing_TimerQueue$DelayedTimer_h_
//$ class javax.swing.TimerQueue$DelayedTimer
//$ extends java.util.concurrent.Delayed

#include <java/util/concurrent/Delayed.h>

namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class Timer;
	}
}

namespace javax {
	namespace swing {

class TimerQueue$DelayedTimer : public ::java::util::concurrent::Delayed {
	$class(TimerQueue$DelayedTimer, 0, ::java::util::concurrent::Delayed)
public:
	TimerQueue$DelayedTimer();
	void init$(::javax::swing::Timer* timer, int64_t nanos);
	virtual int32_t compareTo(::java::util::concurrent::Delayed* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual int64_t getDelay(::java::util::concurrent::TimeUnit* unit) override;
	::javax::swing::Timer* getTimer();
	void setTime(int64_t nanos);
	static ::java::util::concurrent::atomic::AtomicLong* sequencer;
	int64_t sequenceNumber = 0;
	$volatile(int64_t) time = 0;
	::javax::swing::Timer* timer = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_TimerQueue$DelayedTimer_h_