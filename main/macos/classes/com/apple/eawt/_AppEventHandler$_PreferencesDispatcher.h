#ifndef _com_apple_eawt__AppEventHandler$_PreferencesDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_PreferencesDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_PreferencesDispatcher
//$ extends com.apple.eawt._AppEventHandler$_AppEventDispatcher

#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher.h>

namespace com {
	namespace apple {
		namespace eawt {
			class _AppEventHandler;
			class _AppEventHandler$_NativeEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace desktop {
			class PreferencesHandler;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_PreferencesDispatcher : public ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher {
	$class(_AppEventHandler$_PreferencesDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher)
public:
	_AppEventHandler$_PreferencesDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void performUsing(::java::awt::desktop::PreferencesHandler* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event);
	virtual void performUsing(Object$* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	virtual void setHandler(::java::awt::desktop::PreferencesHandler* handler);
	virtual void setHandler(Object$* handler) override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_PreferencesDispatcher_h_