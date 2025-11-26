#ifndef _sun_awt_X11_XCheckboxPeer_h_
#define _sun_awt_X11_XCheckboxPeer_h_
//$ class sun.awt.X11.XCheckboxPeer
//$ extends sun.awt.X11.XComponentPeer
//$ implements java.awt.peer.CheckboxPeer

#include <java/awt/peer/CheckboxPeer.h>
#include <sun/awt/X11/XComponentPeer.h>

#pragma push_macro("MASTER_CHECKMARK")
#undef MASTER_CHECKMARK
#pragma push_macro("MASTER_SIZE")
#undef MASTER_SIZE

namespace java {
	namespace awt {
		class Checkbox;
		class CheckboxGroup;
		class Color;
		class Dimension;
		class FontMetrics;
		class Graphics;
		class Insets;
		class Polygon;
		class Rectangle;
		class Shape;
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
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XCheckboxPeer : public ::sun::awt::X11::XComponentPeer, public ::java::awt::peer::CheckboxPeer {
	$class(XCheckboxPeer, 0, ::sun::awt::X11::XComponentPeer, ::java::awt::peer::CheckboxPeer)
public:
	XCheckboxPeer();
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
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	void init$(::java::awt::Checkbox* target);
	virtual void action(bool state);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	int32_t getCheckboxSize(::java::awt::FontMetrics* fm);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual void handleJavaKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* e) override;
	virtual bool isFocusable() override;
	virtual void keyPressed(::java::awt::event::KeyEvent* e);
	virtual void keyReleased(::java::awt::event::KeyEvent* e);
	virtual void keyTyped(::java::awt::event::KeyEvent* e);
	virtual void layout() override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e);
	virtual void mouseEntered(::java::awt::event::MouseEvent* e);
	virtual void mouseExited(::java::awt::event::MouseEvent* e);
	virtual void mousePressed(::java::awt::event::MouseEvent* e);
	virtual void mouseReleased(::java::awt::event::MouseEvent* e);
	virtual void notifyStateChanged(bool state);
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintCheckbox(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintFocus(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintPeer(::java::awt::Graphics* g) override;
	virtual void paintRadioButton(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintText(::java::awt::Graphics* g, ::java::awt::Rectangle* textRect, $String* text);
	using ::sun::awt::X11::XComponentPeer::postInit;
	using ::sun::awt::X11::XComponentPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setCheckboxGroup(::java::awt::CheckboxGroup* g) override;
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setLabel($String* label) override;
	virtual void setState(bool state) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	static ::sun::util::logging::PlatformLogger* log;
	static ::java::awt::Insets* focusInsets;
	static ::java::awt::Insets* borderInsets;
	static const int32_t checkBoxInsetFromText = 2;
	static double MASTER_SIZE;
	static ::java::awt::Polygon* MASTER_CHECKMARK;
	::java::awt::Shape* myCheckMark = nullptr;
	::java::awt::Color* focusColor = nullptr;
	bool pressed = false;
	bool armed = false;
	bool selected = false;
	::java::awt::Rectangle* textRect = nullptr;
	::java::awt::Rectangle* focusRect = nullptr;
	int32_t checkBoxSize = 0;
	int32_t cbX = 0;
	int32_t cbY = 0;
	$String* label = nullptr;
	::java::awt::CheckboxGroup* checkBoxGroup = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("MASTER_CHECKMARK")
#pragma pop_macro("MASTER_SIZE")

#endif // _sun_awt_X11_XCheckboxPeer_h_