#ifndef _com_apple_laf_AquaProgressBarUI$1_h_
#define _com_apple_laf_AquaProgressBarUI$1_h_
//$ class com.apple.laf.AquaProgressBarUI$1
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaProgressBarUI$1 : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaProgressBarUI$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaProgressBarUI$1();
	void init$();
	virtual $Object* getInstance() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaProgressBarUI$1_h_