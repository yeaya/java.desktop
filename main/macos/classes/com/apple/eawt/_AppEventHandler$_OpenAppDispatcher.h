#ifndef _com_apple_eawt__AppEventHandler$_OpenAppDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_OpenAppDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_OpenAppDispatcher
//$ extends com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher

#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>

namespace com {
	namespace apple {
		namespace eawt {
			class _AppEventHandler;
			class _AppEventHandler$_NativeEvent;
			class _OpenAppHandler;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_OpenAppDispatcher : public ::com::apple::eawt::_AppEventHandler$_QueuingAppEventDispatcher {
	$class(_AppEventHandler$_OpenAppDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_QueuingAppEventDispatcher)
public:
	_AppEventHandler$_OpenAppDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void performUsing(::com::apple::eawt::_OpenAppHandler* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event);
	virtual void performUsing(Object$* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_OpenAppDispatcher_h_