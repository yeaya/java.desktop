#ifndef _GUIUndFrame$1_h_
#define _GUIUndFrame$1_h_
//$ class GUIUndFrame$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

class GUIUndFrame;
namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class GUIUndFrame$1 : public ::java::awt::event::WindowAdapter {
	$class(GUIUndFrame$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	GUIUndFrame$1();
	void init$(::GUIUndFrame* this$0);
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	::GUIUndFrame* this$0 = nullptr;
};

#endif // _GUIUndFrame$1_h_