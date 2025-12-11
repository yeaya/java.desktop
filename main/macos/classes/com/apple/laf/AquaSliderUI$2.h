#ifndef _com_apple_laf_AquaSliderUI$2_h_
#define _com_apple_laf_AquaSliderUI$2_h_
//$ class com.apple.laf.AquaSliderUI$2
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaSliderUI$2 : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaSliderUI$2, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaSliderUI$2();
	void init$();
	virtual $Object* getInstance() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSliderUI$2_h_