#ifndef _javax_swing_JLayer$LayerEventController$2_h_
#define _javax_swing_JLayer$LayerEventController$2_h_
//$ class javax.swing.JLayer$LayerEventController$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		class JLayer$LayerEventController;
	}
}

namespace javax {
	namespace swing {

class JLayer$LayerEventController$2 : public ::java::security::PrivilegedAction {
	$class(JLayer$LayerEventController$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JLayer$LayerEventController$2();
	void init$(::javax::swing::JLayer$LayerEventController* this$0);
	virtual $Object* run() override;
	::javax::swing::JLayer$LayerEventController* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JLayer$LayerEventController$2_h_