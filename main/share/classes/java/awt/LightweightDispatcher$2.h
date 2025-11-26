#ifndef _java_awt_LightweightDispatcher$2_h_
#define _java_awt_LightweightDispatcher$2_h_
//$ class java.awt.LightweightDispatcher$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class LightweightDispatcher;
	}
}

namespace java {
	namespace awt {

class LightweightDispatcher$2 : public ::java::security::PrivilegedAction {
	$class(LightweightDispatcher$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	LightweightDispatcher$2();
	void init$(::java::awt::LightweightDispatcher* this$0);
	virtual $Object* run() override;
	::java::awt::LightweightDispatcher* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_LightweightDispatcher$2_h_