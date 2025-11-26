#ifndef _java_awt_WaitDispatchSupport$1_h_
#define _java_awt_WaitDispatchSupport$1_h_
//$ class java.awt.WaitDispatchSupport$1
//$ extends java.awt.Conditional

#include <java/awt/Conditional.h>

namespace java {
	namespace awt {
		class WaitDispatchSupport;
	}
}

namespace java {
	namespace awt {

class WaitDispatchSupport$1 : public ::java::awt::Conditional {
	$class(WaitDispatchSupport$1, $NO_CLASS_INIT, ::java::awt::Conditional)
public:
	WaitDispatchSupport$1();
	void init$(::java::awt::WaitDispatchSupport* this$0);
	virtual bool evaluate() override;
	::java::awt::WaitDispatchSupport* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_WaitDispatchSupport$1_h_