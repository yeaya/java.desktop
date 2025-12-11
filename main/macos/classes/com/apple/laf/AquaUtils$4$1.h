#ifndef _com_apple_laf_AquaUtils$4$1_h_
#define _com_apple_laf_AquaUtils$4$1_h_
//$ class com.apple.laf.AquaUtils$4$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$4;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$4$1 : public ::java::security::PrivilegedAction {
	$class(AquaUtils$4$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AquaUtils$4$1();
	void init$(::com::apple::laf::AquaUtils$4* this$0);
	virtual $Object* run() override;
	::com::apple::laf::AquaUtils$4* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$4$1_h_