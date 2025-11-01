#ifndef _java_awt_event_WindowAdapter_h_
#define _java_awt_event_WindowAdapter_h_
//$ class java.awt.event.WindowAdapter
//$ extends java.awt.event.WindowListener
//$ implements java.awt.event.WindowStateListener,java.awt.event.WindowFocusListener

#include <java/awt/event/WindowFocusListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/event/WindowStateListener.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export WindowAdapter : public ::java::awt::event::WindowListener, public ::java::awt::event::WindowStateListener, public ::java::awt::event::WindowFocusListener {
	$class(WindowAdapter, $NO_CLASS_INIT, ::java::awt::event::WindowListener, ::java::awt::event::WindowStateListener, ::java::awt::event::WindowFocusListener)
public:
	WindowAdapter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowGainedFocus(::java::awt::event::WindowEvent* e) override;
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowLostFocus(::java::awt::event::WindowEvent* e) override;
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
	virtual void windowStateChanged(::java::awt::event::WindowEvent* e) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_WindowAdapter_h_