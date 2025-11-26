#ifndef _TitledBorderLabel$1_h_
#define _TitledBorderLabel$1_h_
//$ class TitledBorderLabel$1
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

class TitledBorderLabel$1 : public ::java::awt::event::WindowAdapter {
	$class(TitledBorderLabel$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	TitledBorderLabel$1();
	void init$(::javax::swing::JDialog* val$dialog);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::javax::swing::JDialog* val$dialog = nullptr;
};

#endif // _TitledBorderLabel$1_h_