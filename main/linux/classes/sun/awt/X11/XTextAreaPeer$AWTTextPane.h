#ifndef _sun_awt_X11_XTextAreaPeer$AWTTextPane_h_
#define _sun_awt_X11_XTextAreaPeer$AWTTextPane_h_
//$ class sun.awt.X11.XTextAreaPeer$AWTTextPane
//$ extends javax.swing.JScrollPane
//$ implements java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>
#include <javax/swing/JScrollPane.h>

namespace java {
	namespace awt {
		class Color;
		class Container;
		class Graphics;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JScrollBar;
		class JTextArea;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XTextAreaPeer;
			class XWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$AWTTextPane : public ::javax::swing::JScrollPane, public ::java::awt::event::FocusListener {
	$class(XTextAreaPeer$AWTTextPane, $NO_CLASS_INIT, ::javax::swing::JScrollPane, ::java::awt::event::FocusListener)
public:
	XTextAreaPeer$AWTTextPane();
	using ::javax::swing::JScrollPane::contains;
	using ::javax::swing::JScrollPane::enable;
	using ::javax::swing::JScrollPane::getBounds;
	using ::javax::swing::JScrollPane::getSize;
	using ::javax::swing::JScrollPane::getLocation;
	using ::javax::swing::JScrollPane::firePropertyChange;
	using ::javax::swing::JScrollPane::add;
	using ::javax::swing::JScrollPane::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11::XTextAreaPeer* this$0, ::javax::swing::JTextArea* jt, ::sun::awt::X11::XWindow* xwin, ::java::awt::Container* parent);
	virtual ::javax::swing::JScrollBar* createHorizontalScrollBar() override;
	virtual ::javax::swing::JScrollBar* createVerticalScrollBar() override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::Window* getRealParent();
	virtual ::javax::swing::JTextArea* getTextArea();
	virtual void invalidate() override;
	using ::javax::swing::JScrollPane::setUI;
	using ::javax::swing::JScrollPane::requestFocus;
	using ::javax::swing::JScrollPane::requestFocusInWindow;
	using ::javax::swing::JScrollPane::repaint;
	using ::javax::swing::JScrollPane::remove;
	using ::javax::swing::JScrollPane::list;
	virtual $String* toString() override;
	virtual void updateUI() override;
	::sun::awt::X11::XTextAreaPeer* this$0 = nullptr;
	::javax::swing::JTextArea* jtext = nullptr;
	::sun::awt::X11::XWindow* xwin = nullptr;
	::java::awt::Color* control = nullptr;
	::java::awt::Color* focus = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$AWTTextPane_h_