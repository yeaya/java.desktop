#ifndef _com_apple_laf_AquaButtonExtendedTypes$6_h_
#define _com_apple_laf_AquaButtonExtendedTypes$6_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$6
//$ extends com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier

#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Widget;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaUtilControlSize$SizeDescriptor;
			class AquaUtilControlSize$SizeVariant;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonExtendedTypes$6 : public ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier {
	$class(AquaButtonExtendedTypes$6, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier)
public:
	AquaButtonExtendedTypes$6();
	void init$($String* name, ::apple::laf::JRSUIConstants$Widget* widget, ::com::apple::laf::AquaUtilControlSize$SizeVariant* variant, int32_t smallW, int32_t smallH, int32_t miniW, int32_t miniH);
	virtual void patchUp(::com::apple::laf::AquaUtilControlSize$SizeDescriptor* descriptor) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$6_h_