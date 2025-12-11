#ifndef _com_apple_laf_AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier_h_
#define _com_apple_laf_AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier
//$ extends com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier

#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$SegmentPosition;
		class JRSUIConstants$Widget;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaBorder;
			class AquaUtilControlSize$SizeDescriptor;
			class AquaUtilControlSize$SizeVariant;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier : public ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier {
	$class(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier)
public:
	AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier();
	void init$($String* name, ::apple::laf::JRSUIConstants$Widget* widget, ::apple::laf::JRSUIConstants$SegmentPosition* position, ::com::apple::laf::AquaUtilControlSize$SizeVariant* variant);
	void init$($String* name, ::apple::laf::JRSUIConstants$Widget* widget, ::apple::laf::JRSUIConstants$SegmentPosition* position, ::com::apple::laf::AquaUtilControlSize$SizeVariant* variant, int32_t smallW, int32_t smallH, int32_t miniW, int32_t miniH);
	virtual ::com::apple::laf::AquaBorder* initBorder(::apple::laf::JRSUIConstants$Widget* widget, ::com::apple::laf::AquaUtilControlSize$SizeDescriptor* desc) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier_h_