#ifndef _com_apple_eawt_FullScreenHandler$1_h_
#define _com_apple_eawt_FullScreenHandler$1_h_
//$ class com.apple.eawt.FullScreenHandler$1
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

class FullScreenHandler$1 : public ::java::lang::Runnable {
	$class(FullScreenHandler$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FullScreenHandler$1();
	void init$(::java::awt::Window* val$window, int32_t val$type);
	virtual void run() override;
	int32_t val$type = 0;
	::java::awt::Window* val$window = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_FullScreenHandler$1_h_