#ifndef _com_apple_eawt__AppEventHandler$_PrintFileDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_PrintFileDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_PrintFileDispatcher
//$ extends com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher

#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>

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
			class PrintFilesHandler;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_PrintFileDispatcher : public ::com::apple::eawt::_AppEventHandler$_QueuingAppEventDispatcher {
	$class(_AppEventHandler$_PrintFileDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_QueuingAppEventDispatcher)
public:
	_AppEventHandler$_PrintFileDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void performUsing(::java::awt::desktop::PrintFilesHandler* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event);
	virtual void performUsing(Object$* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_PrintFileDispatcher_h_