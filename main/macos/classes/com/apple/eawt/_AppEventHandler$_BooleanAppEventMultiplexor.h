#ifndef _com_apple_eawt__AppEventHandler$_BooleanAppEventMultiplexor_h_
#define _com_apple_eawt__AppEventHandler$_BooleanAppEventMultiplexor_h_
//$ class com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor
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

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_BooleanAppEventMultiplexor : public ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor {
	$class(_AppEventHandler$_BooleanAppEventMultiplexor, $NO_CLASS_INIT, ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor)
public:
	_AppEventHandler$_BooleanAppEventMultiplexor();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual $Object* createEvent(bool isTrue) {return nullptr;}
	virtual void performFalseEventOn(Object$* listener, Object$* e) {}
	virtual void performOnListener(Object$* listener, ::com::apple::eawt::_AppEventHandler$_NativeEvent* event) override;
	virtual void performTrueEventOn(Object$* listener, Object$* e) {}
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_BooleanAppEventMultiplexor_h_