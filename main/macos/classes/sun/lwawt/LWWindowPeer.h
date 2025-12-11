#ifndef _sun_lwawt_LWWindowPeer_h_
#define _sun_lwawt_LWWindowPeer_h_
//$ class sun.lwawt.LWWindowPeer
//$ extends sun.lwawt.LWContainerPeer
//$ implements java.awt.peer.FramePeer,java.awt.peer.DialogPeer,sun.awt.FullScreenCapable,sun.awt.DisplayChangedListener,sun.lwawt.PlatformEventNotifier

#include <java/awt/peer/DialogPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/lang/Array.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/FullScreenCapable.h>
#include <sun/lwawt/LWContainerPeer.h>
#include <sun/lwawt/PlatformEventNotifier.h>

#pragma push_macro("DEFAULT_FONT")
#undef DEFAULT_FONT
#pragma push_macro("MINIMUM_HEIGHT")
#undef MINIMUM_HEIGHT
#pragma push_macro("MINIMUM_WIDTH")
#undef MINIMUM_WIDTH

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dialog;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class GraphicsDevice;
		class Insets;
		class MenuBar;
		class Point;
		class Rectangle;
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
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWComponentPeer;
		class LWWindowPeer$PeerType;
		class PlatformComponent;
		class PlatformWindow;
		class SecurityWarningWindow;
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

