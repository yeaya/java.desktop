#ifndef _sun_lwawt_macosx_CTrayIcon_h_
#define _sun_lwawt_macosx_CTrayIcon_h_
//$ class sun.lwawt.macosx.CTrayIcon
//$ extends sun.lwawt.macosx.CFRetainedResource
//$ implements java.awt.peer.TrayIconPeer

#include <java/awt/peer/TrayIconPeer.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>

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
		namespace geom {
			class Point2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPopupMenu;
			class CTrayIcon$IconObserver;
			class NSEvent;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CTrayIcon : public ::sun::lwawt::macosx::CFRetainedResource, public ::java::awt::peer::TrayIconPeer {
	$class(CTrayIcon, 0, ::sun::lwawt::macosx::CFRetainedResource, ::java::awt::peer::TrayIconPeer)
public:
	CTrayIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::TrayIcon* target);
	::sun::lwawt::macosx::CPopupMenu* checkAndCreatePopupPeer();
	int64_t createModel();
	virtual void displayMessage($String* caption, $String* text, $String* messageType) override;
	virtual void dispose() override;
	static ::javax::swing::Icon* getIconForMessageType($String* messageType);
	virtual int64_t getPopupMenuModel();
	void handleMouseEvent(::sun::lwawt::macosx::NSEvent* nsEvent);
	void lambda$displayMessage$1($String* caption, $String* text, int64_t imagePtr, int64_t ptr);
	void lambda$displayMessage$2($String* caption, $String* text, int64_t imagePtr);
	void lambda$displayMessage$3($String* caption, $String* text, int64_t ptr);
	void lambda$setToolTip$4($String* tooltip, int64_t ptr);
	static ::java::lang::Boolean* lambda$static$0();
	void lambda$updateNativeImage$5(int64_t imagePtr, bool imageAutoSize, int64_t ptr);
	void lambda$updateNativeImage$6(bool imageAutoSize, int64_t imagePtr);
	int64_t nativeCreate();
	::java::awt::geom::Point2D* nativeGetIconLocation(int64_t trayIconModel);
	void nativeSetToolTip(int64_t trayIconModel, $String* tooltip);
	void nativeShowNotification(int64_t trayIconModel, $String* caption, $String* text, int64_t nsimage);
	void postEvent(::java::awt::AWTEvent* event);
	static ::java::awt::image::BufferedImage* scaleIcon(::javax::swing::Icon* icon, double scaleFactor);
	void setNativeImage(int64_t model, int64_t nsimage, bool autosize, bool template$);
	virtual void setToolTip($String* tooltip) override;
	virtual void showPopupMenu(int32_t x, int32_t y) override;
	virtual $String* toString() override;
	virtual void updateImage() override;
	virtual void updateNativeImage(::java::awt::Image* image);
	::java::awt::TrayIcon* target = nullptr;
	::java::awt::PopupMenu* popup = nullptr;
	::java::awt::Frame* dummyFrame = nullptr;
	::sun::lwawt::macosx::CTrayIcon$IconObserver* observer = nullptr;
	static int32_t mouseClickButtons;
	static bool useTemplateImages;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CTrayIcon_h_