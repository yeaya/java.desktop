#ifndef _MotifHiDPIIconsTest$2_h_
#define _MotifHiDPIIconsTest$2_h_
//$ class MotifHiDPIIconsTest$2
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class MotifHiDPIIconsTest$2 : public ::java::awt::event::WindowAdapter {
	$class(MotifHiDPIIconsTest$2, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	MotifHiDPIIconsTest$2();
	void init$(::javax::swing::JFrame* val$mainFrame);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::javax::swing::JFrame* val$mainFrame = nullptr;
};

#endif // _MotifHiDPIIconsTest$2_h_