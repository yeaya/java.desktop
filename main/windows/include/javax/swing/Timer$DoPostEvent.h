#ifndef _javax_swing_Timer$DoPostEvent_h_
#define _javax_swing_Timer$DoPostEvent_h_
//$ class javax.swing.Timer$DoPostEvent
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class Timer;
	}
}

namespace javax {
	namespace swing {

class $import Timer$DoPostEvent : public ::java::lang::Runnable {
	$class(Timer$DoPostEvent, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Timer$DoPostEvent();
	void init$(::javax::swing::Timer* this$0);
	virtual ::javax::swing::Timer* getTimer();
	virtual void run() override;
	::javax::swing::Timer* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Timer$DoPostEvent_h_