#ifndef _sun_lwawt_LWChoicePeer$JComboBoxDelegate_h_
#define _sun_lwawt_LWChoicePeer$JComboBoxDelegate_h_
//$ class sun.lwawt.LWChoicePeer$JComboBoxDelegate
//$ extends javax.swing.JComboBox

#include <javax/swing/JComboBox.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JPopupMenu;
	}
}
namespace sun {
	namespace lwawt {
		class LWChoicePeer;
	}
}

namespace sun {
	namespace lwawt {

class LWChoicePeer$JComboBoxDelegate : public ::javax::swing::JComboBox {
	$class(LWChoicePeer$JComboBoxDelegate, $NO_CLASS_INIT, ::javax::swing::JComboBox)
public:
	LWChoicePeer$JComboBoxDelegate();
	using ::javax::swing::JComboBox::contains;
	using ::javax::swing::JComboBox::enable;
	using ::javax::swing::JComboBox::getBounds;
	using ::javax::swing::JComboBox::getSize;
	using ::javax::swing::JComboBox::getLocation;
	using ::javax::swing::JComboBox::firePropertyChange;
	using ::javax::swing::JComboBox::add;
	using ::javax::swing::JComboBox::getMousePosition;
	void init$(::sun::lwawt::LWChoicePeer* this$0);
	virtual void firePopupMenuWillBecomeVisible() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	::javax::swing::JPopupMenu* getPopupMenu();
	virtual bool hasFocus() override;
	void lambda$firePopupMenuWillBecomeVisible$0();
	using ::javax::swing::JComboBox::setUI;
	using ::javax::swing::JComboBox::requestFocus;
	using ::javax::swing::JComboBox::requestFocusInWindow;
	using ::javax::swing::JComboBox::repaint;
	using ::javax::swing::JComboBox::remove;
	using ::javax::swing::JComboBox::list;
	::sun::lwawt::LWChoicePeer* this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWChoicePeer$JComboBoxDelegate_h_