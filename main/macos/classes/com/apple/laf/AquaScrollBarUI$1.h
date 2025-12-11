#ifndef _com_apple_laf_AquaScrollBarUI$1_h_
#define _com_apple_laf_AquaScrollBarUI$1_h_
//$ class com.apple.laf.AquaScrollBarUI$1
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaScrollBarUI$1 : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaScrollBarUI$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaScrollBarUI$1();
	void init$();
	virtual $Object* getInstance() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaScrollBarUI$1_h_