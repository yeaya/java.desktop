#ifndef _com_apple_eawt_MacQuitResponse_h_
#define _com_apple_eawt_MacQuitResponse_h_
//$ class com.apple.eawt.MacQuitResponse
//$ extends java.awt.desktop.QuitResponse

#include <java/awt/desktop/QuitResponse.h>

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

class MacQuitResponse : public ::java::awt::desktop::QuitResponse {
	$class(MacQuitResponse, $NO_CLASS_INIT, ::java::awt::desktop::QuitResponse)
public:
	MacQuitResponse();
	void init$(::com::apple::eawt::_AppEventHandler* appEventHandler);
	virtual void cancelQuit() override;
	virtual void performQuit() override;
	::com::apple::eawt::_AppEventHandler* appEventHandler = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_MacQuitResponse_h_