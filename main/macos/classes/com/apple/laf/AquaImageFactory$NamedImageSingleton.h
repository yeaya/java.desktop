#ifndef _com_apple_laf_AquaImageFactory$NamedImageSingleton_h_
#define _com_apple_laf_AquaImageFactory$NamedImageSingleton_h_
//$ class com.apple.laf.AquaImageFactory$NamedImageSingleton
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$NamedImageSingleton : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaImageFactory$NamedImageSingleton, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaImageFactory$NamedImageSingleton();
	void init$($String* namedImage);
	virtual $Object* getInstance() override;
	$String* namedImage = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$NamedImageSingleton_h_