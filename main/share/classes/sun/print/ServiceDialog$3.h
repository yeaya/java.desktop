#ifndef _sun_print_ServiceDialog$3_h_
#define _sun_print_ServiceDialog$3_h_
//$ class sun.print.ServiceDialog$3
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

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
	}
}

namespace sun {
	namespace print {

class ServiceDialog$3 : public ::javax::swing::AbstractAction {
	$class(ServiceDialog$3, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	ServiceDialog$3();
	void init$(::sun::print::ServiceDialog* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::sun::print::ServiceDialog* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$3_h_