#ifndef _java_awt_ModalEventFilter$ApplicationModalEventFilter_h_
#define _java_awt_ModalEventFilter$ApplicationModalEventFilter_h_
//$ class java.awt.ModalEventFilter$ApplicationModalEventFilter
//$ extends java.awt.ModalEventFilter

#include <java/awt/ModalEventFilter.h>

namespace java {
	namespace awt {
		class Dialog;
		class EventFilter$FilterAction;
		class Window;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace java {
	namespace awt {

class ModalEventFilter$ApplicationModalEventFilter : public ::java::awt::ModalEventFilter {
	$class(ModalEventFilter$ApplicationModalEventFilter, $NO_CLASS_INIT, ::java::awt::ModalEventFilter)
public:
	ModalEventFilter$ApplicationModalEventFilter();
	void init$(::java::awt::Dialog* modalDialog);
	virtual ::java::awt::EventFilter$FilterAction* acceptWindow(::java::awt::Window* w) override;
	::sun::awt::AppContext* appContext = nullptr;
};

	} // awt
} // java

#endif // _java_awt_ModalEventFilter$ApplicationModalEventFilter_h_