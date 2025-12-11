#ifndef _com_apple_laf_AquaButtonExtendedTypes$TypeSpecifier_h_
#define _com_apple_laf_AquaButtonExtendedTypes$TypeSpecifier_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class AquaButtonExtendedTypes$TypeSpecifier : public ::java::lang::Object {
	$class(AquaButtonExtendedTypes$TypeSpecifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaButtonExtendedTypes$TypeSpecifier();
	void init$($String* name, bool setIconFont);
	virtual ::javax::swing::border::Border* getBorder() {return nullptr;}
	$String* name = nullptr;
	bool setIconFont = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$TypeSpecifier_h_