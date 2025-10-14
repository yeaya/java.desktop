#ifndef _java_awt_ModalEventFilter_h_
#define _java_awt_ModalEventFilter_h_
//$ class java.awt.ModalEventFilter
//$ extends java.awt.EventFilter

#include <java/awt/EventFilter.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Dialog;
		class EventFilter$FilterAction;
		class Window;
	}
}

namespace java {
	namespace awt {

class ModalEventFilter : public ::java::awt::EventFilter {
	$class(ModalEventFilter, $NO_CLASS_INIT, ::java::awt::EventFilter)
public:
	ModalEventFilter();
	void init$(::java::awt::Dialog* modalDialog);
	virtual ::java::awt::EventFilter$FilterAction* acceptEvent(::java::awt::AWTEvent* event) override;
	virtual ::java::awt::EventFilter$FilterAction* acceptWindow(::java::awt::Window* w) {return nullptr;}
	virtual int32_t compareTo(::java::awt::ModalEventFilter* another);
	static ::java::awt::ModalEventFilter* createFilterForDialog(::java::awt::Dialog* modalDialog);
	virtual void disable();
	virtual ::java::awt::Dialog* getModalDialog();
	::java::awt::Dialog* modalDialog = nullptr;
	bool disabled = false;
};

	} // awt
} // java

#endif // _java_awt_ModalEventFilter_h_