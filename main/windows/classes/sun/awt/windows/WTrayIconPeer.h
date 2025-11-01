#ifndef _sun_awt_windows_WTrayIconPeer_h_
#define _sun_awt_windows_WTrayIconPeer_h_
//$ class sun.awt.windows.WTrayIconPeer
//$ extends sun.awt.windows.WObjectPeer
//$ implements java.awt.peer.TrayIconPeer

#include <java/awt/peer/TrayIconPeer.h>
#include <java/lang/Array.h>
#include <sun/awt/windows/WObjectPeer.h>

#pragma push_macro("TRAY_ICON_HEIGHT")
#undef TRAY_ICON_HEIGHT
#pragma push_macro("TRAY_ICON_MASK_SIZE")
#undef TRAY_ICON_MASK_SIZE
#pragma push_macro("TRAY_ICON_WIDTH")
#undef TRAY_ICON_WIDTH

namespace java {
	namespace awt {
		class AWTEvent;
		class Frame;
		class Image;
		class PopupMenu;
		class TrayIcon;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WTrayIconPeer$IconObserver;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WTrayIconPeer : public ::sun::awt::windows::WObjectPeer, public ::java::awt::peer::TrayIconPeer {
	$class(WTrayIconPeer, $NO_CLASS_INIT, ::sun::awt::windows::WObjectPeer, ::java::awt::peer::TrayIconPeer)
public:
	WTrayIconPeer();
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::TrayIcon* target);
	void _displayMessage($String* caption, $String* text, $String* messageType);
	void _dispose();
	void create();
	void createNativeImage(::java::awt::image::BufferedImage* bimage);
	virtual void displayMessage($String* caption, $String* text, $String* messageType) override;
	virtual void disposeImpl() override;
	void lambda$showPopupMenu$0(int32_t x, int32_t y);
	void postEvent(::java::awt::AWTEvent* event);
	void setNativeIcon($ints* rData, $bytes* andMask, int32_t nScanStride, int32_t width, int32_t height);
	virtual void setToolTip($String* tooltip) override;
	virtual void showPopupMenu(int32_t x, int32_t y) override;
	virtual $String* toString() override;
	virtual void updateImage() override;
	void updateNativeIcon(bool doUpdate);
	void updateNativeImage(::java::awt::Image* image);
	static const int32_t TRAY_ICON_WIDTH = 16;
	static const int32_t TRAY_ICON_HEIGHT = 16;
	static const int32_t TRAY_ICON_MASK_SIZE = 32; // (TRAY_ICON_WIDTH * TRAY_ICON_HEIGHT) / 8
	::sun::awt::windows::WTrayIconPeer$IconObserver* observer = nullptr;
	bool firstUpdate = false;
	::java::awt::Frame* popupParent = nullptr;
	::java::awt::PopupMenu* popup = nullptr;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("TRAY_ICON_HEIGHT")
#pragma pop_macro("TRAY_ICON_MASK_SIZE")
#pragma pop_macro("TRAY_ICON_WIDTH")

#endif // _sun_awt_windows_WTrayIconPeer_h_