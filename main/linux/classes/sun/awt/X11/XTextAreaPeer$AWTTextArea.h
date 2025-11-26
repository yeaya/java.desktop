#ifndef _sun_awt_X11_XTextAreaPeer$AWTTextArea_h_
#define _sun_awt_X11_XTextAreaPeer$AWTTextArea_h_
//$ class sun.awt.X11.XTextAreaPeer$AWTTextArea
//$ extends javax.swing.JTextArea
//$ implements javax.swing.event.DocumentListener

#include <javax/swing/JTextArea.h>
#include <javax/swing/event/DocumentListener.h>

namespace java {
	namespace awt {
		namespace event {
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
			class XTextAreaPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$AWTTextArea : public ::javax::swing::JTextArea, public ::javax::swing::event::DocumentListener {
	$class(XTextAreaPeer$AWTTextArea, $NO_CLASS_INIT, ::javax::swing::JTextArea, ::javax::swing::event::DocumentListener)
public:
	XTextAreaPeer$AWTTextArea();
	using ::javax::swing::JTextArea::getToolTipText;
	using ::javax::swing::JTextArea::contains;
	using ::javax::swing::JTextArea::enable;
	using ::javax::swing::JTextArea::getBounds;
	using ::javax::swing::JTextArea::getSize;
	using ::javax::swing::JTextArea::getLocation;
	using ::javax::swing::JTextArea::firePropertyChange;
	using ::javax::swing::JTextArea::add;
	using ::javax::swing::JTextArea::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11::XTextAreaPeer* this$0, $String* text, ::sun::awt::X11::XTextAreaPeer* peer);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	void forwardFocusGained(::java::awt::event::FocusEvent* e);
	void forwardFocusLost(::java::awt::event::FocusEvent* e);
	virtual bool hasFocus() override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	using ::javax::swing::JTextArea::print;
	using ::javax::swing::JTextArea::list;
	void processInputMethodEventPublic(::java::awt::event::InputMethodEvent* e);
	void processMouseEventPublic(::java::awt::event::MouseEvent* e);
	void processMouseMotionEventPublic(::java::awt::event::MouseEvent* e);
	using ::javax::swing::JTextArea::remove;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	using ::javax::swing::JTextArea::repaint;
	void repaintNow();
	using ::javax::swing::JTextArea::requestFocus;
	using ::javax::swing::JTextArea::requestFocusInWindow;
	virtual void setTransferHandler(::javax::swing::TransferHandler* newHandler) override;
	using ::javax::swing::JTextArea::setUI;
	virtual $String* toString() override;
	virtual void updateUI() override;
	::sun::awt::X11::XTextAreaPeer* this$0 = nullptr;
	bool isFocused = false;
	::sun::awt::X11::XTextAreaPeer* peer = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$AWTTextArea_h_