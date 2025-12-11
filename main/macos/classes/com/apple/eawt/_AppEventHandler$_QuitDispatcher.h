#ifndef _com_apple_eawt__AppEventHandler$_QuitDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_QuitDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_QuitDispatcher
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
			class QuitHandler;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_QuitDispatcher : public ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher {
	$class(_AppEventHandler$_QuitDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher)
public:
	_AppEventHandler$_QuitDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void performDefaultAction(::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	virtual void performUsing(::java::awt::desktop::QuitHandler* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event);
	virtual void performUsing(Object$* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_QuitDispatcher_h_