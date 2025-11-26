#ifndef _java_awt_WaitDispatchSupport$5_h_
#define _java_awt_WaitDispatchSupport$5_h_
//$ class java.awt.WaitDispatchSupport$5
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class WaitDispatchSupport;
	}
}

namespace java {
	namespace awt {

class WaitDispatchSupport$5 : public ::java::lang::Runnable {
	$class(WaitDispatchSupport$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WaitDispatchSupport$5();
	void init$(::java::awt::WaitDispatchSupport* this$0);
	virtual void run() override;
	::java::awt::WaitDispatchSupport* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_WaitDispatchSupport$5_h_