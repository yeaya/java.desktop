#ifndef _com_apple_laf_AquaUtils$Selectable_h_
#define _com_apple_laf_AquaUtils$Selectable_h_
//$ interface com.apple.laf.AquaUtils$Selectable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$Selectable : public ::java::lang::Object {
	$interface(AquaUtils$Selectable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void paintSelected(bool selected) {}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$Selectable_h_