#ifndef _com_apple_eawt__AppEventHandler$_AppEventMultiplexor$1_h_
#define _com_apple_eawt__AppEventHandler$_AppEventMultiplexor$1_h_
//$ class com.apple.eawt._AppEventHandler$_AppEventMultiplexor$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace eawt {
			class _AppEventHandler$_AppEventMultiplexor;
			class _AppEventHandler$_NativeEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_AppEventMultiplexor$1 : public ::java::lang::Runnable {
	$class(_AppEventHandler$_AppEventMultiplexor$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	_AppEventHandler$_AppEventMultiplexor$1();
	void init$(::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor* this$1, Object$* val$listener, ::com::apple::eawt::_AppEventHandler$_NativeEvent* val$event);
	virtual void run() override;
	::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor* this$1 = nullptr;
	::com::apple::eawt::_AppEventHandler$_NativeEvent* val$event = nullptr;
	$Object* val$listener = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_AppEventMultiplexor$1_h_