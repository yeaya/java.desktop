#ifndef _sun_lwawt_macosx_CPlatformEmbeddedFrame_h_
#define _sun_lwawt_macosx_CPlatformEmbeddedFrame_h_
//$ class sun.lwawt.macosx.CPlatformEmbeddedFrame
//$ extends sun.lwawt.PlatformWindow

#include <sun/lwawt/PlatformWindow.h>

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
		namespace macosx {
			class CEmbeddedFrame;
			class CFLayer;
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
	namespace lwawt {
		namespace macosx {

class CPlatformEmbeddedFrame : public ::sun::lwawt::PlatformWindow {
	$class(CPlatformEmbeddedFrame, 0, ::sun::lwawt::PlatformWindow)
public:
	CPlatformEmbeddedFrame();
	void init$();
	virtual void dispose() override;
	virtual void enterFullScreenMode() override;
	virtual void exitFullScreenMode() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::GraphicsDevice* getGraphicsDevice() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual int64_t getLayerPtr() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::sun::lwawt::LWWindowPeer* getPeer() override;
	virtual ::sun::java2d::SurfaceData* getScreenSurface() override;
	virtual void initialize(::java::awt::Window* target, ::sun::lwawt::LWWindowPeer* peer, ::sun::lwawt::PlatformWindow* owner) override;
	virtual bool isActive() override;
	virtual bool isFullScreenMode() override;
	virtual bool isUnderMouse() override;
	virtual bool rejectFocusRequest(::java::awt::event::FocusEvent$Cause* cause) override;
	virtual ::sun::java2d::SurfaceData* replaceSurfaceData() override;
	virtual bool requestWindowFocus() override;
	virtual void setAlwaysOnTop(bool value) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	virtual void setModalBlocked(bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setSizeConstraints(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) override;
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool visible) override;
	virtual void setWindowState(int32_t windowState) override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual void updateFocusableWindowState() override;
	virtual void updateIconImages() override;
	static ::sun::util::logging::PlatformLogger* focusLogger;
	::sun::lwawt::macosx::CFLayer* windowLayer = nullptr;
	::sun::lwawt::LWWindowPeer* peer = nullptr;
	::sun::lwawt::macosx::CEmbeddedFrame* target = nullptr;
	$volatile(int32_t) screenX = 0;
	$volatile(int32_t) screenY = 0;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformEmbeddedFrame_h_