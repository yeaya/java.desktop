#ifndef _sun_lwawt_LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_h_
#define _sun_lwawt_LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_h_
//$ class sun.lwawt.LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate
//$ extends javax.swing.JTextArea

#include <javax/swing/JTextArea.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class TransferHandler;
	}
}
namespace sun {
	namespace lwawt {
		class LWTextAreaPeer$ScrollableJTextArea;
	}
}

namespace sun {
	namespace lwawt {

class LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate : public ::javax::swing::JTextArea {
	$class(LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, $NO_CLASS_INIT, ::javax::swing::JTextArea)
public:
	LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate();
	using ::javax::swing::JTextArea::getToolTipText;
	using ::javax::swing::JTextArea::contains;
	using ::javax::swing::JTextArea::enable;
	using ::javax::swing::JTextArea::getBounds;
	using ::javax::swing::JTextArea::getSize;
	using ::javax::swing::JTextArea::getLocation;
	using ::javax::swing::JTextArea::firePropertyChange;
	using ::javax::swing::JTextArea::add;
	using ::javax::swing::JTextArea::getMousePosition;
	void init$(::sun::lwawt::LWTextAreaPeer$ScrollableJTextArea* this$1);
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual bool hasFocus() override;
	using ::javax::swing::JTextArea::print;
	using ::javax::swing::JTextArea::repaint;
	using ::javax::swing::JTextArea::remove;
	using ::javax::swing::JTextArea::list;
	virtual void replaceSelection($String* content) override;
	using ::javax::swing::JTextArea::requestFocus;
	using ::javax::swing::JTextArea::requestFocusInWindow;
	virtual void setTransferHandler(::javax::swing::TransferHandler* newHandler) override;
	using ::javax::swing::JTextArea::setUI;
	::sun::lwawt::LWTextAreaPeer$ScrollableJTextArea* this$1 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate_h_