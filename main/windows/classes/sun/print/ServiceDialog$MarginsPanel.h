#ifndef _sun_print_ServiceDialog$MarginsPanel_h_
#define _sun_print_ServiceDialog$MarginsPanel_h_
//$ class sun.print.ServiceDialog$MarginsPanel
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
namespace java {
	namespace lang {
		class Float;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class MediaPrintableArea;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JFormattedTextField;
		class JLabel;
	}
}
namespace sun {
	namespace print {
		class ServiceDialog;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$MarginsPanel : public ::javax::swing::JPanel, public ::java::awt::event::ActionListener, public ::java::awt::event::FocusListener {
	$class(ServiceDialog$MarginsPanel, $NO_CLASS_INIT, ::javax::swing::JPanel, ::java::awt::event::ActionListener, ::java::awt::event::FocusListener)
public:
	ServiceDialog$MarginsPanel();
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
	virtual $String* toString() override;
	virtual void updateInfo();
	virtual void updateMargins(Object$* source);
	::javax::print::attribute::standard::MediaPrintableArea* validateMargins(float lm, float rm, float tm, float bm);
	::sun::print::ServiceDialog* this$0 = nullptr;
	$String* strTitle = nullptr;
	::javax::swing::JFormattedTextField* leftMargin = nullptr;
	::javax::swing::JFormattedTextField* rightMargin = nullptr;
	::javax::swing::JFormattedTextField* topMargin = nullptr;
	::javax::swing::JFormattedTextField* bottomMargin = nullptr;
	::javax::swing::JLabel* lblLeft = nullptr;
	::javax::swing::JLabel* lblRight = nullptr;
	::javax::swing::JLabel* lblTop = nullptr;
	::javax::swing::JLabel* lblBottom = nullptr;
	int32_t units = 0;
	float lmVal = 0.0;
	float rmVal = 0.0;
	float tmVal = 0.0;
	float bmVal = 0.0;
	::java::lang::Float* lmObj = nullptr;
	::java::lang::Float* rmObj = nullptr;
	::java::lang::Float* tmObj = nullptr;
	::java::lang::Float* bmObj = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$MarginsPanel_h_