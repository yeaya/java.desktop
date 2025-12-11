#ifndef _sun_lwawt_macosx_CWarningWindow_h_
#define _sun_lwawt_macosx_CWarningWindow_h_
//$ class sun.lwawt.macosx.CWarningWindow
//$ extends sun.lwawt.macosx.CPlatformWindow
//$ implements sun.lwawt.SecurityWarningWindow,sun.lwawt.PlatformEventNotifier

#include <java/lang/Array.h>
#include <sun/lwawt/PlatformEventNotifier.h>
#include <sun/lwawt/SecurityWarningWindow.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>

#pragma push_macro("HIDING_DELAY")
#undef HIDING_DELAY
#pragma push_macro("SHOWING_DELAY")
#undef SHOWING_DELAY

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace sun {
	namespace awt {
		class IconInfo;
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPlatformResponder;
			class CPlatformView;
			class CWarningWindow$CancelableRunnable;
			class CWarningWindow$Lock;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CWarningWindow : public ::sun::lwawt::macosx::CPlatformWindow, public ::sun::lwawt::SecurityWarningWindow, public ::sun::lwawt::PlatformEventNotifier {
	$class(CWarningWindow, $NO_CLASS_INIT, ::sun::lwawt::macosx::CPlatformWindow, ::sun::lwawt::SecurityWarningWindow, ::sun::lwawt::PlatformEventNotifier)
public:
	CWarningWindow();
	virtual $Object* clone() override;
	virtual void enterFullScreenMode() override;
	virtual bool equals(Object$* arg0) override;
	virtual void exitFullScreenMode() override;
	virtual void finalize() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::GraphicsDevice* getGraphicsDevice() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual int64_t getLayerPtr() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::sun::lwawt::LWWindowPeer* getPeer() override;
	virtual ::sun::java2d::SurfaceData* getScreenSurface() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Window* _ownerWindow, ::sun::lwawt::LWWindowPeer* _ownerPeer);
	void cancelTasks();
	virtual ::sun::lwawt::macosx::CPlatformView* createContentView() override;
	virtual ::sun::lwawt::macosx::CPlatformResponder* createPlatformResponder() override;
	virtual void deliverMoveResizeEvent(int32_t x, int32_t y, int32_t width, int32_t height, bool byUser) override;
	virtual void dispose() override;
	::java::awt::Rectangle* getBounds();
	::java::awt::Graphics* getGraphics();
	int32_t getHeight();
	virtual int32_t getInitialStyleBits() override;
	static ::sun::awt::IconInfo* getSecurityIconInfo(int32_t size, int32_t num);
	::sun::awt::IconInfo* getSecurityIconInfo();
	int32_t getWidth();
	virtual void initialize(::java::awt::Window* _target, ::sun::lwawt::LWWindowPeer* _peer, ::sun::lwawt::PlatformWindow* _owner) override;
	virtual bool isActive() override;
	virtual bool isFullScreenMode() override;
	virtual bool isUnderMouse() override;
	virtual bool isVisible() override;
	static void lambda$setVisible$0(bool visible, int64_t ptr);
	static void lambda$setVisible$1(int64_t ownerPtr, int64_t ptr);
	void lambda$setVisible$2(int64_t ownerPtr);
	virtual void notifyActivation(bool activation, ::sun::lwawt::LWWindowPeer* opposite) override;
	virtual void notifyExpose(::java::awt::Rectangle* r) override;
	virtual void notifyIconify(bool iconify) override;
	virtual void notifyKeyEvent(int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, int32_t keyLocation) override;
	virtual void notifyMouseEvent(int32_t id, int64_t when, int32_t button, int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t clickCount, bool popupTrigger, $bytes* bdata) override;
	virtual void notifyMouseWheelEvent(int64_t when, int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation, double preciseWheelRotation, $bytes* bdata) override;
	virtual void notifyNCMouseDown() override;
	virtual void notifyReshape(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void notifyUpdateCursor() override;
	virtual void notifyZoom(bool isZoomed) override;
	virtual bool rejectFocusRequest(::java::awt::event::FocusEvent$Cause* cause) override;
	void repaint();
	void replaceSurface();
	virtual ::sun::java2d::SurfaceData* replaceSurfaceData() override;
	virtual void reposition(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual bool requestWindowFocus() override;
	virtual void setAlwaysOnTop(bool isAlwaysOnTop) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void setMaximizedBounds(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	virtual void setModalBlocked(bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setSizeConstraints(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) override;
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool visible, bool doSchedule) override;
	virtual void setVisible(bool visible) override;
	virtual void setWindowState(int32_t windowState) override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	virtual void updateFocusableWindowState() override;
	virtual void updateIconImages() override;
	void updateIconSize();
	::sun::lwawt::macosx::CWarningWindow$Lock* lock = nullptr;
	static const int32_t SHOWING_DELAY = 300;
	static const int32_t HIDING_DELAY = 2000;
	::java::awt::Rectangle* bounds = nullptr;
	::java::lang::ref::WeakReference* ownerPeer = nullptr;
	::java::awt::Window* ownerWindow = nullptr;
	$volatile(int32_t) currentIcon = 0;
	int32_t currentSize = 0;
	static $Array<::sun::awt::IconInfo, 2>* icons;
	::sun::lwawt::macosx::CWarningWindow$Lock* taskLock = nullptr;
	::sun::lwawt::macosx::CWarningWindow$CancelableRunnable* showHideTask = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("HIDING_DELAY")
#pragma pop_macro("SHOWING_DELAY")

#endif // _sun_lwawt_macosx_CWarningWindow_h_