#ifndef _sun_awt_X11_XComponentPeer_h_
#define _sun_awt_X11_XComponentPeer_h_
//$ class sun.awt.X11.XComponentPeer
//$ extends sun.awt.X11.XWindow
//$ implements java.awt.peer.ComponentPeer,java.awt.dnd.peer.DropTargetPeer,sun.java2d.BackBufferCapsProvider

#include <java/awt/dnd/peer/DropTargetPeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Array.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/java2d/BackBufferCapsProvider.h>

#pragma push_macro("BACKGROUND_COLOR")
#undef BACKGROUND_COLOR
#pragma push_macro("FOREGROUND_COLOR")
#undef FOREGROUND_COLOR
#pragma push_macro("HIGHLIGHT_COLOR")
#undef HIGHLIGHT_COLOR
#pragma push_macro("SHADOW_COLOR")
#undef SHADOW_COLOR

namespace java {
	namespace awt {
		class AWTEvent;
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Color;
		class Component;
		class Container;
		class Cursor;
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class Insets;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTarget;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class FocusEvent$Cause;
			class InputMethodEvent;
			class KeyEvent;
			class MouseEvent;
			class MouseWheelEvent;
			class PaintEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class VolatileImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ContainerPeer;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class AwtGraphicsConfigData;
			class PropMwmHints;
			class XCreateWindowParams;
			class XEvent;
			class XWindowPeer;
		}
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
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XComponentPeer : public ::sun::awt::X11::XWindow, public ::java::awt::peer::ComponentPeer, public ::java::awt::dnd::peer::DropTargetPeer, public ::sun::java2d::BackBufferCapsProvider {
	$class(XComponentPeer, 0, ::sun::awt::X11::XWindow, ::java::awt::peer::ComponentPeer, ::java::awt::dnd::peer::DropTargetPeer, ::sun::java2d::BackBufferCapsProvider)
public:
	XComponentPeer();
	using ::sun::awt::X11::XWindow::getGraphics;
	using ::sun::awt::X11::XWindow::handleKeyPress;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::sun::awt::X11::XCreateWindowParams* params);
	void init$(::java::awt::Component* target, int64_t parentWindow, ::java::awt::Rectangle* bounds);
	void init$(::java::awt::Component* target);
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) override;
	void addTree(::java::util::Collection* order, ::java::util::Set* set, ::java::awt::Container* cont);
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout();
	virtual void beginValidate();
	virtual bool canDetermineObscurity() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual void doLayout(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void draw3DOval(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, int32_t x, int32_t y, int32_t w, int32_t h, bool raised);
	virtual void draw3DOval(::java::awt::Graphics* g, ::java::awt::Color* bg, int32_t x, int32_t y, int32_t w, int32_t h, bool raised);
	virtual void draw3DRect(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, int32_t x, int32_t y, int32_t width, int32_t height, bool raised);
	virtual void draw3DRect(::java::awt::Graphics* g, ::java::awt::Color* bg, int32_t x, int32_t y, int32_t width, int32_t height, bool raised);
	virtual void drawMotif3DRect(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, bool topShadow);
	virtual void drawScrollbar(::java::awt::Graphics* g, ::java::awt::Color* bg, int32_t thickness, int32_t length, int32_t min, int32_t max, int32_t val, int32_t vis, bool horizontal);
	virtual void endLayout();
	virtual void endValidate();
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e);
	virtual void focusLost(::java::awt::event::FocusEvent* e);
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::BufferCapabilities* getBackBufferCaps() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	virtual ::java::awt::Component* getEventSource() override;
	virtual ::java::awt::Font* getFont();
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual $Array<::java::awt::Color>* getGUIcolors();
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::sun::awt::X11::AwtGraphicsConfigData* getGraphicsConfigurationData() override;
	virtual ::java::awt::Insets* getInsets();
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::sun::awt::X11::PropMwmHints* getMWMHints() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::sun::awt::X11::XWindowPeer* getParentTopLevel();
	virtual ::java::awt::Color* getPeerBackground();
	virtual ::java::awt::Font* getPeerFont();
	virtual ::java::awt::Color* getPeerForeground();
	virtual ::java::awt::Dimension* getPeerSize();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	static $ints* getRGBvals(::java::awt::Color* c);
	virtual ::sun::java2d::SurfaceData* getSurfaceData() override;
	static $Array<::java::awt::Color>* getSystemColors();
	virtual $Object* getTarget() override;
	virtual ::java::awt::Rectangle* getTargetBounds() override;
	virtual ::java::awt::Color* getWinBackground() override;
	virtual void handleButtonPressRelease(::sun::awt::X11::XEvent* xev) override;
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual void handleExposeEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleF10JavaKeyEvent(::java::awt::event::KeyEvent* e);
	virtual void handleJavaFocusEvent(::java::awt::AWTEvent* e);
	virtual void handleJavaInputMethodEvent(::java::awt::event::InputMethodEvent* e);
	virtual void handleJavaKeyEvent(::java::awt::event::KeyEvent* e);
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* e);
	virtual void handleJavaMouseWheelEvent(::java::awt::event::MouseWheelEvent* e);
	virtual void handleJavaWindowFocusEvent(::java::awt::AWTEvent* e);
	virtual void handleKeyPress(::sun::awt::X11::XEvent* xev) override;
	virtual void handleKeyRelease(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMotionNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handleUnmapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleXCrossingEvent(::sun::awt::X11::XEvent* xev) override;
	virtual bool handlesWheelScrolling() override;
	bool hasFocus();
	virtual void hide();
	virtual bool isEmbedded() override;
	bool isEnabled();
	virtual bool isEventDisabled(::sun::awt::X11::XEvent* e) override;
	virtual bool isFocusable() override;
	virtual bool isInitialReshape();
	virtual bool isMouseAbove() override;
	virtual bool isObscured() override;
	virtual bool isPaintPending();
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void notifyTextComponentChange(bool add);
	static $String* operationToString(int32_t operation);
	void pSetCursor(::java::awt::Cursor* cursor);
	virtual void pSetCursor(::java::awt::Cursor* cursor, bool ignoreSubComponents);
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void popup(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void postEventToEventQueue(::java::awt::AWTEvent* event) override;
	using ::sun::awt::X11::XWindow::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void postKeyEvent(int32_t id, int32_t keyCode, int32_t keyChar, int32_t keyLocation, int32_t state, int64_t event, int32_t eventSize, int64_t rawCode, int32_t unicodeFromPrimaryKeysym, int32_t extendedKeyCode) override;
	virtual void postPaintEvent(::java::awt::Component* target, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::sun::awt::X11::XWindow::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void print(::java::awt::Graphics* g) override;
	bool rejectFocusRequestHelper($String* logMsg);
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void reshape(::java::awt::Rectangle* bounds) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setBoundsOperation(int32_t operation);
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setFullScreenExclusiveModeState(bool state) override;
	virtual void setMWMHints(::sun::awt::X11::PropMwmHints* hints) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateMotifColors(::java::awt::Color* bg);
	static ::java::awt::AWTEvent* wrapInSequenced(::java::awt::AWTEvent* event);
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* buffersLog;
	static ::sun::util::logging::PlatformLogger* focusLog;
	static ::sun::util::logging::PlatformLogger* fontLog;
	static ::sun::util::logging::PlatformLogger* enableLog;
	static ::sun::util::logging::PlatformLogger* shapeLog;
	bool paintPending = false;
	bool isLayouting = false;
	bool enabled = false;
	int32_t boundsOperation = 0;
	::java::awt::Color* foreground = nullptr;
	::java::awt::Color* background = nullptr;
	::java::awt::Color* darkShadow = nullptr;
	::java::awt::Color* lightShadow = nullptr;
	::java::awt::Color* selectColor = nullptr;
	::java::awt::Font* font = nullptr;
	int64_t backBuffer = 0;
	::java::awt::image::VolatileImage* xBackBuffer = nullptr;
	static $Array<::java::awt::Color>* systemColors;
	bool bHasFocus = false;
	static const int32_t BACKGROUND_COLOR = 0;
	static const int32_t HIGHLIGHT_COLOR = 1;
	static const int32_t SHADOW_COLOR = 2;
	static const int32_t FOREGROUND_COLOR = 3;
	::java::awt::BufferCapabilities* backBufferCaps = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("BACKGROUND_COLOR")
#pragma pop_macro("FOREGROUND_COLOR")
#pragma pop_macro("HIGHLIGHT_COLOR")
#pragma pop_macro("SHADOW_COLOR")

#endif // _sun_awt_X11_XComponentPeer_h_