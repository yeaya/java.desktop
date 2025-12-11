#ifndef _com_apple_laf_AquaIcon$SystemIconSingleton_h_
#define _com_apple_laf_AquaIcon$SystemIconSingleton_h_
//$ class com.apple.laf.AquaIcon$SystemIconSingleton
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaIcon$SystemIconSingleton : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaIcon$SystemIconSingleton, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaIcon$SystemIconSingleton();
	void init$($String* selector);
	virtual $Object* getInstance() override;
	$String* selector = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$SystemIconSingleton_h_