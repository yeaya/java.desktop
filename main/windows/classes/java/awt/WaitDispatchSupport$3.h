#ifndef _java_awt_WaitDispatchSupport$3_h_
#define _java_awt_WaitDispatchSupport$3_h_
//$ class java.awt.WaitDispatchSupport$3
//$ extends java.util.TimerTask

#include <java/util/TimerTask.h>

namespace java {
	namespace awt {
		class WaitDispatchSupport;
	}
}

namespace java {
	namespace awt {

class WaitDispatchSupport$3 : public ::java::util::TimerTask {
	$class(WaitDispatchSupport$3, $NO_CLASS_INIT, ::java::util::TimerTask)
public:
	WaitDispatchSupport$3();
	void init$(::java::awt::WaitDispatchSupport* this$0);
	virtual void run() override;
	::java::awt::WaitDispatchSupport* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_WaitDispatchSupport$3_h_