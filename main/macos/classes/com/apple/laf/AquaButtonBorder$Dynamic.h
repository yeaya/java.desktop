#ifndef _com_apple_laf_AquaButtonBorder$Dynamic_h_
#define _com_apple_laf_AquaButtonBorder$Dynamic_h_
//$ class com.apple.laf.AquaButtonBorder$Dynamic
//$ extends com.apple.laf.AquaButtonBorder

#include <com/apple/laf/AquaButtonBorder.h>

#pragma push_macro("ALTERNATE_BEVEL_INSETS")
#undef ALTERNATE_BEVEL_INSETS
#pragma push_macro("ALTERNATE_PUSH_INSETS")
#undef ALTERNATE_PUSH_INSETS
#pragma push_macro("ALTERNATE_SQUARE_INSETS")
#undef ALTERNATE_SQUARE_INSETS

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
		class JRSUIConstants$State;
		class JRSUIConstants$Widget;
	}
}
namespace java {
	namespace awt {
		class Graphics;
		class Insets;
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

class AquaButtonBorder$Dynamic : public ::com::apple::laf::AquaButtonBorder {
	$class(AquaButtonBorder$Dynamic, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonBorder)
public:
	AquaButtonBorder$Dynamic();
	void init$();
	void init$(::com::apple::laf::AquaButtonBorder$Dynamic* other);
	virtual void doButtonPaint(::javax::swing::AbstractButton* b, ::javax::swing::ButtonModel* model, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual ::apple::laf::JRSUIConstants$State* getButtonState(::javax::swing::AbstractButton* b, ::javax::swing::ButtonModel* model) override;
	virtual ::java::awt::Insets* getContentInsets(::javax::swing::AbstractButton* b, int32_t width, int32_t height) override;
	virtual ::apple::laf::JRSUIConstants$Widget* getStyleForSize(::javax::swing::AbstractButton* b, ::apple::laf::JRSUIConstants$Size* size, int32_t width, int32_t height);
	::java::awt::Insets* ALTERNATE_PUSH_INSETS = nullptr;
	::java::awt::Insets* ALTERNATE_BEVEL_INSETS = nullptr;
	::java::awt::Insets* ALTERNATE_SQUARE_INSETS = nullptr;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("ALTERNATE_BEVEL_INSETS")
#pragma pop_macro("ALTERNATE_PUSH_INSETS")
#pragma pop_macro("ALTERNATE_SQUARE_INSETS")

#endif // _com_apple_laf_AquaButtonBorder$Dynamic_h_