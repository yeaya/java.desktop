#ifndef _java_awt_event_FocusAdapter_h_
#define _java_awt_event_FocusAdapter_h_
//$ class java.awt.event.FocusAdapter
//$ extends java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import FocusAdapter : public ::java::awt::event::FocusListener {
	$class(FocusAdapter, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	FocusAdapter();
	void init$();
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_FocusAdapter_h_