#ifndef _sun_awt_FwDispatcher_h_
#define _sun_awt_FwDispatcher_h_
//$ interface sun.awt.FwDispatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class SecondaryLoop;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace sun {
	namespace awt {

class $import FwDispatcher : public ::java::lang::Object {
	$interface(FwDispatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::SecondaryLoop* createSecondaryLoop() {return nullptr;}
	virtual bool isDispatchThread() {return false;}
	virtual void scheduleDispatch(::java::lang::Runnable* r) {}
};

	} // awt
} // sun

#endif // _sun_awt_FwDispatcher_h_