#ifndef _javax_swing_Timer$1_h_
#define _javax_swing_Timer$1_h_
//$ class javax.swing.Timer$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		class Timer;
	}
}

namespace javax {
	namespace swing {

class Timer$1 : public ::java::security::PrivilegedAction {
	$class(Timer$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Timer$1();
	void init$(::javax::swing::Timer* this$0);
	virtual $Object* run() override;
	::javax::swing::Timer* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Timer$1_h_