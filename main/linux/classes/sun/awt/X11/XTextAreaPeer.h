#ifndef _sun_awt_X11_XTextAreaPeer_h_
#define _sun_awt_X11_XTextAreaPeer_h_
//$ class sun.awt.X11.XTextAreaPeer
//$ extends sun.awt.X11.XComponentPeer
//$ implements java.awt.peer.TextAreaPeer

#include <java/awt/peer/TextAreaPeer.h>
#include <sun/awt/X11/XComponentPeer.h>

namespace java {
	namespace awt {
		class Color;
		class Cursor;
		class Dimension;
		class Font;
		class Graphics;
		class TextArea;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class InputMethodEvent;
			class KeyEvent;
			class MouseEvent;
			class MouseWheelEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputMethodRequests;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XTextAreaPeer$AWTTextArea;
			class XTextAreaPeer$AWTTextPane;
			class XTextAreaPeer$JavaMouseEventHandler;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer : public ::sun::awt::X11::XComponentPeer, public ::java::awt::peer::TextAreaPeer {
	$class(XTextAreaPeer, $NO_CLASS_INIT, ::sun::awt::X11::XComponentPeer, ::java::awt::peer::TextAreaPeer)
public:
	XTextAreaPeer();
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
	virtual int32_t hashCode() override;
	void init$(::java::awt::TextArea* target);
	virtual void dispose() override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual int32_t getCaretPosition() override;
	virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows, int32_t cols) override;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t rows, int32_t cols) override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	virtual $String* getText() override;
	virtual void handleJavaInputMethodEvent(::java::awt::event::InputMethodEvent* e) override;
	virtual void handleJavaKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* e) override;
	virtual void handleJavaMouseWheelEvent(::java::awt::event::MouseWheelEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual void insert($String* txt, int32_t p) override;
	virtual bool isFocusable() override;
	using ::sun::awt::X11::XComponentPeer::pSetCursor;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void pSetCursor(::java::awt::Cursor* cursor, bool ignoreSubComponents) override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintPeer(::java::awt::Graphics* g) override;
	using ::sun::awt::X11::XComponentPeer::preInit;
	using ::sun::awt::X11::XComponentPeer::postInit;
	using ::sun::awt::X11::XComponentPeer::repaint;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void repaint() override;
	void repaintText();
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void replaceRange($String* txt, int32_t s, int32_t e) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void select(int32_t s, int32_t e) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setCaretPosition(int32_t position) override;
	virtual void setEditable(bool editable) override;
	virtual void setEnabled(bool enabled) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	void setScrollBarVisibility();
	virtual void setText($String* text) override;
	void setTextImpl($String* txt);
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	::sun::awt::X11::XTextAreaPeer$AWTTextPane* textPane = nullptr;
	::sun::awt::X11::XTextAreaPeer$AWTTextArea* jtext = nullptr;
	bool firstChangeSkipped = false;
	::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler* javaMouseEventHandler = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer_h_