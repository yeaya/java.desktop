#ifndef _com_apple_laf_AquaImageFactory$RecyclableSlicedImageControl_h_
#define _com_apple_laf_AquaImageFactory$RecyclableSlicedImageControl_h_
//$ class com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl
//$ extends com.apple.laf.AquaUtils$RecyclableObject

#include <com/apple/laf/AquaUtils$RecyclableObject.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaImageFactory$NineSliceMetrics;
		}
	}
}
namespace java {
	namespace awt {
		class Image;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$RecyclableSlicedImageControl : public ::com::apple::laf::AquaUtils$RecyclableObject {
	$class(AquaImageFactory$RecyclableSlicedImageControl, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableObject)
public:
	AquaImageFactory$RecyclableSlicedImageControl();
	void init$(::com::apple::laf::AquaImageFactory$NineSliceMetrics* metrics);
	virtual $Object* create() override;
	virtual ::java::awt::Image* createTemplateImage(int32_t width, int32_t height) {return nullptr;}
	::com::apple::laf::AquaImageFactory$NineSliceMetrics* metrics = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$RecyclableSlicedImageControl_h_