#ifndef _com_apple_laf_AquaButtonRadioUI$1_h_
#define _com_apple_laf_AquaButtonRadioUI$1_h_
//$ class com.apple.laf.AquaButtonRadioUI$1
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonRadioUI$1 : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaButtonRadioUI$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaButtonRadioUI$1();
	void init$();
	virtual $Object* getInstance() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonRadioUI$1_h_