#ifndef _java_awt_Container$WakingRunnable_h_
#define _java_awt_Container$WakingRunnable_h_
//$ class java.awt.Container$WakingRunnable
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {

class $import Container$WakingRunnable : public ::java::lang::Runnable {
	$class(Container$WakingRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Container$WakingRunnable();
	void init$();
	virtual void run() override;
};

	} // awt
} // java

#endif // _java_awt_Container$WakingRunnable_h_