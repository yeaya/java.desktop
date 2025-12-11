#ifndef _com_apple_laf_AquaUtilControlSize$Sizeable_h_
#define _com_apple_laf_AquaUtilControlSize$Sizeable_h_
//$ interface com.apple.laf.AquaUtilControlSize$Sizeable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtilControlSize$Sizeable : public ::java::lang::Object {
	$interface(AquaUtilControlSize$Sizeable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void applySizeFor(::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$Size* size) {}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtilControlSize$Sizeable_h_