#ifndef _com_apple_laf_AquaUtils$Painter_h_
#define _com_apple_laf_AquaUtils$Painter_h_
//$ interface com.apple.laf.AquaUtils$Painter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$Painter : public ::java::lang::Object {
	$interface(AquaUtils$Painter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void paint(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$Painter_h_