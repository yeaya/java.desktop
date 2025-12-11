#ifndef _com_apple_laf_AquaButtonBorder$Named_h_
#define _com_apple_laf_AquaButtonBorder$Named_h_
//$ class com.apple.laf.AquaButtonBorder$Named
//$ extends com.apple.laf.AquaButtonBorder

#include <com/apple/laf/AquaButtonBorder.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Widget;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaUtilControlSize$SizeDescriptor;
		}
	}
}
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

class AquaButtonBorder$Named : public ::com::apple::laf::AquaButtonBorder {
	$class(AquaButtonBorder$Named, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonBorder)
public:
	AquaButtonBorder$Named();
	void init$(::apple::laf::JRSUIConstants$Widget* widget, ::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor);
	void init$(::com::apple::laf::AquaButtonBorder$Named* sizeDescriptor);
	virtual void doButtonPaint(::javax::swing::AbstractButton* b, ::javax::swing::ButtonModel* model, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonBorder$Named_h_