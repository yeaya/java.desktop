#ifndef _sun_lwawt_LWTextComponentPeer_h_
#define _sun_lwawt_LWTextComponentPeer_h_
//$ class sun.lwawt.LWTextComponentPeer
//$ extends sun.lwawt.LWComponentPeer
//$ implements javax.swing.event.DocumentListener,java.awt.peer.TextComponentPeer,java.awt.event.InputMethodListener

#include <java/awt/event/InputMethodListener.h>
#include <java/awt/peer/TextComponentPeer.h>
#include <javax/swing/event/DocumentListener.h>
#include <sun/lwawt/LWComponentPeer.h>

namespace java {
	namespace awt {
		class Dimension;
		class TextComponent;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InputMethodEvent;
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
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
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

class LWTextComponentPeer : public ::sun::lwawt::LWComponentPeer, public ::javax::swing::event::DocumentListener, public ::java::awt::peer::TextComponentPeer, public ::java::awt::event::InputMethodListener {
	$class(LWTextComponentPeer, $NO_CLASS_INIT, ::sun::lwawt::LWComponentPeer, ::javax::swing::event::DocumentListener, ::java::awt::peer::TextComponentPeer, ::java::awt::event::InputMethodListener)
public:
	LWTextComponentPeer();
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
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::TextComponent* target, ::sun::lwawt::PlatformComponent* platformComponent);
	virtual void caretPositionChanged(::java::awt::event::InputMethodEvent* event) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void disposeImpl() override;
	virtual int32_t getCaretPosition() override;
	virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests() override;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows, int32_t columns);
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	virtual $String* getText() override;
	virtual ::javax::swing::text::JTextComponent* getTextComponent() {return nullptr;}
	virtual void initializeImpl() override;
	virtual void inputMethodTextChanged(::java::awt::event::InputMethodEvent* event) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	void postTextEvent();
	virtual void print(::java::awt::Graphics* g) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	void revalidate();
	virtual void select(int32_t selStart, int32_t selEnd) override;
	using ::sun::lwawt::LWComponentPeer::setBounds;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setCaretPosition(int32_t pos) override;
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
	$volatile(bool) firstChangeSkipped = false;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWTextComponentPeer_h_