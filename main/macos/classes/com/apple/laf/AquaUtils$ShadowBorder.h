#ifndef _com_apple_laf_AquaUtils$ShadowBorder_h_
#define _com_apple_laf_AquaUtils$ShadowBorder_h_
//$ class com.apple.laf.AquaUtils$ShadowBorder
//$ extends javax.swing.border.Border

#include <javax/swing/border/Border.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$Painter;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ConvolveOp;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$ShadowBorder : public ::javax::swing::border::Border {
	$class(AquaUtils$ShadowBorder, $NO_CLASS_INIT, ::javax::swing::border::Border)
public:
	AquaUtils$ShadowBorder();
	void init$(::com::apple::laf::AquaUtils$Painter* prePainter, ::com::apple::laf::AquaUtils$Painter* postPainter, int32_t offsetX, int32_t offsetY, float distance, float intensity, int32_t blur);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	void paintToImage(::java::awt::image::BufferedImage* img, int32_t x, int32_t y, int32_t width, int32_t height);
	::com::apple::laf::AquaUtils$Painter* prePainter = nullptr;
	::com::apple::laf::AquaUtils$Painter* postPainter = nullptr;
	int32_t offsetX = 0;
	int32_t offsetY = 0;
	float distance = 0.0;
	int32_t blur = 0;
	::java::awt::Insets* insets = nullptr;
	::java::awt::image::ConvolveOp* blurOp = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$ShadowBorder_h_