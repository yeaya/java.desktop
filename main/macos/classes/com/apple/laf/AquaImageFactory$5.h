#ifndef _com_apple_laf_AquaImageFactory$5_h_
#define _com_apple_laf_AquaImageFactory$5_h_
//$ class com.apple.laf.AquaImageFactory$5
//$ extends com.apple.laf.AquaIcon$JRSUIControlSpec

#include <com/apple/laf/AquaIcon$JRSUIControlSpec.h>

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

class AquaImageFactory$5 : public ::com::apple::laf::AquaIcon$JRSUIControlSpec {
	$class(AquaImageFactory$5, $NO_CLASS_INIT, ::com::apple::laf::AquaIcon$JRSUIControlSpec)
public:
	AquaImageFactory$5();
	void init$();
	virtual void initIconPainter(::com::apple::laf::AquaPainter* painter) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$5_h_