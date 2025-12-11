#ifndef _com_apple_laf_AquaButtonExtendedTypes$8_h_
#define _com_apple_laf_AquaButtonExtendedTypes$8_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$8
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

class AquaButtonExtendedTypes$8 : public ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier {
	$class(AquaButtonExtendedTypes$8, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier)
public:
	AquaButtonExtendedTypes$8();
	void init$($String* name, ::apple::laf::JRSUIConstants$Widget* widget, ::com::apple::laf::AquaUtilControlSize$SizeVariant* variant);
	virtual void patchUp(::com::apple::laf::AquaUtilControlSize$SizeDescriptor* descriptor) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$8_h_