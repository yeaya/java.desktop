#ifndef _java_awt_DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_h_
#define _java_awt_DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_h_
//$ class java.awt.DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent
//$ extends java.awt.SentEvent

#include <java/awt/SentEvent.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace java {
	namespace awt {

class DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent : public ::java::awt::SentEvent {
	$class(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent, $NO_CLASS_INIT, ::java::awt::SentEvent)
public:
	DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent();
	void init$(::java::awt::AWTEvent* nested, ::sun::awt::AppContext* toNotify);
	virtual void dispatch() override;
	static const int64_t serialVersionUID = (int64_t)0xD7693980D4F999C2;
};

	} // awt
} // java

#endif // _java_awt_DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_h_