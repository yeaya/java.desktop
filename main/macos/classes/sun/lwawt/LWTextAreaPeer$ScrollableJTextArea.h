#ifndef _sun_lwawt_LWTextAreaPeer$ScrollableJTextArea_h_
#define _sun_lwawt_LWTextAreaPeer$ScrollableJTextArea_h_
//$ class sun.lwawt.LWTextAreaPeer$ScrollableJTextArea
//$ extends javax.swing.JScrollPane

#include <javax/swing/JScrollPane.h>

namespace javax {
	namespace swing {
		class JTextArea;
	}
}
namespace sun {
	namespace lwawt {
		class LWTextAreaPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWTextAreaPeer$ScrollableJTextArea : public ::javax::swing::JScrollPane {
	$class(LWTextAreaPeer$ScrollableJTextArea, $NO_CLASS_INIT, ::javax::swing::JScrollPane)
public:
	LWTextAreaPeer$ScrollableJTextArea();
	using ::javax::swing::JScrollPane::contains;
	using ::javax::swing::JScrollPane::enable;
	using ::javax::swing::JScrollPane::getBounds;
	using ::javax::swing::JScrollPane::getSize;
	using ::javax::swing::JScrollPane::getLocation;
	using ::javax::swing::JScrollPane::firePropertyChange;
	using ::javax::swing::JScrollPane::add;
	using ::javax::swing::JScrollPane::getMousePosition;
	void init$(::sun::lwawt::LWTextAreaPeer* this$0);
	::javax::swing::JTextArea* getView();
	using ::javax::swing::JScrollPane::requestFocus;
	using ::javax::swing::JScrollPane::requestFocusInWindow;
	using ::javax::swing::JScrollPane::repaint;
	using ::javax::swing::JScrollPane::remove;
	using ::javax::swing::JScrollPane::list;
	virtual void setEnabled(bool enabled) override;
	using ::javax::swing::JScrollPane::setUI;
	::sun::lwawt::LWTextAreaPeer* this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWTextAreaPeer$ScrollableJTextArea_h_