#ifndef _com_apple_laf_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1_h_
#define _com_apple_laf_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1
//$ extends com.apple.laf.AquaUtilControlSize$SizeDescriptor

#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaButtonExtendedTypes$BorderDefinedTypeSpecifier;
			class AquaUtilControlSize$SizeVariant;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1 : public ::com::apple::laf::AquaUtilControlSize$SizeDescriptor {
	$class(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtilControlSize$SizeDescriptor)
public:
	AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1();
	void init$(::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier* this$0, ::com::apple::laf::AquaUtilControlSize$SizeVariant* variant, int32_t val$smallW, int32_t val$smallH, int32_t val$miniW, int32_t val$miniH);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveMini(::com::apple::laf::AquaUtilControlSize$SizeVariant* v) override;
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveSmall(::com::apple::laf::AquaUtilControlSize$SizeVariant* v) override;
	::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier* this$0 = nullptr;
	int32_t val$miniH = 0;
	int32_t val$miniW = 0;
	int32_t val$smallH = 0;
	int32_t val$smallW = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1_h_