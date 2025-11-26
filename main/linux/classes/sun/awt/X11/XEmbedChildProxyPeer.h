#ifndef _sun_awt_X11_XEmbedChildProxyPeer_h_
#define _sun_awt_X11_XEmbedChildProxyPeer_h_
//$ class sun.awt.X11.XEmbedChildProxyPeer
//$ extends java.awt.peer.ComponentPeer
//$ implements sun.awt.X11.XEventDispatcher

#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/X11/XEventDispatcher.h>

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
		class Toolkit;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
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
		namespace X11 {
			class XEmbedChildProxy;
			class XEmbeddingContainer;
			class XEvent;
		}
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
	namespace awt {
		namespace X11 {

class XEmbedChildProxyPeer : public ::java::awt::peer::ComponentPeer, public ::sun::awt::X11::XEventDispatcher {
	$class(XEmbedChildProxyPeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer, ::sun::awt::X11::XEventDispatcher)
public:
	XEmbedChildProxyPeer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11::XEmbedChildProxy* proxy);
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual bool canDetermineObscurity() override;
	virtual void childResized();
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void dispatchEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void dispose() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual ::java::awt::Toolkit* getToolkit();
	virtual ::java::awt::Window* getTopLevel(::java::awt::Component* comp);
	virtual void handleConfigureNotify(::sun::awt::X11::XEvent* xev);
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev);
	virtual bool handlesWheelScrolling() override;
	virtual void initDispatching();
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void postEvent(::java::awt::AWTEvent* event);
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void requestXEmbedFocus();
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setBoundsOperation(int32_t operation);
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual bool simulateMotifRequestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time);
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	::sun::awt::X11::XEmbeddingContainer* container = nullptr;
	::sun::awt::X11::XEmbedChildProxy* proxy = nullptr;
	int64_t handle = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbedChildProxyPeer_h_