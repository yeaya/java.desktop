#ifndef _javax_swing_RepaintManager$2$1_h_
#define _javax_swing_RepaintManager$2$1_h_
//$ class javax.swing.RepaintManager$2$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		class RepaintManager$2;
	}
}

namespace javax {
	namespace swing {

class RepaintManager$2$1 : public ::java::security::PrivilegedAction {
	$class(RepaintManager$2$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RepaintManager$2$1();
	void init$(::javax::swing::RepaintManager$2* this$1);
	virtual $Object* run() override;
	::javax::swing::RepaintManager$2* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$2$1_h_