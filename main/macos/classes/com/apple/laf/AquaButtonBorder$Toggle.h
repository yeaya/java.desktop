#ifndef _com_apple_laf_AquaButtonBorder$Toggle_h_
#define _com_apple_laf_AquaButtonBorder$Toggle_h_
//$ class com.apple.laf.AquaButtonBorder$Toggle
//$ extends com.apple.laf.AquaButtonBorder

#include <com/apple/laf/AquaButtonBorder.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class ButtonModel;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonBorder$Toggle : public ::com::apple::laf::AquaButtonBorder {
	$class(AquaButtonBorder$Toggle, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonBorder)
public:
	AquaButtonBorder$Toggle();
	void init$();
	void init$(::com::apple::laf::AquaButtonBorder$Toggle* other);
	virtual void doButtonPaint(::javax::swing::AbstractButton* b, ::javax::swing::ButtonModel* model, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonBorder$Toggle_h_