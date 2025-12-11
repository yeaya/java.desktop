#ifndef _sun_lwawt_LWCheckboxPeer$CheckboxDelegate$1_h_
#define _sun_lwawt_LWCheckboxPeer$CheckboxDelegate$1_h_
//$ class sun.lwawt.LWCheckboxPeer$CheckboxDelegate$1
//$ extends javax.swing.JCheckBox

#include <javax/swing/JCheckBox.h>

namespace sun {
	namespace lwawt {
		class LWCheckboxPeer;
		class LWCheckboxPeer$CheckboxDelegate;
	}
}

namespace sun {
	namespace lwawt {

class LWCheckboxPeer$CheckboxDelegate$1 : public ::javax::swing::JCheckBox {
	$class(LWCheckboxPeer$CheckboxDelegate$1, $NO_CLASS_INIT, ::javax::swing::JCheckBox)
public:
	LWCheckboxPeer$CheckboxDelegate$1();
	using ::javax::swing::JCheckBox::contains;
	using ::javax::swing::JCheckBox::enable;
	using ::javax::swing::JCheckBox::getBounds;
	using ::javax::swing::JCheckBox::getSize;
	using ::javax::swing::JCheckBox::getLocation;
	using ::javax::swing::JCheckBox::firePropertyChange;
	using ::javax::swing::JCheckBox::add;
	using ::javax::swing::JCheckBox::getMousePosition;
	void init$(::sun::lwawt::LWCheckboxPeer$CheckboxDelegate* this$1, ::sun::lwawt::LWCheckboxPeer* val$this$0);
	virtual bool hasFocus() override;
	using ::javax::swing::JCheckBox::requestFocus;
	using ::javax::swing::JCheckBox::requestFocusInWindow;
	using ::javax::swing::JCheckBox::setUI;
	using ::javax::swing::JCheckBox::repaint;
	using ::javax::swing::JCheckBox::remove;
	using ::javax::swing::JCheckBox::list;
	::sun::lwawt::LWCheckboxPeer$CheckboxDelegate* this$1 = nullptr;
	::sun::lwawt::LWCheckboxPeer* val$this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWCheckboxPeer$CheckboxDelegate$1_h_