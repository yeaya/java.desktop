#ifndef _com_apple_eawt__AppEventHandler$_UserSessionDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_UserSessionDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_UserSessionDispatcher
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
			class UserSessionEvent;
			class UserSessionListener;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_UserSessionDispatcher : public ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor {
	$class(_AppEventHandler$_UserSessionDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor)
public:
	_AppEventHandler$_UserSessionDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual $Object* createEvent(bool isTrue) override;
	virtual void performFalseEventOn(::java::awt::desktop::UserSessionListener* listener, ::java::awt::desktop::UserSessionEvent* e);
	virtual void performFalseEventOn(Object$* listener, Object$* e) override;
	virtual void performTrueEventOn(::java::awt::desktop::UserSessionListener* listener, ::java::awt::desktop::UserSessionEvent* e);
	virtual void performTrueEventOn(Object$* listener, Object$* e) override;
	virtual void registerNativeListener() override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_UserSessionDispatcher_h_