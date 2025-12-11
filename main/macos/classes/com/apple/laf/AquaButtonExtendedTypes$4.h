#ifndef _com_apple_laf_AquaButtonExtendedTypes$4_h_
#define _com_apple_laf_AquaButtonExtendedTypes$4_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$4
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

class AquaButtonExtendedTypes$4 : public ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier {
	$class(AquaButtonExtendedTypes$4, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier)
public:
	AquaButtonExtendedTypes$4();
	void init$($String* name, bool setIconFont);
	virtual ::javax::swing::border::Border* getBorder() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$4_h_