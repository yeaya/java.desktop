#ifndef _com_apple_laf_AquaImageFactory$4_h_
#define _com_apple_laf_AquaImageFactory$4_h_
//$ class com.apple.laf.AquaImageFactory$4
//$ extends com.apple.laf.AquaIcon$CachingScalingIcon

#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>

namespace java {
	namespace awt {
		class Image;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$4 : public ::com::apple::laf::AquaIcon$CachingScalingIcon {
	$class(AquaImageFactory$4, $NO_CLASS_INIT, ::com::apple::laf::AquaIcon$CachingScalingIcon)
public:
	AquaImageFactory$4();
	void init$(int32_t width, int32_t height);
	virtual ::java::awt::Image* createImage() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$4_h_