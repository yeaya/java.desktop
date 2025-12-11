#ifndef _com_apple_laf_AquaLookAndFeel$1_h_
#define _com_apple_laf_AquaLookAndFeel$1_h_
//$ class com.apple.laf.AquaLookAndFeel$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaLookAndFeel;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaLookAndFeel$1 : public ::java::security::PrivilegedAction {
	$class(AquaLookAndFeel$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AquaLookAndFeel$1();
	void init$(::com::apple::laf::AquaLookAndFeel* this$0);
	virtual $Object* run() override;
	::com::apple::laf::AquaLookAndFeel* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaLookAndFeel$1_h_