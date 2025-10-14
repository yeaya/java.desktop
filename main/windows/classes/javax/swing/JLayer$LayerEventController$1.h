#ifndef _javax_swing_JLayer$LayerEventController$1_h_
#define _javax_swing_JLayer$LayerEventController$1_h_
//$ class javax.swing.JLayer$LayerEventController$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		class JLayer$LayerEventController;
	}
}

namespace javax {
	namespace swing {

class JLayer$LayerEventController$1 : public ::java::security::PrivilegedAction {
	$class(JLayer$LayerEventController$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JLayer$LayerEventController$1();
	void init$(::javax::swing::JLayer$LayerEventController* this$0, int64_t val$eventMask);
	virtual $Object* run() override;
	::javax::swing::JLayer$LayerEventController* this$0 = nullptr;
	int64_t val$eventMask = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JLayer$LayerEventController$1_h_