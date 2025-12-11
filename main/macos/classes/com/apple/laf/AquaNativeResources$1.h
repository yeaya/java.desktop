#ifndef _com_apple_laf_AquaNativeResources$1_h_
#define _com_apple_laf_AquaNativeResources$1_h_
//$ class com.apple.laf.AquaNativeResources$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaNativeResources$1 : public ::java::security::PrivilegedAction {
	$class(AquaNativeResources$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AquaNativeResources$1();
	void init$();
	virtual $Object* run() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaNativeResources$1_h_