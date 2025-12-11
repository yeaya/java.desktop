#ifndef _sun_lwawt_LWButtonPeer$JButtonDelegate_h_
#define _sun_lwawt_LWButtonPeer$JButtonDelegate_h_
//$ class sun.lwawt.LWButtonPeer$JButtonDelegate
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace sun {
	namespace lwawt {
		class LWButtonPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWButtonPeer$JButtonDelegate : public ::javax::swing::JButton {
	$class(LWButtonPeer$JButtonDelegate, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	LWButtonPeer$JButtonDelegate();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::sun::lwawt::LWButtonPeer* this$0);
	virtual bool hasFocus() override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	using ::javax::swing::JButton::list;
	::sun::lwawt::LWButtonPeer* this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWButtonPeer$JButtonDelegate_h_