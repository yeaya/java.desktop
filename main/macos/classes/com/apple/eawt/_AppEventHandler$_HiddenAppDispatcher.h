#ifndef _com_apple_eawt__AppEventHandler$_HiddenAppDispatcher_h_
#define _com_apple_eawt__AppEventHandler$_HiddenAppDispatcher_h_
//$ class com.apple.eawt._AppEventHandler$_HiddenAppDispatcher
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
			class AppHiddenEvent;
			class AppHiddenListener;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_HiddenAppDispatcher : public ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor {
	$class(_AppEventHandler$_HiddenAppDispatcher, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor)
public:
	_AppEventHandler$_HiddenAppDispatcher();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual $Object* createEvent(bool isTrue) override;
	virtual void performFalseEventOn(::java::awt::desktop::AppHiddenListener* listener, ::java::awt::desktop::AppHiddenEvent* e);
	virtual void performFalseEventOn(Object$* listener, Object$* e) override;
	virtual void performTrueEventOn(::java::awt::desktop::AppHiddenListener* listener, ::java::awt::desktop::AppHiddenEvent* e);
	virtual void performTrueEventOn(Object$* listener, Object$* e) override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_HiddenAppDispatcher_h_