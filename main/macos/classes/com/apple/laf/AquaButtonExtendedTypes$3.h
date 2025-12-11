#ifndef _com_apple_laf_AquaButtonExtendedTypes$3_h_
#define _com_apple_laf_AquaButtonExtendedTypes$3_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$3
//$ extends com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier

#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>

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

class AquaButtonExtendedTypes$3 : public ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier {
	$class(AquaButtonExtendedTypes$3, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier)
public:
	AquaButtonExtendedTypes$3();
	void init$($String* name, bool setIconFont);
	virtual ::javax::swing::border::Border* getBorder() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$3_h_