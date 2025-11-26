#ifndef _java_awt_dnd_DragSourceDropEvent_h_
#define _java_awt_dnd_DragSourceDropEvent_h_
//$ class java.awt.dnd.DragSourceDropEvent
//$ extends java.awt.dnd.DragSourceEvent

#include <java/awt/dnd/DragSourceEvent.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DragSourceContext;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $import DragSourceDropEvent : public ::java::awt::dnd::DragSourceEvent {
	$class(DragSourceDropEvent, $NO_CLASS_INIT, ::java::awt::dnd::DragSourceEvent)
public:
	DragSourceDropEvent();
	void init$(::java::awt::dnd::DragSourceContext* dsc, int32_t action, bool success);
	void init$(::java::awt::dnd::DragSourceContext* dsc, int32_t action, bool success, int32_t x, int32_t y);
	void init$(::java::awt::dnd::DragSourceContext* dsc);
	virtual int32_t getDropAction();
	virtual bool getDropSuccess();
	static const int64_t serialVersionUID = (int64_t)0xB2AEB0DC23CC91FD;
	bool dropSuccess = false;
	int32_t dropAction = 0;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragSourceDropEvent_h_