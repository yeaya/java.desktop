#ifndef _com_apple_laf_AquaSpinnerUI$2_h_
#define _com_apple_laf_AquaSpinnerUI$2_h_
//$ class com.apple.laf.AquaSpinnerUI$2
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaSpinnerUI$2 : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaSpinnerUI$2, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaSpinnerUI$2();
	void init$();
	virtual $Object* getInstance() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSpinnerUI$2_h_