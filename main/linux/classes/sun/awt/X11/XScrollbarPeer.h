#ifndef _sun_awt_X11_XScrollbarPeer_h_
#define _sun_awt_X11_XScrollbarPeer_h_
//$ class sun.awt.X11.XScrollbarPeer
//$ extends sun.awt.X11.XComponentPeer
//$ implements java.awt.peer.ScrollbarPeer,sun.awt.X11.XScrollbarClient

#include <java/awt/peer/ScrollbarPeer.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XScrollbarClient.h>

#pragma push_macro("DEFAULT_LENGTH")
#undef DEFAULT_LENGTH
#pragma push_macro("DEFAULT_WIDTH_LINUX")
#undef DEFAULT_WIDTH_LINUX
#pragma push_macro("DEFAULT_WIDTH_SOLARIS")
#undef DEFAULT_WIDTH_SOLARIS

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Scrollbar;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
			class XScrollbar;
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

class XScrollbarPeer : public ::sun::awt::X11::XComponentPeer, public ::java::awt::peer::ScrollbarPeer, public ::sun::awt::X11::XScrollbarClient {
	$class(XScrollbarPeer, 0, ::sun::awt::X11::XComponentPeer, ::java::awt::peer::ScrollbarPeer, ::sun::awt::X11::XScrollbarClient)
public:
	XScrollbarPeer();
	using ::sun::awt::X11::XComponentPeer::handleKeyPress;
	using ::sun::awt::X11::XComponentPeer::getColorModel;
	using ::sun::awt::X11::XComponentPeer::getGraphics;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
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
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	void init$(::java::awt::Scrollbar* target);
	int32_t getDefaultDimension();
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual void handleJavaKeyEvent(::java::awt::event::KeyEvent* event) override;
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* mouseEvent) override;
	virtual void layout() override;
	virtual void notifyValue(::sun::awt::X11::XScrollbar* obj, int32_t type, int32_t value, bool isAdjusting) override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintPeer(::java::awt::Graphics* g) override;
	using ::sun::awt::X11::XComponentPeer::postInit;
	using ::sun::awt::X11::XComponentPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void repaintScrollbarRequest(::sun::awt::X11::XScrollbar* sb) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setLineIncrement(int32_t l) override;
	virtual void setPageIncrement(int32_t p) override;
	virtual void setValue(int32_t value);
	virtual void setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	static ::sun::util::logging::PlatformLogger* log;
	static const int32_t DEFAULT_LENGTH = 50;
	static const int32_t DEFAULT_WIDTH_SOLARIS = 19;
	static int32_t DEFAULT_WIDTH_LINUX;
	::sun::awt::X11::XScrollbar* tsb = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("DEFAULT_LENGTH")
#pragma pop_macro("DEFAULT_WIDTH_LINUX")
#pragma pop_macro("DEFAULT_WIDTH_SOLARIS")

#endif // _sun_awt_X11_XScrollbarPeer_h_