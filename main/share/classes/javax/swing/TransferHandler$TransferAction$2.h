#ifndef _javax_swing_TransferHandler$TransferAction$2_h_
#define _javax_swing_TransferHandler$TransferAction$2_h_
//$ class javax.swing.TransferHandler$TransferAction$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace javax {
	namespace swing {
		class TransferHandler$TransferAction;
	}
}

namespace javax {
	namespace swing {

class TransferHandler$TransferAction$2 : public ::java::security::PrivilegedAction {
	$class(TransferHandler$TransferAction$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	TransferHandler$TransferAction$2();
	void init$(::javax::swing::TransferHandler$TransferAction* this$0, ::java::security::PrivilegedAction* val$action, ::java::security::AccessControlContext* val$eventAcc);
	virtual $Object* run() override;
	::javax::swing::TransferHandler$TransferAction* this$0 = nullptr;
	::java::security::AccessControlContext* val$eventAcc = nullptr;
	::java::security::PrivilegedAction* val$action = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$TransferAction$2_h_