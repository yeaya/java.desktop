#ifndef _com_apple_eawt__AppEventHandler$_SystemSleepDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_SystemSleepDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_SystemSleepDispatcher
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
			class SystemSleepEvent;
			class SystemSleepListener;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_SystemSleepDispatcher : public ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor {
	$class(_AppEventHandler$_SystemSleepDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor)
public:
	_AppEventHandler$_SystemSleepDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual $Object* createEvent(bool isTrue) override;
	virtual void performFalseEventOn(::java::awt::desktop::SystemSleepListener* listener, ::java::awt::desktop::SystemSleepEvent* e);
	virtual void performFalseEventOn(Object$* listener, Object$* e) override;
	virtual void performTrueEventOn(::java::awt::desktop::SystemSleepListener* listener, ::java::awt::desktop::SystemSleepEvent* e);
	virtual void performTrueEventOn(Object$* listener, Object$* e) override;
	virtual void registerNativeListener() override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_SystemSleepDispatcher_h_