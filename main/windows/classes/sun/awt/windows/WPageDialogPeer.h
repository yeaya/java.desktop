#ifndef _sun_awt_windows_WPageDialogPeer_h_
#define _sun_awt_windows_WPageDialogPeer_h_
//$ class sun.awt.windows.WPageDialogPeer
//$ extends sun.awt.windows.WPrintDialogPeer

#include <sun/awt/windows/WPrintDialogPeer.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WPageDialog;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WPageDialogPeer : public ::sun::awt::windows::WPrintDialogPeer {
	$class(WPageDialogPeer, $NO_CLASS_INIT, ::sun::awt::windows::WPrintDialogPeer)
public:
	WPageDialogPeer();
	using ::sun::awt::windows::WPrintDialogPeer::handleEvent;
	void init$(::sun::awt::windows::WPageDialog* target);
	bool _show();
	void lambda$show$0();
	using ::sun::awt::windows::WPrintDialogPeer::replaceSurfaceData;
	virtual void show() override;
	using ::sun::awt::windows::WPrintDialogPeer::updateWindow;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WPageDialogPeer_h_