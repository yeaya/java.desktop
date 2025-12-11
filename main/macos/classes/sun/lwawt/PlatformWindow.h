#ifndef _sun_lwawt_PlatformWindow_h_
#define _sun_lwawt_PlatformWindow_h_
//$ interface sun.lwawt.PlatformWindow
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Font;
		class FontMetrics;
		class GraphicsDevice;
		class Insets;
		class MenuBar;
		class Point;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}

namespace sun {
	namespace lwawt {

class PlatformWindow : public ::java::lang::Object {
	$interface(PlatformWindow, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose() {}
	virtual void enterFullScreenMode() {}
	virtual void exitFullScreenMode() {}
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) {return nullptr;}
	virtual ::java::awt::GraphicsDevice* getGraphicsDevice() {return nullptr;}
	virtual ::java::awt::Insets* getInsets() {return nullptr;}
	virtual int64_t getLayerPtr() {return 0;}
	virtual ::java::awt::Point* getLocationOnScreen() {return nullptr;}
	virtual ::sun::lwawt::LWWindowPeer* getPeer() {return nullptr;}
	virtual ::sun::java2d::SurfaceData* getScreenSurface() {return nullptr;}
	virtual void initialize(::java::awt::Window* target, ::sun::lwawt::LWWindowPeer* peer, ::sun::lwawt::PlatformWindow* owner) {}
	virtual bool isActive() {return false;}
	virtual bool isFullScreenMode() {return false;}
	virtual bool isUnderMouse() {return false;}
	virtual bool rejectFocusRequest(::java::awt::event::FocusEvent$Cause* cause) {return false;}
	virtual ::sun::java2d::SurfaceData* replaceSurfaceData() {return nullptr;}
	virtual bool requestWindowFocus() {return false;}
	virtual void setAlwaysOnTop(bool value) {}
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {}
	virtual void setMaximizedBounds(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setMenuBar(::java::awt::MenuBar* mb) {}
	virtual void setModalBlocked(bool blocked) {}
	virtual void setOpacity(float opacity) {}
	virtual void setOpaque(bool isOpaque) {}
	virtual void setResizable(bool resizable) {}
	virtual void setSizeConstraints(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) {}
	virtual void setTitle($String* title) {}
	virtual void setVisible(bool visible) {}
	virtual void setWindowState(int32_t windowState) {}
	virtual void toBack() {}
	virtual void toFront() {}
	virtual void updateFocusableWindowState() {}
	virtual void updateIconImages() {}
};

	} // lwawt
} // sun

#endif // _sun_lwawt_PlatformWindow_h_