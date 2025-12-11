#ifndef _com_apple_laf_AquaImageFactory$2_h_
#define _com_apple_laf_AquaImageFactory$2_h_
//$ class com.apple.laf.AquaImageFactory$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$2 : public ::java::security::PrivilegedAction {
	$class(AquaImageFactory$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AquaImageFactory$2();
	void init$();
	virtual $Object* run() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$2_h_