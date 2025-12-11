#ifndef _com_apple_laf_AquaImageFactory$3_h_
#define _com_apple_laf_AquaImageFactory$3_h_
//$ class com.apple.laf.AquaImageFactory$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$3 : public ::java::security::PrivilegedAction {
	$class(AquaImageFactory$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AquaImageFactory$3();
	void init$();
	virtual $Object* run() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$3_h_