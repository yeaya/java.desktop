#ifndef _sun_awt_X11_XTextFieldPeer$XAWTTextField_h_
#define _sun_awt_X11_XTextFieldPeer$XAWTTextField_h_
//$ class sun.awt.X11.XTextFieldPeer$XAWTTextField
//$ extends javax.swing.JPasswordField
//$ implements java.awt.event.ActionListener,javax.swing.event.DocumentListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/event/DocumentListener.h>

namespace java {
	namespace awt {
		class Container;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class FocusEvent;
			class InputMethodEvent;
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class TransferHandler;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XComponentPeer;
			class XTextFieldPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextFieldPeer$XAWTTextField : public ::javax::swing::JPasswordField, public ::java::awt::event::ActionListener, public ::javax::swing::event::DocumentListener {
	$class(XTextFieldPeer$XAWTTextField, $NO_CLASS_INIT, ::javax::swing::JPasswordField, ::java::awt::event::ActionListener, ::javax::swing::event::DocumentListener)
public:
	XTextFieldPeer$XAWTTextField();
	using ::javax::swing::JPasswordField::getToolTipText;
	using ::javax::swing::JPasswordField::contains;
	using ::javax::swing::JPasswordField::enable;
	using ::javax::swing::JPasswordField::getBounds;
	using ::javax::swing::JPasswordField::getSize;
	using ::javax::swing::JPasswordField::getLocation;
	using ::javax::swing::JPasswordField::firePropertyChange;
	using ::javax::swing::JPasswordField::add;
	using ::javax::swing::JPasswordField::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11::XTextFieldPeer* this$0, $String* text, ::sun::awt::X11::XComponentPeer* xwin, ::java::awt::Container* parent);
	virtual void actionPerformed(::java::awt::event::ActionEvent* actionEvent) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	void forwardFocusGained(::java::awt::event::FocusEvent* e);
	void forwardFocusLost(::java::awt::event::FocusEvent* e);
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual bool hasFocus() override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	using ::javax::swing::JPasswordField::print;
	using ::javax::swing::JPasswordField::list;
	void processInputMethodEventImpl(::java::awt::event::InputMethodEvent* e);
	void processMouseEventImpl(::java::awt::event::MouseEvent* e);
	void processMouseMotionEventImpl(::java::awt::event::MouseEvent* e);
	using ::javax::swing::JPasswordField::remove;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	using ::javax::swing::JPasswordField::repaint;
	void repaintNow();
	using ::javax::swing::JPasswordField::requestFocus;
	using ::javax::swing::JPasswordField::requestFocusInWindow;
	virtual void setEchoChar(char16_t c) override;
	virtual void setTransferHandler(::javax::swing::TransferHandler* newHandler) override;
	using ::javax::swing::JPasswordField::setUI;
	virtual $String* toString() override;
	virtual void updateUI() override;
	::sun::awt::X11::XTextFieldPeer* this$0 = nullptr;
	bool isFocused = false;
	::sun::awt::X11::XComponentPeer* xwin = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextFieldPeer$XAWTTextField_h_