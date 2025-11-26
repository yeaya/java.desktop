#ifndef _javax_swing_plaf_basic_BasicPopupMenuUI$MouseGrabber$1_h_
#define _javax_swing_plaf_basic_BasicPopupMenuUI$MouseGrabber$1_h_
//$ class javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class Toolkit;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicPopupMenuUI$MouseGrabber;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicPopupMenuUI$MouseGrabber$1 : public ::java::security::PrivilegedAction {
	$class(BasicPopupMenuUI$MouseGrabber$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BasicPopupMenuUI$MouseGrabber$1();
	void init$(::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber* this$0, ::java::awt::Toolkit* val$tk);
	virtual $Object* run() override;
	::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber* this$0 = nullptr;
	::java::awt::Toolkit* val$tk = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicPopupMenuUI$MouseGrabber$1_h_