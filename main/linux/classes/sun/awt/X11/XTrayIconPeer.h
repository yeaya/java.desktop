#ifndef _sun_awt_X11_XTrayIconPeer_h_
#define _sun_awt_X11_XTrayIconPeer_h_
//$ class sun.awt.X11.XTrayIconPeer
//$ extends java.awt.peer.TrayIconPeer
//$ implements sun.awt.X11.InfoWindow$Balloon$LiveArguments,sun.awt.X11.InfoWindow$Tooltip$LiveArguments

#include <java/awt/peer/TrayIconPeer.h>
#include <sun/awt/X11/InfoWindow$Balloon$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>

#pragma push_macro("TRAY_ICON_HEIGHT")
#undef TRAY_ICON_HEIGHT
#pragma push_macro("TRAY_ICON_WIDTH")
#undef TRAY_ICON_WIDTH

namespace java {
	namespace awt {
		class Point;
		class PopupMenu;
		class Rectangle;
		class TrayIcon;
		class Window;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow$Balloon;
			class InfoWindow$Tooltip;
			class XEventDispatcher;
			class XTrayIconPeer$TrayIconCanvas;
			class XTrayIconPeer$TrayIconEventProxy;
			class XTrayIconPeer$XTrayIconEmbeddedFrame;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTrayIconPeer : public ::java::awt::peer::TrayIconPeer, public ::sun::awt::X11::InfoWindow$Balloon$LiveArguments, public ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments {
	$class(XTrayIconPeer, 0, ::java::awt::peer::TrayIconPeer, ::sun::awt::X11::InfoWindow$Balloon$LiveArguments, ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments)
public:
	XTrayIconPeer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::TrayIcon* target);
	virtual void addListeners();
	void addXED(int64_t window, ::sun::awt::X11::XEventDispatcher* xed, int64_t mask);
	virtual void displayMessage($String* caption, $String* text, $String* messageType) override;
	virtual void dispose() override;
	void disposeOnEDT();
	virtual $String* getActionCommand() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	::java::awt::Point* getLocationOnScreen();
	virtual $String* getTooltipString() override;
	virtual int64_t getWindow();
	virtual bool isDisposed() override;
	virtual void removeListeners();
	void removeXED(int64_t window, ::sun::awt::X11::XEventDispatcher* xed);
	virtual void setToolTip($String* tooltip) override;
	virtual void showPopupMenu(int32_t x, int32_t y) override;
	static void suppressWarningString(::java::awt::Window* w);
	virtual $String* toString() override;
	virtual void updateImage() override;
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* ctrLog;
	::java::awt::TrayIcon* target = nullptr;
	::sun::awt::X11::XTrayIconPeer$TrayIconEventProxy* eventProxy = nullptr;
	::sun::awt::X11::XTrayIconPeer$XTrayIconEmbeddedFrame* eframe = nullptr;
	::sun::awt::X11::XTrayIconPeer$TrayIconCanvas* canvas = nullptr;
	::sun::awt::X11::InfoWindow$Balloon* balloon = nullptr;
	::sun::awt::X11::InfoWindow$Tooltip* tooltip = nullptr;
	::java::awt::PopupMenu* popup = nullptr;
	$String* tooltipString = nullptr;
	bool isTrayIconDisplayed = false;
	int64_t eframeParentID = 0;
	::sun::awt::X11::XEventDispatcher* parentXED = nullptr;
	::sun::awt::X11::XEventDispatcher* eframeXED = nullptr;
	static ::sun::awt::X11::XEventDispatcher* dummyXED;
	$volatile(bool) isDisposed$ = false;
	bool isParentWindowLocated = false;
	int32_t old_x = 0;
	int32_t old_y = 0;
	int32_t ex_width = 0;
	int32_t ex_height = 0;
	static const int32_t TRAY_ICON_WIDTH = 24;
	static const int32_t TRAY_ICON_HEIGHT = 24;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("TRAY_ICON_HEIGHT")
#pragma pop_macro("TRAY_ICON_WIDTH")

#endif // _sun_awt_X11_XTrayIconPeer_h_