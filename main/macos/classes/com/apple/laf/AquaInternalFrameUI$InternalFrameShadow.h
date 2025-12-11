#ifndef _com_apple_laf_AquaInternalFrameUI$InternalFrameShadow_h_
#define _com_apple_laf_AquaInternalFrameUI$InternalFrameShadow_h_
//$ class com.apple.laf.AquaInternalFrameUI$InternalFrameShadow
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

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

class AquaInternalFrameUI$InternalFrameShadow : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaInternalFrameUI$InternalFrameShadow, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaInternalFrameUI$InternalFrameShadow();
	void init$();
	virtual ::javax::swing::border::Border* getBackgroundShadowBorder() {return nullptr;}
	virtual ::javax::swing::border::Border* getForegroundShadowBorder() {return nullptr;}
	virtual $Object* getInstance() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$InternalFrameShadow_h_