#ifndef _com_apple_laf_AquaPainter$AquaSingleImagePainter_h_
#define _com_apple_laf_AquaPainter$AquaSingleImagePainter_h_
//$ class com.apple.laf.AquaPainter$AquaSingleImagePainter
//$ extends com.apple.laf.AquaPainter

#include <com/apple/laf/AquaPainter.h>

namespace apple {
	namespace laf {
		class JRSUIControl;
		class JRSUIState;
	}
}
namespace java {
	namespace awt {
		class Graphics2D;
		class Image;
		class Rectangle;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaPainter$AquaSingleImagePainter : public ::com::apple::laf::AquaPainter {
	$class(AquaPainter$AquaSingleImagePainter, $NO_CLASS_INIT, ::com::apple::laf::AquaPainter)
public:
	AquaPainter$AquaSingleImagePainter();
	void init$(::apple::laf::JRSUIState* state);
	static ::java::awt::Image* createImage(int32_t imgX, int32_t imgY, int32_t imgW, int32_t imgH, ::java::awt::Rectangle* bounds, ::apple::laf::JRSUIControl* control, ::apple::laf::JRSUIState* controlState);
	static ::java::awt::Image* lambda$paintFromSingleCachedImage$0(int32_t imgX, int32_t imgY, ::java::awt::Rectangle* bounds, ::apple::laf::JRSUIControl* control, ::apple::laf::JRSUIState* controlState, ::java::lang::Integer* rvWidth, ::java::lang::Integer* rvHeight);
	using ::com::apple::laf::AquaPainter::paint;
	virtual void paint(::java::awt::Graphics2D* g, ::apple::laf::JRSUIState* stateToPaint) override;
	static void paintFromSingleCachedImage(::java::awt::Graphics2D* g, ::apple::laf::JRSUIControl* control, ::apple::laf::JRSUIState* controlState, ::java::awt::Rectangle* bounds);
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaPainter$AquaSingleImagePainter_h_