#ifndef _com_apple_eawt__AppEventHandler$_QueuingAppEventDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_QueuingAppEventDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher
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
	namespace util {
		class List;
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_QueuingAppEventDispatcher : public ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher {
	$class(_AppEventHandler$_QueuingAppEventDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher)
public:
	_AppEventHandler$_QueuingAppEventDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void dispatch(::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	virtual void setHandler(Object$* handler) override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
	::java::util::List* queuedEvents = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_QueuingAppEventDispatcher_h_