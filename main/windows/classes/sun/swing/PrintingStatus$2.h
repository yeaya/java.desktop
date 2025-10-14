#ifndef _sun_swing_PrintingStatus$2_h_
#define _sun_swing_PrintingStatus$2_h_
//$ class sun.swing.PrintingStatus$2
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace sun {
	namespace swing {
		class PrintingStatus;
	}
}

namespace sun {
	namespace swing {

class PrintingStatus$2 : public ::java::awt::event::WindowAdapter {
	$class(PrintingStatus$2, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	PrintingStatus$2();
	void init$(::sun::swing::PrintingStatus* this$0);
	virtual void windowClosing(::java::awt::event::WindowEvent* we) override;
	::sun::swing::PrintingStatus* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_PrintingStatus$2_h_