#ifndef _javax_swing_TransferHandler$TransferAction$1_h_
#define _javax_swing_TransferHandler$TransferAction$1_h_
//$ class javax.swing.TransferHandler$TransferAction$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class TransferHandler$TransferAction;
	}
}

namespace javax {
	namespace swing {

class TransferHandler$TransferAction$1 : public ::java::security::PrivilegedAction {
	$class(TransferHandler$TransferAction$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	TransferHandler$TransferAction$1();
	void init$(::javax::swing::TransferHandler$TransferAction* this$0, ::java::awt::event::ActionEvent* val$e);
	virtual $Object* run() override;
	::javax::swing::TransferHandler$TransferAction* this$0 = nullptr;
	::java::awt::event::ActionEvent* val$e = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$TransferAction$1_h_