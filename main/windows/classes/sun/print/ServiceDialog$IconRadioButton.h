#ifndef _sun_print_ServiceDialog$IconRadioButton_h_
#define _sun_print_ServiceDialog$IconRadioButton_h_
//$ class sun.print.ServiceDialog$IconRadioButton
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
		}
	}
}
namespace javax {
	namespace swing {
		class ButtonGroup;
		class JLabel;
		class JRadioButton;
	}
}
namespace sun {
	namespace print {
		class ServiceDialog;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$IconRadioButton : public ::javax::swing::JPanel {
	$class(ServiceDialog$IconRadioButton, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	ServiceDialog$IconRadioButton();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::sun::print::ServiceDialog* this$0, $String* key, $String* img, bool selected, ::javax::swing::ButtonGroup* bg, ::java::awt::event::ActionListener* al);
	virtual void addActionListener(::java::awt::event::ActionListener* al);
	virtual bool isSameAs(Object$* source);
	virtual bool isSelected();
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual void setEnabled(bool enabled) override;
	virtual void setSelected(bool selected);
	using ::javax::swing::JPanel::setUI;
	::sun::print::ServiceDialog* this$0 = nullptr;
	::javax::swing::JRadioButton* rb = nullptr;
	::javax::swing::JLabel* lbl = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$IconRadioButton_h_