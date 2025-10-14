#ifndef _java_awt_WaitDispatchSupport$2_h_
#define _java_awt_WaitDispatchSupport$2_h_
//$ class java.awt.WaitDispatchSupport$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class WaitDispatchSupport;
	}
}

namespace java {
	namespace awt {

class WaitDispatchSupport$2 : public ::java::lang::Runnable {
	$class(WaitDispatchSupport$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WaitDispatchSupport$2();
	void init$(::java::awt::WaitDispatchSupport* this$0);
	virtual void run() override;
	::java::awt::WaitDispatchSupport* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_WaitDispatchSupport$2_h_