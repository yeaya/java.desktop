#ifndef _com_apple_eawt__AppEventHandler$_AboutDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_AboutDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_AboutDispatcher
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
			class AboutHandler;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_AboutDispatcher : public ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher {
	$class(_AppEventHandler$_AboutDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher)
public:
	_AppEventHandler$_AboutDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void performDefaultAction(::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	virtual void performUsing(::java::awt::desktop::AboutHandler* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event);
	virtual void performUsing(Object$* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_AboutDispatcher_h_