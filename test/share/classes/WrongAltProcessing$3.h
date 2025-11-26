#ifndef _WrongAltProcessing$3_h_
#define _WrongAltProcessing$3_h_
//$ class WrongAltProcessing$3
//$ extends java.awt.event.KeyAdapter

#include <java/awt/event/KeyAdapter.h>

#pragma push_macro("EVT")
#undef EVT

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

class WrongAltProcessing$3 : public ::java::awt::event::KeyAdapter {
	$class(WrongAltProcessing$3, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter)
public:
	WrongAltProcessing$3();
	void init$();
	virtual void keyPressed(::java::awt::event::KeyEvent* EVT) override;
};

#pragma pop_macro("EVT")

#endif // _WrongAltProcessing$3_h_