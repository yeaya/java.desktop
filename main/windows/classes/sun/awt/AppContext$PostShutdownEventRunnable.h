#ifndef _sun_awt_AppContext$PostShutdownEventRunnable_h_
#define _sun_awt_AppContext$PostShutdownEventRunnable_h_
//$ class sun.awt.AppContext$PostShutdownEventRunnable
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {

class $export AppContext$PostShutdownEventRunnable : public ::java::lang::Runnable {
	$class(AppContext$PostShutdownEventRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AppContext$PostShutdownEventRunnable();
	void init$(::sun::awt::AppContext* ac);
	virtual void run() override;
	::sun::awt::AppContext* appContext = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$PostShutdownEventRunnable_h_