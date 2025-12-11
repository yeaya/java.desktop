#ifndef _sun_lwawt_LWComponentPeer_h_
#define _sun_lwawt_LWComponentPeer_h_
//$ class sun.lwawt.LWComponentPeer
//$ extends java.awt.peer.ComponentPeer
//$ implements java.awt.dnd.peer.DropTargetPeer

#include <java/awt/dnd/peer/DropTargetPeer.h>
#include <java/awt/peer/ComponentPeer.h>

#pragma push_macro("WIDE_CHAR")
#undef WIDE_CHAR

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
			class AWTEventListener;
			class FocusEvent;
			class FocusEvent$Cause;
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
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace sun {
	namespace awt {
		class RepaintArea;
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
		class LWContainerPeer;
		class LWGraphicsConfig;
		class LWToolkit;
		class LWWindowPeer;
		class PlatformComponent;
		class PlatformDropTarget;
		class PlatformWindow;
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

class LWComponentPeer : public ::java::awt::peer::ComponentPeer, public ::java::awt::dnd::peer::DropTargetPeer {
	$class(LWComponentPeer, 0, ::java::awt::peer::ComponentPeer, ::java::awt::dnd::peer::DropTargetPeer)
public:
	LWComponentPeer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component* target, ::sun::lwawt::PlatformComponent* platformComponent);
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) override;
	void applyConstrain(::java::awt::Graphics* g);
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void applyShapeImpl(::sun::java2d::pipe::Region* shape);
	virtual bool canDetermineObscurity() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	static ::sun::java2d::pipe::Region* computeVisibleRect(::sun::lwawt::LWComponentPeer* c, ::sun::java2d::pipe::Region* region);
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::javax::swing::JComponent* createDelegate();
	::java::awt::AWTEvent* createDelegateEvent(::java::awt::AWTEvent* e);
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t w, int32_t h) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual void disposeImpl();
	virtual ::sun::lwawt::LWComponentPeer* findPeerAt(int32_t x, int32_t y);
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	static void flushOnscreenGraphics();
	virtual ::java::awt::Image* getBackBuffer() override;
	::java::awt::Color* getBackground();
	::java::awt::Rectangle* getBounds();
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	::sun::lwawt::LWContainerPeer* getContainerPeer();
	virtual ::java::awt::Cursor* getCursor(::java::awt::Point* p);
	::javax::swing::JComponent* getDelegate();
	virtual ::java::awt::Component* getDelegateFocusOwner();
	$Object* getDelegateLock();
	::java::awt::Font* getFont();
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	::java::awt::Color* getForeground();
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	::sun::lwawt::LWGraphicsConfig* getLWGC();
	virtual ::sun::lwawt::LWToolkit* getLWToolkit();
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	::java::awt::Graphics* getOnscreenGraphics();
	static $Object* getPeerTreeLock();
	virtual ::sun::lwawt::PlatformWindow* getPlatformWindow();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	::sun::java2d::pipe::Region* getRegion();
	::java::awt::Rectangle* getSize();
	$Object* getStateLock();
	::java::awt::Component* getTarget();
	::java::awt::event::AWTEventListener* getToolkitAWTEventListener();
	virtual ::sun::java2d::pipe::Region* getVisibleRegion();
	::sun::lwawt::LWWindowPeer* getWindowPeer();
	virtual ::sun::lwawt::LWWindowPeer* getWindowPeerOrSelf();
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual void handleJavaFocusEvent(::java::awt::event::FocusEvent* e);
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* e);
	void handleJavaPaintEvent();
	void handleMove(int32_t x, int32_t y, bool updateTarget);
	void handleResize(int32_t w, int32_t h, bool updateTarget);
	virtual bool handlesWheelScrolling() override;
	void initialize();
	virtual void initializeImpl();
	bool isDisposed();
	bool isEnabled();
	virtual bool isFocusable() override;
	bool isLayouting();
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual bool isShaped();
	bool isShowing();
	virtual bool isTranslucent();
	bool isVisible();
	virtual void layout() override;
	virtual ::java::awt::Point* localToWindow(int32_t x, int32_t y);
	virtual ::java::awt::Point* localToWindow(::java::awt::Point* p);
	virtual ::java::awt::Rectangle* localToWindow(::java::awt::Rectangle* r);
	virtual void paint(::java::awt::Graphics* g) override;
	void paintPeer(::java::awt::Graphics* g);
	virtual void postEvent(::java::awt::AWTEvent* event);
	virtual void postPaintEvent(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void print(::java::awt::Graphics* g) override;
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) override;
	void repaintOldNewBounds(::java::awt::Rectangle* oldB);
	void repaintParent(::java::awt::Rectangle* oldB);
	void repaintPeer();
	virtual void repaintPeer(::java::awt::Rectangle* r);
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	static void resetColorsAndFont(::java::awt::Container* c);
	virtual void sendEventToDelegate(::java::awt::AWTEvent* e);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(::java::awt::Rectangle* r);
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op, bool notify, bool updateTarget);
	virtual void setEnabled(bool e) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	void setLayouting(bool isLayouting);
	void setToolkitAWTEventListener(::java::awt::event::AWTEventListener* listener);
	virtual void setVisible(bool v) override;
	virtual void setVisibleImpl(bool v);
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	bool shouldClearRectBeforePaint();
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	::java::awt::Dimension* validateSize(::java::awt::Dimension* size);
	virtual ::java::awt::Point* windowToLocal(int32_t x, int32_t y, ::sun::lwawt::LWWindowPeer* wp);
	virtual ::java::awt::Point* windowToLocal(::java::awt::Point* p, ::sun::lwawt::LWWindowPeer* wp);
	virtual ::java::awt::Rectangle* windowToLocal(::java::awt::Rectangle* r, ::sun::lwawt::LWWindowPeer* wp);
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* focusLog;
	$Object* stateLock = nullptr;
	static $Object* peerTreeLock;
	::java::awt::Component* target = nullptr;
	::sun::lwawt::LWContainerPeer* containerPeer = nullptr;
	::sun::lwawt::LWWindowPeer* windowPeer = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* disposed = nullptr;
	::java::awt::Rectangle* bounds = nullptr;
	::sun::java2d::pipe::Region* region = nullptr;
	bool visible = false;
	bool enabled = false;
	::java::awt::Color* background = nullptr;
	::java::awt::Color* foreground = nullptr;
	::java::awt::Font* font = nullptr;
	::sun::awt::RepaintArea* targetPaintArea = nullptr;
	$volatile(bool) isLayouting$ = false;
	::javax::swing::JComponent* delegate = nullptr;
	::java::awt::Container* delegateContainer = nullptr;
	::java::awt::Component* delegateDropTarget = nullptr;
	$Object* dropTargetLock = nullptr;
	int32_t fNumDropTargets = 0;
	::sun::lwawt::PlatformDropTarget* fDropTarget = nullptr;
	::sun::lwawt::PlatformComponent* platformComponent = nullptr;
	static const char16_t WIDE_CHAR = ((char16_t)48);
	::java::awt::Image* backBuffer = nullptr;
};

	} // lwawt
} // sun

#pragma pop_macro("WIDE_CHAR")

#endif // _sun_lwawt_LWComponentPeer_h_