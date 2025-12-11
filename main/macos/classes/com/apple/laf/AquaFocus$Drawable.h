#ifndef _com_apple_laf_AquaFocus$Drawable_h_
#define _com_apple_laf_AquaFocus$Drawable_h_
//$ interface com.apple.laf.AquaFocus$Drawable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics2D;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFocus$Drawable : public ::java::lang::Object {
	$interface(AquaFocus$Drawable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void draw(::java::awt::Graphics2D* sg2d) {}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFocus$Drawable_h_