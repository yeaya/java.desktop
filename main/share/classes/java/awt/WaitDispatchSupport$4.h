#ifndef _java_awt_WaitDispatchSupport$4_h_
#define _java_awt_WaitDispatchSupport$4_h_
//$ class java.awt.WaitDispatchSupport$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class WaitDispatchSupport;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace java {
	namespace awt {

class WaitDispatchSupport$4 : public ::java::security::PrivilegedAction {
	$class(WaitDispatchSupport$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	WaitDispatchSupport$4();
	void init$(::java::awt::WaitDispatchSupport* this$0, ::java::lang::Runnable* val$run);
	virtual $Object* run() override;
	::java::awt::WaitDispatchSupport* this$0 = nullptr;
	::java::lang::Runnable* val$run = nullptr;
};

	} // awt
} // java

#endif // _java_awt_WaitDispatchSupport$4_h_