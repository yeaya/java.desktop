#ifndef _RepaintManagerFPUIScaleTest$1_h_
#define _RepaintManagerFPUIScaleTest$1_h_
//$ class RepaintManagerFPUIScaleTest$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class RepaintManagerFPUIScaleTest$1 : public ::java::awt::event::ActionListener {
	$class(RepaintManagerFPUIScaleTest$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	RepaintManagerFPUIScaleTest$1();
	void init$(::javax::swing::JFrame* val$mainFrame);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::JFrame* val$mainFrame = nullptr;
};

#endif // _RepaintManagerFPUIScaleTest$1_h_