#ifndef _com_apple_laf_AquaIcon$JRSUIControlSpec_h_
#define _com_apple_laf_AquaIcon$JRSUIControlSpec_h_
//$ interface com.apple.laf.AquaIcon$JRSUIControlSpec
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaIcon$JRSUIControlSpec : public ::java::lang::Object {
	$interface(AquaIcon$JRSUIControlSpec, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void initIconPainter(::com::apple::laf::AquaPainter* painter) {}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$JRSUIControlSpec_h_