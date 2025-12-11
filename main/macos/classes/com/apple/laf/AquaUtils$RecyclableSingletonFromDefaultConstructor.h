#ifndef _com_apple_laf_AquaUtils$RecyclableSingletonFromDefaultConstructor_h_
#define _com_apple_laf_AquaUtils$RecyclableSingletonFromDefaultConstructor_h_
//$ class com.apple.laf.AquaUtils$RecyclableSingletonFromDefaultConstructor
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$RecyclableSingletonFromDefaultConstructor : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaUtils$RecyclableSingletonFromDefaultConstructor, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaUtils$RecyclableSingletonFromDefaultConstructor();
	void init$($Class* clazz);
	virtual $Object* getInstance() override;
	$Class* clazz = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$RecyclableSingletonFromDefaultConstructor_h_