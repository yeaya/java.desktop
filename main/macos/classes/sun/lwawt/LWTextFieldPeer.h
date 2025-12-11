#ifndef _sun_lwawt_LWTextFieldPeer_h_
#define _sun_lwawt_LWTextFieldPeer_h_
//$ class sun.lwawt.LWTextFieldPeer
//$ extends sun.lwawt.LWTextComponentPeer
//$ implements java.awt.peer.TextFieldPeer,java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/awt/peer/TextFieldPeer.h>
#include <sun/lwawt/LWTextComponentPeer.h>

namespace java {
	namespace awt {
		class Dimension;
		class TextField;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}
namespace sun {
	namespace lwawt {
		class PlatformComponent;
	}
}

namespace sun {
	namespace lwawt {

class LWTextFieldPeer : public ::sun::lwawt::LWTextComponentPeer, public ::java::awt::peer::TextFieldPeer, public ::java::awt::event::ActionListener {
	$class(LWTextFieldPeer, $NO_CLASS_INIT, ::sun::lwawt::LWTextComponentPeer, ::java::awt::peer::TextFieldPeer, ::java::awt::event::ActionListener)
public:
	LWTextFieldPeer();
	using ::sun::lwawt::LWTextComponentPeer::getMinimumSize;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t w, int32_t h) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual int32_t getCaretPosition() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	virtual $String* getText() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::TextField* target, ::sun::lwawt::PlatformComponent* platformComponent);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual ::javax::swing::JComponent* createDelegate() override;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t columns) override;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t columns) override;
	virtual ::javax::swing::text::JTextComponent* getTextComponent() override;
	virtual void handleJavaFocusEvent(::java::awt::event::FocusEvent* e) override;
	virtual void initializeImpl() override;
	using ::sun::lwawt::LWTextComponentPeer::setBounds;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void select(int32_t selStart, int32_t selEnd) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setCaretPosition(int32_t pos) override;
	virtual void setEchoChar(char16_t echoChar) override;
	virtual void setEditable(bool editable) override;
	virtual void setEnabled(bool e) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setText($String* text) override;
	virtual void setVisible(bool v) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWTextFieldPeer_h_