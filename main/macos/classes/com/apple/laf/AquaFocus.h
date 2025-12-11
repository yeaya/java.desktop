#ifndef _com_apple_laf_AquaFocus_h_
#define _com_apple_laf_AquaFocus_h_
//$ class com.apple.laf.AquaFocus
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFocus$Drawable;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFocus : public ::java::lang::Object {
	$class(AquaFocus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaFocus();
	void init$();
	static ::javax::swing::Icon* createFocusedIcon(::javax::swing::Icon* tmpIcon, ::java::awt::Component* c, int32_t slack);
	static bool paintFocus(::java::awt::Graphics* g, ::com::apple::laf::AquaFocus$Drawable* drawable);
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFocus_h_