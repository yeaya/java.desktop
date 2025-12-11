#ifndef _com_apple_eawt__AppEventHandler$1_h_
#define _com_apple_eawt__AppEventHandler$1_h_
//$ class com.apple.eawt._AppEventHandler$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace eawt {
			class _AppEventHandler;
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$1 : public ::java::lang::Runnable {
	$class(_AppEventHandler$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	_AppEventHandler$1();
	void init$(::com::apple::eawt::_AppEventHandler* this$0);
	virtual void run() override;
	::com::apple::eawt::_AppEventHandler* this$0 = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$1_h_