#ifndef _com_apple_laf_AquaInternalFrameUI$4$1_h_
#define _com_apple_laf_AquaInternalFrameUI$4$1_h_
//$ class com.apple.laf.AquaInternalFrameUI$4$1
//$ extends com.apple.laf.AquaUtils$Painter

#include <com/apple/laf/AquaUtils$Painter.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameUI$4;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameUI$4$1 : public ::com::apple::laf::AquaUtils$Painter {
	$class(AquaInternalFrameUI$4$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$Painter)
public:
	AquaInternalFrameUI$4$1();
	void init$(::com::apple::laf::AquaInternalFrameUI$4* this$0);
	virtual void paint(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::com::apple::laf::AquaInternalFrameUI$4* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$4$1_h_