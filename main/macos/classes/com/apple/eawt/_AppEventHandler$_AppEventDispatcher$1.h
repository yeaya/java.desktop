#ifndef _com_apple_eawt__AppEventHandler$_AppEventDispatcher$1_h_
#define _com_apple_eawt__AppEventHandler$_AppEventDispatcher$1_h_
//$ class com.apple.eawt._AppEventHandler$_AppEventDispatcher$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace eawt {
			class _AppEventHandler$_AppEventDispatcher;
			class _AppEventHandler$_NativeEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_AppEventDispatcher$1 : public ::java::lang::Runnable {
	$class(_AppEventHandler$_AppEventDispatcher$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	_AppEventHandler$_AppEventDispatcher$1();
	void init$(::com::apple::eawt::_AppEventHandler$_AppEventDispatcher* this$1, Object$* val$localHandler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* val$event);
	virtual void run() override;
	::com::apple::eawt::_AppEventHandler$_AppEventDispatcher* this$1 = nullptr;
	::com::apple::eawt::_AppEventHandler$_NativeEvent* val$event = nullptr;
	$Object* val$localHandler = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_AppEventDispatcher$1_h_