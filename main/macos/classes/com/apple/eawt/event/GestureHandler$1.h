#ifndef _com_apple_eawt_event_GestureHandler$1_h_
#define _com_apple_eawt_event_GestureHandler$1_h_
//$ class com.apple.eawt.event.GestureHandler$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Window;
	}
}

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class GestureHandler$1 : public ::java::lang::Runnable {
	$class(GestureHandler$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GestureHandler$1();
	void init$(::java::awt::Window* val$window, double val$x, double val$y, int32_t val$type, double val$a, double val$b);
	virtual void run() override;
	double val$b = 0.0;
	double val$a = 0.0;
	int32_t val$type = 0;
	double val$y = 0.0;
	double val$x = 0.0;
	::java::awt::Window* val$window = nullptr;
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_GestureHandler$1_h_