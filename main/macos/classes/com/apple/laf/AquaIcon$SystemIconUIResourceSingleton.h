#ifndef _com_apple_laf_AquaIcon$SystemIconUIResourceSingleton_h_
#define _com_apple_laf_AquaIcon$SystemIconUIResourceSingleton_h_
//$ class com.apple.laf.AquaIcon$SystemIconUIResourceSingleton
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaIcon$SystemIconUIResourceSingleton : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaIcon$SystemIconUIResourceSingleton, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaIcon$SystemIconUIResourceSingleton();
	void init$($String* selector);
	virtual $Object* getInstance() override;
	$String* selector = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$SystemIconUIResourceSingleton_h_