#ifndef _javax_swing_RepaintManager$3_h_
#define _javax_swing_RepaintManager$3_h_
//$ class javax.swing.RepaintManager$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class RepaintManager;
	}
}

namespace javax {
	namespace swing {

class RepaintManager$3 : public ::java::security::PrivilegedAction {
	$class(RepaintManager$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RepaintManager$3();
	void init$(::javax::swing::RepaintManager* this$0, ::java::awt::Component* val$c);
	virtual $Object* run() override;
	::javax::swing::RepaintManager* this$0 = nullptr;
	::java::awt::Component* val$c = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$3_h_