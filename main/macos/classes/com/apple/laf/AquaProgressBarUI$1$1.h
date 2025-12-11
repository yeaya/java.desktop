#ifndef _com_apple_laf_AquaProgressBarUI$1$1_h_
#define _com_apple_laf_AquaProgressBarUI$1$1_h_
//$ class com.apple.laf.AquaProgressBarUI$1$1
//$ extends com.apple.laf.AquaUtilControlSize$SizeDescriptor

#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaProgressBarUI$1;
			class AquaUtilControlSize$SizeVariant;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaProgressBarUI$1$1 : public ::com::apple::laf::AquaUtilControlSize$SizeDescriptor {
	$class(AquaProgressBarUI$1$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtilControlSize$SizeDescriptor)
public:
	AquaProgressBarUI$1$1();
	void init$(::com::apple::laf::AquaProgressBarUI$1* this$0, ::com::apple::laf::AquaUtilControlSize$SizeVariant* variant);
	virtual ::com::apple::laf::AquaUtilControlSize$SizeVariant* deriveSmall(::com::apple::laf::AquaUtilControlSize$SizeVariant* v) override;
	::com::apple::laf::AquaProgressBarUI$1* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaProgressBarUI$1$1_h_