#ifndef _sun_awt_SunToolkit$3_h_
#define _sun_awt_SunToolkit$3_h_
//$ class sun.awt.SunToolkit$3
//$ extends sun.awt.PeerEvent

#include <sun/awt/PeerEvent.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace sun {
	namespace awt {
		class SunToolkit;
	}
}

namespace sun {
	namespace awt {

class SunToolkit$3 : public ::sun::awt::PeerEvent {
	$class(SunToolkit$3, $NO_CLASS_INIT, ::sun::awt::PeerEvent)
public:
	SunToolkit$3();
	void init$(::sun::awt::SunToolkit* this$0, Object$* source, ::java::lang::Runnable* runnable, int64_t flags, int64_t val$end, ::java::util::concurrent::atomic::AtomicBoolean* val$queueEmpty, ::java::util::concurrent::atomic::AtomicBoolean* val$eventDispatched);
	virtual void dispatch() override;
	::sun::awt::SunToolkit* this$0 = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* val$eventDispatched = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* val$queueEmpty = nullptr;
	int64_t val$end = 0;
};

	} // awt
} // sun

#endif // _sun_awt_SunToolkit$3_h_