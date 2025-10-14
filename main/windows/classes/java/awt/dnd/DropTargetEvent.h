#ifndef _java_awt_dnd_DropTargetEvent_h_
#define _java_awt_dnd_DropTargetEvent_h_
//$ class java.awt.dnd.DropTargetEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetContext;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $export DropTargetEvent : public ::java::util::EventObject {
	$class(DropTargetEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	DropTargetEvent();
	void init$(::java::awt::dnd::DropTargetContext* dtc);
	virtual ::java::awt::dnd::DropTargetContext* getDropTargetContext();
	static const int64_t serialVersionUID = (int64_t)0x272704E3740BCDB1;
	::java::awt::dnd::DropTargetContext* context = nullptr;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTargetEvent_h_