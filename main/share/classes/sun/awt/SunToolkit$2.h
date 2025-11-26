#ifndef _sun_awt_SunToolkit$2_h_
#define _sun_awt_SunToolkit$2_h_
//$ class sun.awt.SunToolkit$2
//$ extends sun.awt.PeerEvent

#include <sun/awt/PeerEvent.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace sun {
	namespace awt {

class SunToolkit$2 : public ::sun::awt::PeerEvent {
	$class(SunToolkit$2, $NO_CLASS_INIT, ::sun::awt::PeerEvent)
public:
	SunToolkit$2();
	void init$(Object$* source, ::java::lang::Runnable* runnable, int64_t flags, int64_t val$when);
	virtual int64_t getWhen() override;
	int64_t val$when = 0;
};

	} // awt
} // sun

#endif // _sun_awt_SunToolkit$2_h_