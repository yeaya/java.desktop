#ifndef _com_apple_laf_AquaButtonLabeledUI$RecyclableSizingIcon_h_
#define _com_apple_laf_AquaButtonLabeledUI$RecyclableSizingIcon_h_
//$ class com.apple.laf.AquaButtonLabeledUI$RecyclableSizingIcon
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonLabeledUI$RecyclableSizingIcon : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaButtonLabeledUI$RecyclableSizingIcon, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaButtonLabeledUI$RecyclableSizingIcon();
	void init$(int32_t iconSize);
	virtual $Object* getInstance() override;
	int32_t iconSize = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonLabeledUI$RecyclableSizingIcon_h_