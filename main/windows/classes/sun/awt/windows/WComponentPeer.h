#ifndef _sun_awt_windows_WComponentPeer_h_
#define _sun_awt_windows_WComponentPeer_h_
//$ class sun.awt.windows.WComponentPeer
//$ extends sun.awt.windows.WObjectPeer
//$ implements java.awt.peer.ComponentPeer,java.awt.dnd.peer.DropTargetPeer

#include <java/awt/dnd/peer/DropTargetPeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Array.h>
#include <sun/awt/windows/WObjectPeer.h>

#pragma push_macro("BANDING_DIVISOR")
#undef BANDING_DIVISOR

namespace java {
	namespace awt {
		class AWTEvent;
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Color;
		class Component;
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
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
			class KeyEvent;
			class MouseEvent;
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
namespace sun {
	namespace awt {
		class RepaintArea;
		class Win32GraphicsConfig;
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
		namespace windows {

class WComponentPeer : public ::sun::awt::windows::WObjectPeer, public ::java::awt::peer::ComponentPeer, public ::java::awt::dnd::peer::DropTargetPeer {
	$class(WComponentPeer, 0, ::sun::awt::windows::WObjectPeer, ::java::awt::peer::ComponentPeer, ::java::awt::dnd::peer::DropTargetPeer)
public:
	WComponentPeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component* target);
	void _dispose();
	void _setBackground(int32_t rgb);
	virtual void _setFont(::java::awt::Font* f);
	void _setForeground(int32_t rgb);
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual int64_t addNativeDropTarget();
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout();
	virtual void beginValidate();
	virtual bool canDetermineObscurity() override;
	virtual void checkCreation();
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void create(::sun::awt::windows::WComponentPeer* parent) {}
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	$ints* createPrintedPixels(int32_t srcX, int32_t srcY, int32_t srcW, int32_t srcH, int32_t alpha);
	virtual void createScreenSurface(bool isResize);
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void disable();
	virtual void disableAcceleration();
	virtual void disposeImpl() override;
	virtual void disposeLater();
	virtual void dynamicallyLayoutContainer();
	virtual void enable();
	virtual void endLayout();
	virtual void endValidate();
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::BufferCapabilities* getBackBufferCaps();
	virtual int32_t getBackBuffersNum();
	virtual ::java::awt::Color* getBackgroundNoSync();
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency);
	virtual int64_t getData() override;
	virtual ::java::awt::image::ColorModel* getDeviceColorModel();
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual int64_t getHWnd();
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::sun::awt::windows::WComponentPeer* getNativeParent();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual ::sun::java2d::SurfaceData* getSurfaceData();
	virtual $Object* getTarget() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual void handleExpose(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void handleJavaFocusEvent(::java::awt::event::FocusEvent* fe);
	virtual bool handleJavaKeyEvent(::java::awt::event::KeyEvent* e);
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* e);
	virtual void handlePaint(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void handleRepaint(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual bool handlesWheelScrolling() override;
	virtual void hide();
	virtual void initialize();
	virtual bool isAccelCapable();
	static bool isContainingTopLevelAccelCapable(::java::awt::Component* c);
	virtual bool isFocusable() override;
	virtual bool isLightweightFramePeer();
	virtual bool isObscured() override;
	virtual bool isPaintPending();
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void nativeHandleEvent(::java::awt::AWTEvent* e);
	virtual bool nativeHandlesWheelScrolling();
	virtual void pSetParent(::java::awt::peer::ComponentPeer* newNativeParent);
	void pShow();
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintDamagedAreaImmediately();
	virtual void postEvent(::java::awt::AWTEvent* event);
	void postPaintIfNecessary(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void preprocessPostEvent(::java::awt::AWTEvent* event);
	virtual void print(::java::awt::Graphics* g) override;
	bool rejectFocusRequestHelper($String* logMsg);
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void removeNativeDropTarget();
	virtual void repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void replaceSurfaceData();
	virtual void replaceSurfaceData(int32_t newNumBackBuffers, ::java::awt::BufferCapabilities* caps);
	virtual void replaceSurfaceDataLater();
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height);
	void reshapeNoCheck(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setBoundsOperation(int32_t operation);
	virtual void setEnabled(bool b) override;
	virtual void setFocus(bool doSetFocus);
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setRectangularShape(int32_t lox, int32_t loy, int32_t hix, int32_t hiy, ::sun::java2d::pipe::Region* region);
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	void setZOrder(int64_t above);
	virtual bool shouldClearRectBeforePaint();
	virtual void show();
	virtual void start();
	virtual void syncBounds();
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateWindow();
	$volatile(int64_t) hwnd = 0;
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* shapeLog;
	static ::sun::util::logging::PlatformLogger* focusLog;
	::sun::java2d::SurfaceData* surfaceData = nullptr;
	::sun::awt::RepaintArea* paintArea = nullptr;
	::sun::awt::Win32GraphicsConfig* winGraphicsConfig = nullptr;
	bool isLayouting = false;
	bool paintPending = false;
	int32_t oldWidth = 0;
	int32_t oldHeight = 0;
	int32_t numBackBuffers = 0;
	::java::awt::image::VolatileImage* backBuffer = nullptr;
	::java::awt::BufferCapabilities* backBufferCaps = nullptr;
	::java::awt::Color* foreground = nullptr;
	::java::awt::Color* background = nullptr;
	::java::awt::Font* font = nullptr;
	int32_t nDropTargets = 0;
	int64_t nativeDropTargetContext = 0;
	int32_t serialNum = 0;
	static double BANDING_DIVISOR;
	static ::java::awt::Font* defaultFont;
	int32_t updateX1 = 0;
	int32_t updateY1 = 0;
	int32_t updateX2 = 0;
	int32_t updateY2 = 0;
	$volatile(bool) isAccelCapable$ = false;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("BANDING_DIVISOR")

#endif // _sun_awt_windows_WComponentPeer_h_