#ifndef _sun_lwawt_LWListPeer$ScrollableJList$JListDelegate_h_
#define _sun_lwawt_LWListPeer$ScrollableJList$JListDelegate_h_
//$ class sun.lwawt.LWListPeer$ScrollableJList$JListDelegate
//$ extends javax.swing.JList

#include <javax/swing/JList.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWListPeer$ScrollableJList;
	}
}

namespace sun {
	namespace lwawt {

class LWListPeer$ScrollableJList$JListDelegate : public ::javax::swing::JList {
	$class(LWListPeer$ScrollableJList$JListDelegate, $NO_CLASS_INIT, ::javax::swing::JList)
public:
	LWListPeer$ScrollableJList$JListDelegate();
	using ::javax::swing::JList::getToolTipText;
	using ::javax::swing::JList::contains;
	using ::javax::swing::JList::enable;
	using ::javax::swing::JList::getBounds;
	using ::javax::swing::JList::getSize;
	using ::javax::swing::JList::getLocation;
	using ::javax::swing::JList::firePropertyChange;
	using ::javax::swing::JList::add;
	using ::javax::swing::JList::getMousePosition;
	void init$(::sun::lwawt::LWListPeer$ScrollableJList* this$1);
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual bool hasFocus() override;
	using ::javax::swing::JList::list;
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void processMouseEvent(::java::awt::event::MouseEvent* e) override;
	using ::javax::swing::JList::setUI;
	using ::javax::swing::JList::requestFocus;
	using ::javax::swing::JList::requestFocusInWindow;
	using ::javax::swing::JList::repaint;
	using ::javax::swing::JList::remove;
	::sun::lwawt::LWListPeer$ScrollableJList* this$1 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWListPeer$ScrollableJList$JListDelegate_h_