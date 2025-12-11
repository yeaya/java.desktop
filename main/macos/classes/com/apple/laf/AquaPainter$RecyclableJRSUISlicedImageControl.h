#ifndef _com_apple_laf_AquaPainter$RecyclableJRSUISlicedImageControl_h_
#define _com_apple_laf_AquaPainter$RecyclableJRSUISlicedImageControl_h_
//$ class com.apple.laf.AquaPainter$RecyclableJRSUISlicedImageControl
//$ extends com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl

#include <com/apple/laf/AquaImageFactory$RecyclableSlicedImageControl.h>

namespace apple {
	namespace laf {
		class JRSUIControl;
		class JRSUIState;
	}
}
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

class AquaPainter$RecyclableJRSUISlicedImageControl : public ::com::apple::laf::AquaImageFactory$RecyclableSlicedImageControl {
	$class(AquaPainter$RecyclableJRSUISlicedImageControl, $NO_CLASS_INIT, ::com::apple::laf::AquaImageFactory$RecyclableSlicedImageControl)
public:
	AquaPainter$RecyclableJRSUISlicedImageControl();
	void init$(::apple::laf::JRSUIControl* control, ::apple::laf::JRSUIState* state, ::com::apple::laf::AquaImageFactory$NineSliceMetrics* metrics);
	virtual ::java::awt::Image* createTemplateImage(int32_t width, int32_t height) override;
	::apple::laf::JRSUIControl* control = nullptr;
	::apple::laf::JRSUIState* state = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaPainter$RecyclableJRSUISlicedImageControl_h_