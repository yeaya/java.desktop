#ifndef _com_apple_laf_AquaIcon$1_h_
#define _com_apple_laf_AquaIcon$1_h_
//$ class com.apple.laf.AquaIcon$1
//$ extends com.apple.laf.AquaIcon$ScalingJRSUIIcon

#include <com/apple/laf/AquaIcon$ScalingJRSUIIcon.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaIcon$JRSUIControlSpec;
			class AquaPainter;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaIcon$1 : public ::com::apple::laf::AquaIcon$ScalingJRSUIIcon {
	$class(AquaIcon$1, $NO_CLASS_INIT, ::com::apple::laf::AquaIcon$ScalingJRSUIIcon)
public:
	AquaIcon$1();
	void init$(int32_t width, int32_t height, ::com::apple::laf::AquaIcon$JRSUIControlSpec* val$spec);
	virtual void initIconPainter(::com::apple::laf::AquaPainter* painter) override;
	::com::apple::laf::AquaIcon$JRSUIControlSpec* val$spec = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$1_h_