#ifndef _sun_awt_windows_WWindowPeer_h_
#define _sun_awt_windows_WWindowPeer_h_
//$ class sun.awt.windows.WWindowPeer
//$ extends sun.awt.windows.WPanelPeer
//$ implements java.awt.peer.WindowPeer,sun.awt.DisplayChangedListener

#include <java/awt/peer/WindowPeer.h>
#include <java/lang/Array.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/windows/WPanelPeer.h>

#pragma push_macro("ACTIVE_WINDOWS_KEY")
#undef ACTIVE_WINDOWS_KEY

namespace java {
	namespace awt {
		class AWTEvent;
		class Color;
		class Component;
		class Dialog;
		class Dimension;
		class Graphics;
		class GraphicsConfiguration;
		class Insets;
		class Window;
		class Window$Type;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
			class WindowListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class TranslucentWindowPainter;
			class WComponentPeer;
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
		namespace windows {

class WWindowPeer : public ::sun::awt::windows::WPanelPeer, public ::java::awt::peer::WindowPeer, public ::sun::awt::DisplayChangedListener {
	$class(WWindowPeer, 0, ::sun::awt::windows::WPanelPeer, ::java::awt::peer::WindowPeer, ::sun::awt::DisplayChangedListener)
public:
	WWindowPeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::windows::WPanelPeer::getColorModel;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout() override;
	virtual void beginValidate() override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual void endLayout() override;
	virtual void endValidate() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	void init$(::java::awt::Window* target);
	void _setResizable(bool resizable);
	void _setTitle($String* title);
	void _toFront();
	virtual void addWindowListener(::java::awt::event::WindowListener* l);
	virtual void create(::sun::awt::windows::WComponentPeer* parent) override;
	virtual void createAwtWindow(::sun::awt::windows::WComponentPeer* parent);
	virtual void displayChanged() override;
	virtual void disposeImpl() override;
	virtual void draggedToNewScreen();
	virtual bool focusAllowedFor();
	static $longs* getActiveWindowHandles(::java::awt::Component* target);
	virtual ::java::awt::GraphicsConfiguration* getAppropriateGraphicsConfiguration(::java::awt::GraphicsConfiguration* gc) override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::sun::awt::windows::WComponentPeer* getNativeParent() override;
	virtual ::java::awt::Dimension* getNativeWindowSize();
	virtual ::java::awt::Dimension* getScaledWindowSize();
	int32_t getScreenImOn();
	static int32_t getSysIconHeight();
	static int32_t getSysIconWidth();
	static int32_t getSysMinHeight();
	static int32_t getSysMinWidth();
	static int32_t getSysSmIconHeight();
	static int32_t getSysSmIconWidth();
	::java::awt::Graphics* getTranslucentGraphics();
	virtual void grab();
	bool hasWarningWindow();
	virtual void hide() override;
	static void initActiveWindowsTracking(::java::awt::Window* w);
	static void initIDs();
	virtual void initialize() override;
	virtual bool isModalBlocked();
	virtual bool isTargetUndecorated();
	virtual void modalDisable(::java::awt::Dialog* blocker, int64_t blockerHWnd);
	virtual void modalEnable(::java::awt::Dialog* blocker);
	void nativeGrab();
	void nativeUngrab();
	void notifyWindowStateChanged(int32_t oldState, int32_t newState);
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paletteChanged() override;
	virtual void preCreate(::sun::awt::windows::WComponentPeer* parent);
	virtual void preprocessPostEvent(::java::awt::AWTEvent* event) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void realShow();
	virtual void removeWindowListener(::java::awt::event::WindowListener* l);
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	void replaceSurfaceDataRecursively(::java::awt::Component* c);
	virtual void repositionSecurityWarning() override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual bool requestWindowFocus(::java::awt::event::FocusEvent$Cause* cause);
	bool requestWindowFocus(bool isMouseEventCause);
	virtual void reshapeFrame(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setAlwaysOnTop(bool value);
	void setAlwaysOnTopNative(bool value);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool b) override;
	virtual void setFocusableWindow(bool value);
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	void setFullScreenExclusiveModeState(bool state);
	virtual void setIconImagesData($ints* iconRaster, int32_t w, int32_t h, $ints* smallIconRaster, int32_t smw, int32_t smh);
	virtual void setMinSize(int32_t width, int32_t height);
	virtual void setModalBlocked(::java::awt::Dialog* dialog, bool blocked) override;
	void setOpacity(int32_t iOpacity);
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	void setOpaqueImpl(bool isOpaque);
	virtual void setResizable(bool resizable);
	virtual void setTitle($String* title);
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual bool shouldClearRectBeforePaint() override;
	virtual void show() override;
	virtual void syncBounds() override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	virtual void ungrab();
	virtual void updateAlwaysOnTopState() override;
	virtual void updateCursorImmediately() override;
	virtual void updateFocusableWindowState() override;
	virtual void updateGC();
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateIconImages() override;
	virtual void updateInsets(::java::awt::Insets* i);
	virtual void updateMinimumSize() override;
	virtual void updateWindow() override;
	void updateWindow(bool repaint);
	virtual void updateWindowImpl($ints* data, int32_t width, int32_t height);
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* screenLog;
	::sun::awt::windows::WWindowPeer* modalBlocker = nullptr;
	bool isOpaque = false;
	::sun::awt::windows::TranslucentWindowPainter* painter = nullptr;
	static ::java::lang::StringBuffer* ACTIVE_WINDOWS_KEY;
	static ::java::beans::PropertyChangeListener* activeWindowListener;
	static ::java::beans::PropertyChangeListener* guiDisposedListener;
	::java::awt::event::WindowListener* windowListener = nullptr;
	$volatile(::java::awt::Window$Type*) windowType = nullptr;
	float opacity = 0.0;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("ACTIVE_WINDOWS_KEY")

#endif // _sun_awt_windows_WWindowPeer_h_