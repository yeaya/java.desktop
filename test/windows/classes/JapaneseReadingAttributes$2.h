#ifndef _JapaneseReadingAttributes$2_h_
#define _JapaneseReadingAttributes$2_h_
//$ class JapaneseReadingAttributes$2
//$ extends java.awt.event.InputMethodListener

#include <java/awt/event/InputMethodListener.h>

namespace java {
	namespace awt {
		namespace event {
			class InputMethodEvent;
		}
	}
}

class JapaneseReadingAttributes$2 : public ::java::awt::event::InputMethodListener {
	$class(JapaneseReadingAttributes$2, $NO_CLASS_INIT, ::java::awt::event::InputMethodListener)
public:
	JapaneseReadingAttributes$2();
	void init$();
	virtual void caretPositionChanged(::java::awt::event::InputMethodEvent* event) override;
	virtual void inputMethodTextChanged(::java::awt::event::InputMethodEvent* event) override;
};

#endif // _JapaneseReadingAttributes$2_h_