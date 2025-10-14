#ifndef _java_awt_dnd_DragSourceEvent_h_
#define _java_awt_dnd_DragSourceEvent_h_
//$ class java.awt.dnd.DragSourceEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace awt {
		class Point;
	}
}
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

class $import DragSourceEvent : public ::java::util::EventObject {
	$class(DragSourceEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	DragSourceEvent();
	void init$(::java::awt::dnd::DragSourceContext* dsc);
	void init$(::java::awt::dnd::DragSourceContext* dsc, int32_t x, int32_t y);
	virtual ::java::awt::dnd::DragSourceContext* getDragSourceContext();
	virtual ::java::awt::Point* getLocation();
	virtual int32_t getX();
	virtual int32_t getY();
	static const int64_t serialVersionUID = (int64_t)0xF5684269D064CD7F;
	bool locationSpecified = false;
	int32_t x = 0;
	int32_t y = 0;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragSourceEvent_h_