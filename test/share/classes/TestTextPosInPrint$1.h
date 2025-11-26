#ifndef _TestTextPosInPrint$1_h_
#define _TestTextPosInPrint$1_h_
//$ class TestTextPosInPrint$1
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
		class JDialog;
	}
}

class TestTextPosInPrint$1 : public ::java::awt::event::WindowAdapter {
	$class(TestTextPosInPrint$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	TestTextPosInPrint$1();
	void init$(::javax::swing::JDialog* val$dialog);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::javax::swing::JDialog* val$dialog = nullptr;
};

#endif // _TestTextPosInPrint$1_h_