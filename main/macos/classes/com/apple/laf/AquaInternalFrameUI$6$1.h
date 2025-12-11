#ifndef _com_apple_laf_AquaInternalFrameUI$6$1_h_
#define _com_apple_laf_AquaInternalFrameUI$6$1_h_
//$ class com.apple.laf.AquaInternalFrameUI$6$1
//$ extends com.apple.laf.AquaIcon$ScalingJRSUIIcon

#include <com/apple/laf/AquaIcon$ScalingJRSUIIcon.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameUI$6;
			class AquaPainter;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameUI$6$1 : public ::com::apple::laf::AquaIcon$ScalingJRSUIIcon {
	$class(AquaInternalFrameUI$6$1, $NO_CLASS_INIT, ::com::apple::laf::AquaIcon$ScalingJRSUIIcon)
public:
	AquaInternalFrameUI$6$1();
	void init$(::com::apple::laf::AquaInternalFrameUI$6* this$0, int32_t width, int32_t height);
	virtual void initIconPainter(::com::apple::laf::AquaPainter* iconState) override;
	::com::apple::laf::AquaInternalFrameUI$6* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$6$1_h_