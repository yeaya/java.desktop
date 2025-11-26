#ifndef _sun_print_ServiceDialog$PrintRangePanel_h_
#define _sun_print_ServiceDialog$PrintRangePanel_h_
//$ class sun.print.ServiceDialog$PrintRangePanel
//$ extends javax.swing.JPanel
//$ implements java.awt.event.ActionListener,java.awt.event.FocusListener

#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class PageRanges;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JFormattedTextField;
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

class ServiceDialog$PrintRangePanel : public ::javax::swing::JPanel, public ::java::awt::event::ActionListener, public ::java::awt::event::FocusListener {
	$class(ServiceDialog$PrintRangePanel, $NO_CLASS_INIT, ::javax::swing::JPanel, ::java::awt::event::ActionListener, ::java::awt::event::FocusListener)
public:
	ServiceDialog$PrintRangePanel();
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
	void setupRangeWidgets();
	virtual $String* toString() override;
	virtual void updateInfo();
	void updateRangeAttribute();
	::sun::print::ServiceDialog* this$0 = nullptr;
	$String* strTitle = nullptr;
	::javax::print::attribute::standard::PageRanges* prAll = nullptr;
	::javax::swing::JRadioButton* rbAll = nullptr;
	::javax::swing::JRadioButton* rbPages = nullptr;
	::javax::swing::JRadioButton* rbSelect = nullptr;
	::javax::swing::JFormattedTextField* tfRangeFrom = nullptr;
	::javax::swing::JFormattedTextField* tfRangeTo = nullptr;
	::javax::swing::JLabel* lblRangeTo = nullptr;
	bool prSupported = false;
	bool prPgRngSupported = false;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$PrintRangePanel_h_