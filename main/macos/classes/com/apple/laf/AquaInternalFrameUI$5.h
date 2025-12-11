#ifndef _com_apple_laf_AquaInternalFrameUI$5_h_
#define _com_apple_laf_AquaInternalFrameUI$5_h_
//$ class com.apple.laf.AquaInternalFrameUI$5
//$ extends com.apple.laf.AquaInternalFrameUI$InternalFrameShadow

#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow.h>

namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameUI$5 : public ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow {
	$class(AquaInternalFrameUI$5, $NO_CLASS_INIT, ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow)
public:
	AquaInternalFrameUI$5();
	void init$();
	virtual ::javax::swing::border::Border* getBackgroundShadowBorder() override;
	virtual ::javax::swing::border::Border* getForegroundShadowBorder() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$5_h_