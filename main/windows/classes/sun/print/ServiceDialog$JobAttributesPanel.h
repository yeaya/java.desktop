#ifndef _sun_print_ServiceDialog$JobAttributesPanel_h_
#define _sun_print_ServiceDialog$JobAttributesPanel_h_
//$ class sun.print.ServiceDialog$JobAttributesPanel
//$ extends javax.swing.JPanel
//$ implements java.awt.event.ActionListener,javax.swing.event.ChangeListener,java.awt.event.FocusListener

#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JCheckBox;
		class JLabel;
		class JSpinner;
		class JTextField;
		class SpinnerNumberModel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace sun {
	namespace print {
		class ServiceDialog;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$JobAttributesPanel : public ::javax::swing::JPanel, public ::java::awt::event::ActionListener, public ::javax::swing::event::ChangeListener, public ::java::awt::event::FocusListener {
	$class(ServiceDialog$JobAttributesPanel, $NO_CLASS_INIT, ::javax::swing::JPanel, ::java::awt::event::ActionListener, ::javax::swing::event::ChangeListener, ::java::awt::event::FocusListener)
public:
	ServiceDialog$JobAttributesPanel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::print::ServiceDialog* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void updateInfo();
	::sun::print::ServiceDialog* this$0 = nullptr;
	$String* strTitle = nullptr;
	::javax::swing::JLabel* lblPriority = nullptr;
	::javax::swing::JLabel* lblJobName = nullptr;
	::javax::swing::JLabel* lblUserName = nullptr;
	::javax::swing::JSpinner* spinPriority = nullptr;
	::javax::swing::SpinnerNumberModel* snModel = nullptr;
	::javax::swing::JCheckBox* cbJobSheets = nullptr;
	::javax::swing::JTextField* tfJobName = nullptr;
	::javax::swing::JTextField* tfUserName = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$JobAttributesPanel_h_