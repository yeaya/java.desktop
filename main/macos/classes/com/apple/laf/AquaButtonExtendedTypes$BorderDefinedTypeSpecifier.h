#ifndef _com_apple_laf_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_h_
#define _com_apple_laf_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier
//$ extends com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier

#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>

namespace apple {
	namespace laf {
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
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonExtendedTypes$BorderDefinedTypeSpecifier : public ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier {
	$class(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier)
public:
	AquaButtonExtendedTypes$BorderDefinedTypeSpecifier();
	void init$($String* name, ::apple::laf::JRSUIConstants$Widget* widget, ::com::apple::laf::AquaUtilControlSize$SizeVariant* variant);
	void init$($String* name, ::apple::laf::JRSUIConstants$Widget* widget, ::com::apple::laf::AquaUtilControlSize$SizeVariant* variant, int32_t smallW, int32_t smallH, int32_t miniW, int32_t miniH);
	virtual ::javax::swing::border::Border* getBorder() override;
	virtual ::com::apple::laf::AquaBorder* initBorder(::apple::laf::JRSUIConstants$Widget* widget, ::com::apple::laf::AquaUtilControlSize$SizeDescriptor* desc);
	virtual void patchUp(::com::apple::laf::AquaUtilControlSize$SizeDescriptor* descriptor);
	::com::apple::laf::AquaBorder* border = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_h_