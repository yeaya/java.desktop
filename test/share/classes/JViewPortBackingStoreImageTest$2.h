#ifndef _JViewPortBackingStoreImageTest$2_h_
#define _JViewPortBackingStoreImageTest$2_h_
//$ class JViewPortBackingStoreImageTest$2
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

class JViewPortBackingStoreImageTest$2 : public ::java::awt::event::WindowAdapter {
	$class(JViewPortBackingStoreImageTest$2, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	JViewPortBackingStoreImageTest$2();
	void init$(::javax::swing::JFrame* val$mainFrame);
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::javax::swing::JFrame* val$mainFrame = nullptr;
};

#endif // _JViewPortBackingStoreImageTest$2_h_