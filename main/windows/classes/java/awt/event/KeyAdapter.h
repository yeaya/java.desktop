#ifndef _java_awt_event_KeyAdapter_h_
#define _java_awt_event_KeyAdapter_h_
//$ class java.awt.event.KeyAdapter
//$ extends java.awt.event.KeyListener

#include <java/awt/event/KeyListener.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export KeyAdapter : public ::java::awt::event::KeyListener {
	$class(KeyAdapter, $NO_CLASS_INIT, ::java::awt::event::KeyListener)
public:
	KeyAdapter();
	void init$();
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	virtual void keyTyped(::java::awt::event::KeyEvent* e) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_KeyAdapter_h_