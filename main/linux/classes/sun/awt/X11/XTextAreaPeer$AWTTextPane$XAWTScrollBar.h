#ifndef _sun_awt_X11_XTextAreaPeer$AWTTextPane$XAWTScrollBar_h_
#define _sun_awt_X11_XTextAreaPeer$AWTTextPane$XAWTScrollBar_h_
//$ class sun.awt.X11.XTextAreaPeer$AWTTextPane$XAWTScrollBar
//$ extends javax.swing.JScrollPane$ScrollBar

#include <javax/swing/JScrollPane$ScrollBar.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XTextAreaPeer$AWTTextPane;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$AWTTextPane$XAWTScrollBar : public ::javax::swing::JScrollPane$ScrollBar {
	$class(XTextAreaPeer$AWTTextPane$XAWTScrollBar, $NO_CLASS_INIT, ::javax::swing::JScrollPane$ScrollBar)
public:
	XTextAreaPeer$AWTTextPane$XAWTScrollBar();
	using ::javax::swing::JScrollPane$ScrollBar::getUnitIncrement;
	using ::javax::swing::JScrollPane$ScrollBar::getBlockIncrement;
	using ::javax::swing::JScrollPane$ScrollBar::contains;
	using ::javax::swing::JScrollPane$ScrollBar::enable;
	using ::javax::swing::JScrollPane$ScrollBar::getBounds;
	using ::javax::swing::JScrollPane$ScrollBar::getSize;
	using ::javax::swing::JScrollPane$ScrollBar::getLocation;
	using ::javax::swing::JScrollPane$ScrollBar::firePropertyChange;
	using ::javax::swing::JScrollPane$ScrollBar::add;
	using ::javax::swing::JScrollPane$ScrollBar::getMousePosition;
	void init$(::sun::awt::X11::XTextAreaPeer$AWTTextPane* this$1, int32_t i);
	using ::javax::swing::JScrollPane$ScrollBar::setUI;
	using ::javax::swing::JScrollPane$ScrollBar::requestFocus;
	using ::javax::swing::JScrollPane$ScrollBar::requestFocusInWindow;
	using ::javax::swing::JScrollPane$ScrollBar::repaint;
	using ::javax::swing::JScrollPane$ScrollBar::remove;
	using ::javax::swing::JScrollPane$ScrollBar::list;
	virtual void updateUI() override;
	::sun::awt::X11::XTextAreaPeer$AWTTextPane* this$1 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$AWTTextPane$XAWTScrollBar_h_