#ifndef _com_apple_eawt__AppEventHandler$_ScreenSleepDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_ScreenSleepDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_ScreenSleepDispatcher
//$ extends com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor

#include <com/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor.h>

namespace com {
	namespace apple {
		namespace eawt {
			class _AppEventHandler;
		}
	}
}
namespace java {
	namespace awt {
		namespace desktop {
			class ScreenSleepEvent;
			class ScreenSleepListener;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_ScreenSleepDispatcher : public ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor {
	$class(_AppEventHandler$_ScreenSleepDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor)
public:
	_AppEventHandler$_ScreenSleepDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual $Object* createEvent(bool isTrue) override;
	virtual void performFalseEventOn(::java::awt::desktop::ScreenSleepListener* listener, ::java::awt::desktop::ScreenSleepEvent* e);
	virtual void performFalseEventOn(Object$* listener, Object$* e) override;
	virtual void performTrueEventOn(::java::awt::desktop::ScreenSleepListener* listener, ::java::awt::desktop::ScreenSleepEvent* e);
	virtual void performTrueEventOn(Object$* listener, Object$* e) override;
	virtual void registerNativeListener() override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_ScreenSleepDispatcher_h_