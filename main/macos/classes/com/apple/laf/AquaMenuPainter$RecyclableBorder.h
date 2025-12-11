#ifndef _com_apple_laf_AquaMenuPainter$RecyclableBorder_h_
#define _com_apple_laf_AquaMenuPainter$RecyclableBorder_h_
//$ class com.apple.laf.AquaMenuPainter$RecyclableBorder
//$ extends com.apple.laf.AquaUtils$RecyclableSingleton

#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuPainter$RecyclableBorder : public ::com::apple::laf::AquaUtils$RecyclableSingleton {
	$class(AquaMenuPainter$RecyclableBorder, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$RecyclableSingleton)
public:
	AquaMenuPainter$RecyclableBorder();
	void init$($String* borderName);
	virtual $Object* getInstance() override;
	$String* borderName = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMenuPainter$RecyclableBorder_h_