#ifndef _javax_swing_plaf_basic_BasicLookAndFeel$3_h_
#define _javax_swing_plaf_basic_BasicLookAndFeel$3_h_
//$ class javax.swing.plaf.basic.BasicLookAndFeel$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicLookAndFeel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicLookAndFeel$3 : public ::java::security::PrivilegedAction {
	$class(BasicLookAndFeel$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BasicLookAndFeel$3();
	void init$(::javax::swing::plaf::basic::BasicLookAndFeel* this$0, $String* val$soundFile);
	virtual $Object* run() override;
	::javax::swing::plaf::basic::BasicLookAndFeel* this$0 = nullptr;
	$String* val$soundFile = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicLookAndFeel$3_h_