#ifndef _com_apple_laf_AquaInternalFrameUI$4_h_
#define _com_apple_laf_AquaInternalFrameUI$4_h_
//$ class com.apple.laf.AquaInternalFrameUI$4
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

class AquaInternalFrameUI$4 : public ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow {
	$class(AquaInternalFrameUI$4, $NO_CLASS_INIT, ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow)
public:
	AquaInternalFrameUI$4();
	void init$();
	virtual ::javax::swing::border::Border* getBackgroundShadowBorder() override;
	virtual ::javax::swing::border::Border* getForegroundShadowBorder() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$4_h_