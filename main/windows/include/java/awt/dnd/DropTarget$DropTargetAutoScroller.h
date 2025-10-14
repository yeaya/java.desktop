#ifndef _java_awt_dnd_DropTarget$DropTargetAutoScroller_h_
#define _java_awt_dnd_DropTarget$DropTargetAutoScroller_h_
//$ class java.awt.dnd.DropTarget$DropTargetAutoScroller
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class Autoscroll;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class Timer;
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $import DropTarget$DropTargetAutoScroller : public ::java::awt::event::ActionListener {
	$class(DropTarget$DropTargetAutoScroller, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	DropTarget$DropTargetAutoScroller();
	void init$(::java::awt::Component* c, ::java::awt::Point* p);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void stop();
	virtual void updateLocation(::java::awt::Point* newLocn);
	void updateRegion();
	::java::awt::Component* component = nullptr;
	::java::awt::dnd::Autoscroll* autoScroll = nullptr;
	::javax::swing::Timer* timer = nullptr;
	::java::awt::Point* locn = nullptr;
	::java::awt::Point* prev = nullptr;
	::java::awt::Rectangle* outer = nullptr;
	::java::awt::Rectangle* inner = nullptr;
	int32_t hysteresis = 0;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTarget$DropTargetAutoScroller_h_