#ifndef _com_apple_laf_AquaButtonBorder$Dynamic$1_h_
#define _com_apple_laf_AquaButtonBorder$Dynamic$1_h_
//$ class com.apple.laf.AquaButtonBorder$Dynamic$1
//$ extends com.apple.laf.AquaUtilControlSize$SizeDescriptor

#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtilControlSize$SizeVariant;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonBorder$Dynamic$1 : public ::com::apple::laf::AquaUtilControlSize$SizeDescriptor {
	$class(AquaButtonBorder$Dynamic$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtilControlSize$SizeDescriptor)
public:
	AquaButtonBorder$Dynamic$1();
	void init$(::com::apple::laf::AquaUtilControlSize$SizeVariant* variant);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveMini(::com::apple::laf::AquaUtilControlSize$SizeVariant* v) override;
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveSmall(::com::apple::laf::AquaUtilControlSize$SizeVariant* v) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonBorder$Dynamic$1_h_