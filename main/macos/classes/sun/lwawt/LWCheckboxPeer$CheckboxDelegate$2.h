#ifndef _sun_lwawt_LWCheckboxPeer$CheckboxDelegate$2_h_
#define _sun_lwawt_LWCheckboxPeer$CheckboxDelegate$2_h_
//$ class sun.lwawt.LWCheckboxPeer$CheckboxDelegate$2
//$ extends javax.swing.JRadioButton

#include <javax/swing/JRadioButton.h>

namespace sun {
	namespace lwawt {
		class LWCheckboxPeer;
		class LWCheckboxPeer$CheckboxDelegate;
	}
}

namespace sun {
	namespace lwawt {

class LWCheckboxPeer$CheckboxDelegate$2 : public ::javax::swing::JRadioButton {
	$class(LWCheckboxPeer$CheckboxDelegate$2, $NO_CLASS_INIT, ::javax::swing::JRadioButton)
public:
	LWCheckboxPeer$CheckboxDelegate$2();
	using ::javax::swing::JRadioButton::contains;
	using ::javax::swing::JRadioButton::enable;
	using ::javax::swing::JRadioButton::getBounds;
	using ::javax::swing::JRadioButton::getSize;
	using ::javax::swing::JRadioButton::getLocation;
	using ::javax::swing::JRadioButton::firePropertyChange;
	using ::javax::swing::JRadioButton::add;
	using ::javax::swing::JRadioButton::getMousePosition;
	void init$(::sun::lwawt::LWCheckboxPeer$CheckboxDelegate* this$1, ::sun::lwawt::LWCheckboxPeer* val$this$0);
	virtual bool hasFocus() override;
	using ::javax::swing::JRadioButton::requestFocus;
	using ::javax::swing::JRadioButton::requestFocusInWindow;
	using ::javax::swing::JRadioButton::setUI;
	using ::javax::swing::JRadioButton::repaint;
	using ::javax::swing::JRadioButton::remove;
	using ::javax::swing::JRadioButton::list;
	::sun::lwawt::LWCheckboxPeer$CheckboxDelegate* this$1 = nullptr;
	::sun::lwawt::LWCheckboxPeer* val$this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWCheckboxPeer$CheckboxDelegate$2_h_