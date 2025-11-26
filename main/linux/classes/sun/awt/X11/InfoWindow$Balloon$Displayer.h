#ifndef _sun_awt_X11_InfoWindow$Balloon$Displayer_h_
#define _sun_awt_X11_InfoWindow$Balloon$Displayer_h_
//$ class sun.awt.X11.InfoWindow$Balloon$Displayer
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

#pragma push_macro("MAX_CONCURRENT_MSGS")
#undef MAX_CONCURRENT_MSGS

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ArrayBlockingQueue;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow$Balloon;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Balloon$Displayer : public ::java::lang::Runnable {
	$class(InfoWindow$Balloon$Displayer, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	InfoWindow$Balloon$Displayer();
	void init$(::sun::awt::X11::InfoWindow$Balloon* this$0);
	virtual void display($String* caption, $String* text, $String* messageType);
	virtual void run() override;
	::sun::awt::X11::InfoWindow$Balloon* this$0 = nullptr;
	static const int32_t MAX_CONCURRENT_MSGS = 10;
	::java::util::concurrent::ArrayBlockingQueue* messageQueue = nullptr;
	bool isDisplayed = false;
	$Thread* thread = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("MAX_CONCURRENT_MSGS")

#endif // _sun_awt_X11_InfoWindow$Balloon$Displayer_h_