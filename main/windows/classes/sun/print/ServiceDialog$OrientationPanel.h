#ifndef _sun_print_ServiceDialog$OrientationPanel_h_
#define _sun_print_ServiceDialog$OrientationPanel_h_
//$ class sun.print.ServiceDialog$OrientationPanel
//$ extends javax.swing.JPanel
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace sun {
	namespace print {
		class ServiceDialog;
		class ServiceDialog$IconRadioButton;
		class ServiceDialog$MarginsPanel;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$OrientationPanel : public ::javax::swing::JPanel, public ::java::awt::event::ActionListener {
	$class(ServiceDialog$OrientationPanel, $NO_CLASS_INIT, ::javax::swing::JPanel, ::java::awt::event::ActionListener)
public:
	ServiceDialog$OrientationPanel();
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
	virtual void addOrientationListener(::sun::print::ServiceDialog$MarginsPanel* pnl);
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual $String* toString() override;
	virtual void updateInfo();
	::sun::print::ServiceDialog* this$0 = nullptr;
	$String* strTitle = nullptr;
	::sun::print::ServiceDialog$IconRadioButton* rbPortrait = nullptr;
	::sun::print::ServiceDialog$IconRadioButton* rbLandscape = nullptr;
	::sun::print::ServiceDialog$IconRadioButton* rbRevPortrait = nullptr;
	::sun::print::ServiceDialog$IconRadioButton* rbRevLandscape = nullptr;
	::sun::print::ServiceDialog$MarginsPanel* pnlMargins = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$OrientationPanel_h_