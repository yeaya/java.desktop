#ifndef _com_apple_eawt__AppEventHandler$_AppEventDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_AppEventDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_AppEventDispatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace eawt {
			class _AppEventHandler;
			class _AppEventHandler$_NativeEvent;
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_AppEventDispatcher : public ::java::lang::Object {
	$class(_AppEventHandler$_AppEventDispatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	_AppEventHandler$_AppEventDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void dispatch(::com::apple::eawt::_AppEventHandler$_NativeEvent* event);
	virtual void performDefaultAction(::com::apple::eawt::_AppEventHandler$_NativeEvent* event);
	virtual void performUsing(Object$* handler, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event) {}
	virtual void setHandler(Object$* handler);
	virtual void setHandlerContext(::sun::awt::AppContext* ctx);
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
	$Object* _handler = nullptr;
	::sun::awt::AppContext* handlerContext = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_AppEventDispatcher_h_