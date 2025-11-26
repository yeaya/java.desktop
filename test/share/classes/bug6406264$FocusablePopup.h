#ifndef _bug6406264$FocusablePopup_h_
#define _bug6406264$FocusablePopup_h_
//$ class bug6406264$FocusablePopup
//$ extends javax.swing.plaf.basic.BasicComboPopup

#include <javax/swing/plaf/basic/BasicComboPopup.h>

class bug6406264;
namespace javax {
	namespace swing {
		class JComboBox;
	}
}

class bug6406264$FocusablePopup : public ::javax::swing::plaf::basic::BasicComboPopup {
	$class(bug6406264$FocusablePopup, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboPopup)
public:
	bug6406264$FocusablePopup();
	using ::javax::swing::plaf::basic::BasicComboPopup::add;
	using ::javax::swing::plaf::basic::BasicComboPopup::getComponent;
	using ::javax::swing::plaf::basic::BasicComboPopup::contains;
	using ::javax::swing::plaf::basic::BasicComboPopup::enable;
	using ::javax::swing::plaf::basic::BasicComboPopup::getBounds;
	using ::javax::swing::plaf::basic::BasicComboPopup::getSize;
	using ::javax::swing::plaf::basic::BasicComboPopup::getLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicComboPopup::getMousePosition;
	void init$(::bug6406264* this$0, ::javax::swing::JComboBox* combo);
	virtual bool isFocusable() override;
	using ::javax::swing::plaf::basic::BasicComboPopup::show;
	using ::javax::swing::plaf::basic::BasicComboPopup::setUI;
	using ::javax::swing::plaf::basic::BasicComboPopup::remove;
	using ::javax::swing::plaf::basic::BasicComboPopup::setLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::processMouseEvent;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocus;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicComboPopup::repaint;
	using ::javax::swing::plaf::basic::BasicComboPopup::list;
	::bug6406264* this$0 = nullptr;
};

#endif // _bug6406264$FocusablePopup_h_