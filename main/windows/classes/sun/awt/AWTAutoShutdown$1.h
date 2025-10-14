#ifndef _sun_awt_AWTAutoShutdown$1_h_
#define _sun_awt_AWTAutoShutdown$1_h_
//$ class sun.awt.AWTAutoShutdown$1
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

namespace sun {
	namespace awt {

class AWTAutoShutdown$1 : public ::java::awt::AWTEvent {
	$class(AWTAutoShutdown$1, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	AWTAutoShutdown$1();
	void init$(Object$* source, int32_t id);
};

	} // awt
} // sun

#endif // _sun_awt_AWTAutoShutdown$1_h_