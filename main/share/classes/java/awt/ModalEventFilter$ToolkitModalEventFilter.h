#ifndef _java_awt_ModalEventFilter$ToolkitModalEventFilter_h_
#define _java_awt_ModalEventFilter$ToolkitModalEventFilter_h_
//$ class java.awt.ModalEventFilter$ToolkitModalEventFilter
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

class ModalEventFilter$ToolkitModalEventFilter : public ::java::awt::ModalEventFilter {
	$class(ModalEventFilter$ToolkitModalEventFilter, $NO_CLASS_INIT, ::java::awt::ModalEventFilter)
public:
	ModalEventFilter$ToolkitModalEventFilter();
	void init$(::java::awt::Dialog* modalDialog);
	virtual ::java::awt::EventFilter$FilterAction* acceptWindow(::java::awt::Window* w) override;
	::sun::awt::AppContext* appContext = nullptr;
};

	} // awt
} // java

#endif // _java_awt_ModalEventFilter$ToolkitModalEventFilter_h_