#ifndef _sun_print_ServiceDialog$ValidatingFileChooser_h_
#define _sun_print_ServiceDialog$ValidatingFileChooser_h_
//$ class sun.print.ServiceDialog$ValidatingFileChooser
//$ extends javax.swing.JFileChooser

#include <javax/swing/JFileChooser.h>

namespace sun {
	namespace print {
		class ServiceDialog;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$ValidatingFileChooser : public ::javax::swing::JFileChooser {
	$class(ServiceDialog$ValidatingFileChooser, $NO_CLASS_INIT, ::javax::swing::JFileChooser)
public:
	ServiceDialog$ValidatingFileChooser();
	using ::javax::swing::JFileChooser::getName;
	using ::javax::swing::JFileChooser::contains;
	using ::javax::swing::JFileChooser::enable;
	using ::javax::swing::JFileChooser::getBounds;
	using ::javax::swing::JFileChooser::getSize;
	using ::javax::swing::JFileChooser::getLocation;
	using ::javax::swing::JFileChooser::firePropertyChange;
	using ::javax::swing::JFileChooser::add;
	using ::javax::swing::JFileChooser::getMousePosition;
	void init$(::sun::print::ServiceDialog* this$0);
	virtual void approveSelection() override;
	using ::javax::swing::JFileChooser::requestFocus;
	using ::javax::swing::JFileChooser::requestFocusInWindow;
	using ::javax::swing::JFileChooser::repaint;
	using ::javax::swing::JFileChooser::remove;
	using ::javax::swing::JFileChooser::list;
	::sun::print::ServiceDialog* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$ValidatingFileChooser_h_