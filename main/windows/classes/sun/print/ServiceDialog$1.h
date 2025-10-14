#ifndef _sun_print_ServiceDialog$1_h_
#define _sun_print_ServiceDialog$1_h_
//$ class sun.print.ServiceDialog$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
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

class ServiceDialog$1 : public ::java::awt::event::WindowAdapter {
	$class(ServiceDialog$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	ServiceDialog$1();
	void init$(::sun::print::ServiceDialog* this$0);
	virtual void windowClosing(::java::awt::event::WindowEvent* event) override;
	::sun::print::ServiceDialog* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$1_h_