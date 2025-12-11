#ifndef _sun_lwawt_LWTextFieldPeer$JPasswordFieldDelegate_h_
#define _sun_lwawt_LWTextFieldPeer$JPasswordFieldDelegate_h_
//$ class sun.lwawt.LWTextFieldPeer$JPasswordFieldDelegate
//$ extends javax.swing.JPasswordField

#include <javax/swing/JPasswordField.h>

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
		class LWTextFieldPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWTextFieldPeer$JPasswordFieldDelegate : public ::javax::swing::JPasswordField {
	$class(LWTextFieldPeer$JPasswordFieldDelegate, $NO_CLASS_INIT, ::javax::swing::JPasswordField)
public:
	LWTextFieldPeer$JPasswordFieldDelegate();
	using ::javax::swing::JPasswordField::getToolTipText;
	using ::javax::swing::JPasswordField::contains;
	using ::javax::swing::JPasswordField::enable;
	using ::javax::swing::JPasswordField::getBounds;
	using ::javax::swing::JPasswordField::getSize;
	using ::javax::swing::JPasswordField::getLocation;
	using ::javax::swing::JPasswordField::firePropertyChange;
	using ::javax::swing::JPasswordField::add;
	using ::javax::swing::JPasswordField::getMousePosition;
	void init$(::sun::lwawt::LWTextFieldPeer* this$0);
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual bool hasFocus() override;
	using ::javax::swing::JPasswordField::print;
	using ::javax::swing::JPasswordField::repaint;
	using ::javax::swing::JPasswordField::remove;
	using ::javax::swing::JPasswordField::list;
	virtual void replaceSelection($String* content) override;
	using ::javax::swing::JPasswordField::requestFocus;
	using ::javax::swing::JPasswordField::requestFocusInWindow;
	virtual void setTransferHandler(::javax::swing::TransferHandler* newHandler) override;
	using ::javax::swing::JPasswordField::setUI;
	::sun::lwawt::LWTextFieldPeer* this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWTextFieldPeer$JPasswordFieldDelegate_h_