class LWWindowPeer : public ::sun::lwawt::LWContainerPeer, public ::java::awt::peer::FramePeer, public ::java::awt::peer::DialogPeer, public ::sun::awt::FullScreenCapable, public ::sun::awt::DisplayChangedListener, public ::sun::lwawt::PlatformEventNotifier {
	$class(LWWindowPeer, 0, ::sun::lwawt::LWContainerPeer, ::java::awt::peer::FramePeer, ::java::awt::peer::DialogPeer, ::sun::awt::FullScreenCapable, ::sun::awt::DisplayChangedListener, ::sun::lwawt::PlatformEventNotifier)
public:
	LWWindowPeer();
	using ::sun::lwawt::LWContainerPeer::getOnscreenGraphics;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout() override;
	virtual void beginValidate() override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t w, int32_t h) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual void endLayout() override;
	virtual void endValidate() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	void init$(::java::awt::Window* target, ::sun::lwawt::PlatformComponent* platformComponent, ::sun::lwawt::PlatformWindow* platformWindow, ::sun::lwawt::LWWindowPeer$PeerType* peerType);
	void activateDisplayListener();
	virtual void applyShapeImpl(::sun::java2d::pipe::Region* shape) override;
	void blitSurfaceData(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst);
	virtual void blockWindows(::java::util::List* windows) override;
	virtual void changeFocusedWindow(bool becomesFocused, ::java::awt::Window* opposite);
	void clearBackground(int32_t w, int32_t h);
	virtual ::java::awt::Rectangle* constrainBounds(::java::awt::Rectangle* bounds);
	virtual ::java::awt::Rectangle* constrainBounds(int32_t x, int32_t y, int32_t w, int32_t h);
	void deactivateDisplayListener();
	virtual void displayChanged() override;
	virtual void disposeImpl() override;
	virtual void emulateActivation(bool activate) override;
	virtual void enterFullScreenMode() override;
	virtual void exitFullScreenMode() override;
	virtual bool focusAllowedFor();
	void generateMouseEnterExitEventsForComponents(int64_t when, int32_t button, int32_t x, int32_t y, int32_t screenX, int32_t screenY, int32_t modifiers, int32_t clickCount, bool popupTrigger, ::sun::lwawt::LWComponentPeer* targetPeer);
	virtual ::sun::lwawt::LWWindowPeer* getBlocker();
	virtual ::java::awt::Rectangle* getBoundsPrivate() override;
	::java::awt::Rectangle* getDefaultMaximizedBounds();
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	static int32_t getGraphicsConfigScreen(::java::awt::GraphicsConfiguration* gc);
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual int64_t getLayerPtr();
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Rectangle* getMaximizedBounds();
	::java::awt::Graphics* getOnscreenGraphics(::java::awt::Color* fg, ::java::awt::Color* bg, ::java::awt::Font* f);
	static ::sun::lwawt::LWWindowPeer* getOwnerFrameDialog(::sun::lwawt::LWWindowPeer* peer);
	virtual ::sun::lwawt::LWWindowPeer$PeerType* getPeerType();
	static ::sun::lwawt::LWComponentPeer* getPeerUnderCursor();
	virtual ::sun::lwawt::PlatformWindow* getPlatformWindow() override;
	virtual int32_t getState() override;
	virtual ::sun::java2d::SurfaceData* getSurfaceData();
	virtual ::sun::lwawt::LWWindowPeer* getWindowPeerOrSelf() override;
	static ::sun::lwawt::LWWindowPeer* getWindowUnderCursor();
	virtual void grab();
	virtual void initializeImpl() override;
	bool isFocusableWindow();
	bool isGrabbing();
	bool isMaximizedBoundsSet();
	bool isOneOfOwnersOf(::sun::lwawt::LWWindowPeer* peer);
	virtual bool isSimpleWindow();
	bool isTextured();
	virtual bool isTranslucent() override;
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
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paletteChanged() override;
	void postMouseEnteredEvent(::java::awt::Component* target, int64_t when, int32_t modifiers, ::java::awt::Point* loc, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t button);
	void postMouseExitedEvent(::java::awt::Component* target, int64_t when, int32_t modifiers, ::java::awt::Point* loc, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t button);
	void postWindowStateChangedEvent(int32_t newWindowState);
	using ::sun::lwawt::LWContainerPeer::repaintPeer;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	void replaceSurfaceData();
	void replaceSurfaceData(bool blit);
	virtual void repositionSecurityWarning() override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual bool requestWindowFocus(::java::awt::event::FocusEvent$Cause* cause);
	virtual void setBackground(::java::awt::Color* c) override;
	using ::sun::lwawt::LWContainerPeer::setBounds;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setEnabled(bool e) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	bool setGraphicsConfig(::java::awt::GraphicsConfiguration* gc);
	virtual void setMaximizedBounds(::java::awt::Rectangle* bounds) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	virtual void setModalBlocked(::java::awt::Dialog* blocker, bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	void setPlatformMaximizedBounds(::java::awt::Rectangle* bounds);
	virtual void setResizable(bool resizable) override;
	virtual void setState(int32_t state) override;
	void setTextured(bool isTextured);
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool v) override;
	virtual void setVisibleImpl(bool visible) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	void ungrab(bool doPost);
	virtual void ungrab();
	virtual void updateAlwaysOnTopState() override;
	virtual void updateCursorImmediately() override;
	virtual void updateFocusableWindowState() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual bool updateGraphicsDevice();
	virtual void updateIconImages() override;
	bool updateInsets(::java::awt::Insets* newInsets);
	virtual void updateMinimumSize() override;
	void updateOpaque();
	virtual void updateSecurityWarningVisibility();
	virtual void updateWindow() override;
	static ::sun::util::logging::PlatformLogger* focusLog;
	::sun::lwawt::PlatformWindow* platformWindow = nullptr;
	static const int32_t MINIMUM_WIDTH = 1;
	static const int32_t MINIMUM_HEIGHT = 1;
	::java::awt::Insets* insets = nullptr;
	::java::awt::Rectangle* maximizedBounds = nullptr;
	::java::awt::GraphicsDevice* graphicsDevice = nullptr;
	::java::awt::GraphicsConfiguration* graphicsConfig = nullptr;
	::sun::java2d::SurfaceData* surfaceData = nullptr;
	$Object* surfaceDataLock = nullptr;
	$volatile(int32_t) windowState = 0;
	$volatile(bool) isMouseOver = false;
	static $volatile(::sun::lwawt::LWComponentPeer*) lastCommonMouseEventPeer;
	$volatile(::sun::lwawt::LWComponentPeer*) lastMouseEventPeer = nullptr;
	static $Array<::sun::lwawt::LWComponentPeer>* mouseDownTarget;
	static int32_t mouseClickButtons;
	$volatile(bool) isOpaque = false;
	static ::java::awt::Font* DEFAULT_FONT;
	static ::sun::lwawt::LWWindowPeer* grabbingWindow;
	$volatile(bool) skipNextFocusChange = false;
	static ::java::awt::Color* nonOpaqueBackground;
	$volatile(bool) textured = false;
	::sun::lwawt::LWWindowPeer$PeerType* peerType = nullptr;
	::sun::lwawt::SecurityWarningWindow* warningWindow = nullptr;
	$volatile(bool) targetFocusable = false;
	::sun::lwawt::LWWindowPeer* blocker = nullptr;
};

	} // lwawt
} // sun

#pragma pop_macro("DEFAULT_FONT")
#pragma pop_macro("MINIMUM_HEIGHT")
#pragma pop_macro("MINIMUM_WIDTH")

#endif // _sun_lwawt_LWWindowPeer_h_