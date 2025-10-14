#ifndef _GUIUndFrame$2_h_
#define _GUIUndFrame$2_h_
//$ class GUIUndFrame$2
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

class GUIUndFrame$2 : public ::java::awt::event::WindowAdapter {
	$class(GUIUndFrame$2, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	GUIUndFrame$2();
	void init$(::GUIUndFrame* this$0);
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	::GUIUndFrame* this$0 = nullptr;
};

#endif // _GUIUndFrame$2_h_