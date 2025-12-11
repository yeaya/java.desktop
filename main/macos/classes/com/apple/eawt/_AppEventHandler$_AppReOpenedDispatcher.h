#ifndef _com_apple_eawt__AppEventHandler$_AppReOpenedDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_AppReOpenedDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_AppReOpenedDispatcher
//$ extends com.apple.eawt._AppEventHandler$_AppEventMultiplexor

#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor.h>

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
			class AppReopenedListener;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_AppReOpenedDispatcher : public ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor {
	$class(_AppEventHandler$_AppReOpenedDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor)
public:
	_AppEventHandler$_AppReOpenedDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void performOnListener(::java::awt::desktop::AppReopenedListener* listener, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event);
	virtual void performOnListener(Object$* listener, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_AppReOpenedDispatcher_h_