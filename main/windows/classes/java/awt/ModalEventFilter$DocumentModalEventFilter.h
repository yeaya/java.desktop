#ifndef _java_awt_ModalEventFilter$DocumentModalEventFilter_h_
#define _java_awt_ModalEventFilter$DocumentModalEventFilter_h_
//$ class java.awt.ModalEventFilter$DocumentModalEventFilter
//$ extends java.awt.ModalEventFilter

#include <java/awt/ModalEventFilter.h>

namespace java {
	namespace awt {
		class Dialog;
		class EventFilter$FilterAction;
		class Window;
	}
}

namespace java {
	namespace awt {

class ModalEventFilter$DocumentModalEventFilter : public ::java::awt::ModalEventFilter {
	$class(ModalEventFilter$DocumentModalEventFilter, $NO_CLASS_INIT, ::java::awt::ModalEventFilter)
public:
	ModalEventFilter$DocumentModalEventFilter();
	void init$(::java::awt::Dialog* modalDialog);
	virtual ::java::awt::EventFilter$FilterAction* acceptWindow(::java::awt::Window* w) override;
	::java::awt::Window* documentRoot = nullptr;
};

	} // awt
} // java

#endif // _java_awt_ModalEventFilter$DocumentModalEventFilter_h_