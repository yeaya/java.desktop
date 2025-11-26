#ifndef _sun_awt_X11_XButtonPeer_h_
#define _sun_awt_X11_XButtonPeer_h_
//$ class sun.awt.X11.XButtonPeer
//$ extends sun.awt.X11.XComponentPeer
//$ implements java.awt.peer.ButtonPeer

#include <java/awt/peer/ButtonPeer.h>
#include <sun/awt/X11/XComponentPeer.h>

namespace java {
	namespace awt {
		class Button;
		class Color;
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XButtonPeer : public ::sun::awt::X11::XComponentPeer, public ::java::awt::peer::ButtonPeer {
	$class(XButtonPeer, 0, ::sun::awt::X11::XComponentPeer, ::java::awt::peer::ButtonPeer)
public:
	XButtonPeer();
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
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Button* target);
	virtual void action(int64_t when, int32_t modifiers);
	virtual void dispose() override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual $String* getPropertyPrefix();
	virtual void handleJavaKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* e) override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintBorder(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintButtonPressed(::java::awt::Graphics* g, ::java::awt::Component* b);
	virtual void paintFocus(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintPeer(::java::awt::Graphics* g) override;
	virtual void paintText(::java::awt::Graphics* g, ::java::awt::Component* c, ::java::awt::Rectangle* textRect, $String* text);
	using ::sun::awt::X11::XComponentPeer::postInit;
	using ::sun::awt::X11::XComponentPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setLabel($String* label) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	bool pressed = false;
	bool armed = false;
	::java::awt::Insets* focusInsets = nullptr;
	::java::awt::Insets* borderInsets = nullptr;
	::java::awt::Insets* contentAreaInsets = nullptr;
	static $String* propertyPrefix;
	::java::awt::Color* focusColor = nullptr;
	bool disposed = false;
	$String* label = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XButtonPeer_h_