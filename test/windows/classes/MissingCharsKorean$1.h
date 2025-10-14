#ifndef _MissingCharsKorean$1_h_
#define _MissingCharsKorean$1_h_
//$ class MissingCharsKorean$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

class MissingCharsKorean$1 : public ::java::awt::event::WindowAdapter {
	$class(MissingCharsKorean$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	MissingCharsKorean$1();
	void init$();
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
};

#endif // _MissingCharsKorean$1_h_