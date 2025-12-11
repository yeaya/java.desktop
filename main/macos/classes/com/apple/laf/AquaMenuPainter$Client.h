#ifndef _com_apple_laf_AquaMenuPainter$Client_h_
#define _com_apple_laf_AquaMenuPainter$Client_h_
//$ interface com.apple.laf.AquaMenuPainter$Client
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

class AquaMenuPainter$Client : public ::java::lang::Object {
	$interface(AquaMenuPainter$Client, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void paintBackground(::java::awt::Graphics* g, ::javax::swing::JComponent* c, int32_t menuWidth, int32_t menuHeight) {}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMenuPainter$Client_h_