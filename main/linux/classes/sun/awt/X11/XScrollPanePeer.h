#ifndef _sun_awt_X11_XScrollPanePeer_h_
#define _sun_awt_X11_XScrollPanePeer_h_
//$ class sun.awt.X11.XScrollPanePeer
//$ extends sun.awt.X11.XComponentPeer
//$ implements java.awt.peer.ScrollPanePeer,sun.awt.X11.XScrollbarClient

#include <java/awt/peer/ScrollPanePeer.h>
#include <java/lang/Array.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XScrollbarClient.h>

#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("MARGIN")
#undef MARGIN
#pragma push_macro("SCROLLBAR")
#undef SCROLLBAR
#pragma push_macro("SCROLLBAR_INSET")
#undef SCROLLBAR_INSET
#pragma push_macro("SPACE")
#undef SPACE
#pragma push_macro("VERTICAL")
#undef VERTICAL

namespace java {
	namespace awt {
		class AWTEvent;
		class Adjustable;
		class Color;
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
		class ScrollPane;
		class ScrollPaneAdjustable;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XHorizontalScrollbar;
			class XScrollbar;
			class XVerticalScrollbar;
			class XWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XScrollPanePeer : public ::sun::awt::X11::XComponentPeer, public ::java::awt::peer::ScrollPanePeer, public ::sun::awt::X11::XScrollbarClient {
	$class(XScrollPanePeer, 0, ::sun::awt::X11::XComponentPeer, ::java::awt::peer::ScrollPanePeer, ::sun::awt::X11::XScrollbarClient)
public:
	XScrollPanePeer();
	using ::sun::awt::X11::XComponentPeer::handleKeyPress;
	using ::sun::awt::X11::XComponentPeer::getColorModel;
	using ::sun::awt::X11::XComponentPeer::getGraphics;
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
	virtual ::java::awt::Component* getEventSource() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	void init$(::java::awt::ScrollPane* target);
	virtual void childResized(int32_t w, int32_t h) override;
	virtual ::java::awt::Dimension* getChildSize();
	virtual int64_t getContentWindow() override;
	virtual int32_t getHScrollbarHeight() override;
	virtual ::java::awt::Insets* getInsets() override;
	::java::awt::Component* getScrollChild();
	virtual int32_t getVScrollbarWidth() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* mouseEvent) override;
	virtual bool inHorizontalScrollbar(int32_t x, int32_t y);
	virtual bool inVerticalScrollbar(int32_t x, int32_t y);
	virtual void notifyValue(::sun::awt::X11::XScrollbar* obj, int32_t type, int32_t v, bool isAdjusting) override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintHorScrollbar(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, bool paintAll);
	virtual void paintPeer(::java::awt::Graphics* g) override;
	void paintScrollBars(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors);
	virtual void paintVerScrollbar(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, bool paintAll);
	using ::sun::awt::X11::XComponentPeer::preInit;
	using ::sun::awt::X11::XComponentPeer::postInit;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void repaintScrollBars();
	virtual void repaintScrollbarRequest(::sun::awt::X11::XScrollbar* sb) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void scroll(int32_t x, int32_t y, int32_t flag);
	virtual void scroll(int32_t x, int32_t y, int32_t flag, int32_t type);
	void setAdjustableValue(::java::awt::ScrollPaneAdjustable* adj, int32_t value, int32_t type);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setScrollPosition(int32_t x, int32_t y) override;
	virtual bool setScrollbarSpace();
	virtual void setUnitIncrement(::java::awt::Adjustable* adj, int32_t u) override;
	virtual void setValue(::java::awt::Adjustable* adj, int32_t v) override;
	virtual void setViewportSize();
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	static const int32_t MARGIN = 1;
	static int32_t SCROLLBAR;
	static const int32_t SPACE = 2;
	static const int32_t SCROLLBAR_INSET = 2;
	static const int32_t VERTICAL = 1; // 1 << 0
	static const int32_t HORIZONTAL = 2; // 1 << 1
	::sun::awt::X11::XVerticalScrollbar* vsb = nullptr;
	::sun::awt::X11::XHorizontalScrollbar* hsb = nullptr;
	::sun::awt::X11::XWindow* clip = nullptr;
	int32_t active = 0;
	int32_t hsbSpace = 0;
	int32_t vsbSpace = 0;
	int32_t vval = 0;
	int32_t hval = 0;
	int32_t vmax = 0;
	int32_t hmax = 0;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("MARGIN")
#pragma pop_macro("SCROLLBAR")
#pragma pop_macro("SCROLLBAR_INSET")
#pragma pop_macro("SPACE")
#pragma pop_macro("VERTICAL")

#endif // _sun_awt_X11_XScrollPanePeer_h_