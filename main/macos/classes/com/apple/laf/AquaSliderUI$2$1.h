#ifndef _com_apple_laf_AquaSliderUI$2$1_h_
#define _com_apple_laf_AquaSliderUI$2$1_h_
//$ class com.apple.laf.AquaSliderUI$2$1
//$ extends com.apple.laf.AquaUtilControlSize$SizeDescriptor

#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaSliderUI$2;
			class AquaUtilControlSize$SizeVariant;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSliderUI$2$1 : public ::com::apple::laf::AquaUtilControlSize$SizeDescriptor {
	$class(AquaSliderUI$2$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtilControlSize$SizeDescriptor)
public:
	AquaSliderUI$2$1();
	void init$(::com::apple::laf::AquaSliderUI$2* this$0, ::com::apple::laf::AquaUtilControlSize$SizeVariant* variant);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveMini(::com::apple::laf::AquaUtilControlSize$SizeVariant* v) override;
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveSmall(::com::apple::laf::AquaUtilControlSize$SizeVariant* v) override;
	::com::apple::laf::AquaSliderUI$2* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSliderUI$2$1_h_