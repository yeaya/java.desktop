#ifndef _GUIZoomFrame$2_h_
#define _GUIZoomFrame$2_h_
//$ class GUIZoomFrame$2
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

class GUIZoomFrame;
namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class GUIZoomFrame$2 : public ::java::awt::event::WindowAdapter {
	$class(GUIZoomFrame$2, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	GUIZoomFrame$2();
	void init$(::GUIZoomFrame* this$0);
	virtual void windowStateChanged(::java::awt::event::WindowEvent* e) override;
	::GUIZoomFrame* this$0 = nullptr;
};

#endif // _GUIZoomFrame$2_h_