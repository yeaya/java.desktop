#ifndef _java_awt_event_ComponentAdapter_h_
#define _java_awt_event_ComponentAdapter_h_
//$ class java.awt.event.ComponentAdapter
//$ extends java.awt.event.ComponentListener

#include <java/awt/event/ComponentListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export ComponentAdapter : public ::java::awt::event::ComponentListener {
	$class(ComponentAdapter, $NO_CLASS_INIT, ::java::awt::event::ComponentListener)
public:
	ComponentAdapter();
	void init$();
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_ComponentAdapter_h_