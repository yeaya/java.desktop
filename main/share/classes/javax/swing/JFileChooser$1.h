#ifndef _javax_swing_JFileChooser$1_h_
#define _javax_swing_JFileChooser$1_h_
//$ class javax.swing.JFileChooser$1
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
		class JFileChooser;
	}
}

namespace javax {
	namespace swing {

class JFileChooser$1 : public ::java::awt::event::WindowAdapter {
	$class(JFileChooser$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	JFileChooser$1();
	void init$(::javax::swing::JFileChooser* this$0);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::javax::swing::JFileChooser* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JFileChooser$1_h_