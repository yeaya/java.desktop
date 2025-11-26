#ifndef _sun_print_ServiceDialog$2_h_
#define _sun_print_ServiceDialog$2_h_
//$ class sun.print.ServiceDialog$2
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

class ServiceDialog$2 : public ::java::awt::event::WindowAdapter {
	$class(ServiceDialog$2, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	ServiceDialog$2();
	void init$(::sun::print::ServiceDialog* this$0);
	virtual void windowClosing(::java::awt::event::WindowEvent* event) override;
	::sun::print::ServiceDialog* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$2_h_