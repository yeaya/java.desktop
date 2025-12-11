#ifndef _com_apple_laf_AquaUtils$SlicedShadowBorder_h_
#define _com_apple_laf_AquaUtils$SlicedShadowBorder_h_
//$ class com.apple.laf.AquaUtils$SlicedShadowBorder
//$ extends com.apple.laf.AquaUtils$ShadowBorder

#include <com/apple/laf/AquaUtils$ShadowBorder.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaImageFactory$SlicedImageControl;
			class AquaUtils$Painter;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$SlicedShadowBorder : public ::com::apple::laf::AquaUtils$ShadowBorder {
	$class(AquaUtils$SlicedShadowBorder, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$ShadowBorder)
public:
	AquaUtils$SlicedShadowBorder();
	void init$(::com::apple::laf::AquaUtils$Painter* prePainter, ::com::apple::laf::AquaUtils$Painter* postPainter, int32_t offsetX, int32_t offsetY, float distance, float intensity, int32_t blur, int32_t templateWidth, int32_t templateHeight, int32_t leftCut, int32_t topCut, int32_t rightCut, int32_t bottomCut);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	::com::apple::laf::AquaImageFactory$SlicedImageControl* slices = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$SlicedShadowBorder_h_