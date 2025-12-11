#ifndef _com_apple_laf_AquaUtils$JComponentPainter_h_
#define _com_apple_laf_AquaUtils$JComponentPainter_h_
//$ interface com.apple.laf.AquaUtils$JComponentPainter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics;
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

class AquaUtils$JComponentPainter : public ::java::lang::Object {
	$interface(AquaUtils$JComponentPainter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void paint(::javax::swing::JComponent* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$JComponentPainter_h_