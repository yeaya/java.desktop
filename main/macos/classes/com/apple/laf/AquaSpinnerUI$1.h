#ifndef _com_apple_laf_AquaSpinnerUI$1_h_
#define _com_apple_laf_AquaSpinnerUI$1_h_
//$ class com.apple.laf.AquaSpinnerUI$1
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaSpinnerUI$1 : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaSpinnerUI$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaSpinnerUI$1();
	void init$();
	virtual $Object* getInstance() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSpinnerUI$1_h_