#ifndef _com_apple_laf_AquaButtonExtendedTypes$5_h_
#define _com_apple_laf_AquaButtonExtendedTypes$5_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$5
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

class AquaButtonExtendedTypes$5 : public ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier {
	$class(AquaButtonExtendedTypes$5, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier)
public:
	AquaButtonExtendedTypes$5();
	void init$($String* name, bool setIconFont);
	virtual ::javax::swing::border::Border* getBorder() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$5_h_