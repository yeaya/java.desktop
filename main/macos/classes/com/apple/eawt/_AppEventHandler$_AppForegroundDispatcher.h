#ifndef _com_apple_eawt__AppEventHandler$_AppForegroundDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_AppForegroundDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_AppForegroundDispatcher
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
			class AppForegroundEvent;
			class AppForegroundListener;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_AppForegroundDispatcher : public ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor {
	$class(_AppEventHandler$_AppForegroundDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor)
public:
	_AppEventHandler$_AppForegroundDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual $Object* createEvent(bool isTrue) override;
	virtual void performFalseEventOn(::java::awt::desktop::AppForegroundListener* listener, ::java::awt::desktop::AppForegroundEvent* e);
	virtual void performFalseEventOn(Object$* listener, Object$* e) override;
	virtual void performTrueEventOn(::java::awt::desktop::AppForegroundListener* listener, ::java::awt::desktop::AppForegroundEvent* e);
	virtual void performTrueEventOn(Object$* listener, Object$* e) override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_AppForegroundDispatcher_h_