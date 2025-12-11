#ifndef _com_apple_laf_AquaImageFactory$IconUIResourceSingleton_h_
#define _com_apple_laf_AquaImageFactory$IconUIResourceSingleton_h_
//$ class com.apple.laf.AquaImageFactory$IconUIResourceSingleton
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaImageFactory$NamedImageSingleton;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$IconUIResourceSingleton : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaImageFactory$IconUIResourceSingleton, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaImageFactory$IconUIResourceSingleton();
	void init$(::com::apple::laf::AquaImageFactory$NamedImageSingleton* holder);
	virtual $Object* getInstance() override;
	::com::apple::laf::AquaImageFactory$NamedImageSingleton* holder = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$IconUIResourceSingleton_h_