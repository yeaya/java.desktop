#ifndef _com_apple_laf_AquaLookAndFeel$2_h_
#define _com_apple_laf_AquaLookAndFeel$2_h_
//$ class com.apple.laf.AquaLookAndFeel$2
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

class AquaLookAndFeel$2 : public ::java::security::PrivilegedAction {
	$class(AquaLookAndFeel$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AquaLookAndFeel$2();
	void init$(::com::apple::laf::AquaLookAndFeel* this$0);
	virtual $Object* run() override;
	::com::apple::laf::AquaLookAndFeel* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaLookAndFeel$2_h_