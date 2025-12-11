#ifndef _com_apple_eawt__AppEventHandler$_AppEventMultiplexor_h_
#define _com_apple_eawt__AppEventHandler$_AppEventMultiplexor_h_
//$ class com.apple.eawt._AppEventHandler$_AppEventMultiplexor
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		class Map;
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

class _AppEventHandler$_AppEventMultiplexor : public ::java::lang::Object {
	$class(_AppEventHandler$_AppEventMultiplexor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	_AppEventHandler$_AppEventMultiplexor();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void addListener(Object$* listener);
	virtual void dispatch(::com::apple::eawt::_AppEventHandler$_NativeEvent* event, $ObjectArray* args);
	virtual void performOnListener(Object$* listener, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event) {}
	virtual void registerNativeListener();
	virtual void removeListener(Object$* listener);
	void setListenerContext(Object$* listener, ::sun::awt::AppContext* listenerContext);
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
	::java::util::Map* listenerToAppContext = nullptr;
	bool nativeListenerRegistered = false;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_AppEventMultiplexor_h_