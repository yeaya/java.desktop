#ifndef _com_apple_laf_AquaButtonLabeledUI$LabeledButtonBorder_h_
#define _com_apple_laf_AquaButtonLabeledUI$LabeledButtonBorder_h_
//$ class com.apple.laf.AquaButtonLabeledUI$LabeledButtonBorder
//$ extends com.apple.laf.AquaButtonBorder

#include <com/apple/laf/AquaButtonBorder.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
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

class AquaButtonLabeledUI$LabeledButtonBorder : public ::com::apple::laf::AquaButtonBorder {
	$class(AquaButtonLabeledUI$LabeledButtonBorder, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonBorder)
public:
	AquaButtonLabeledUI$LabeledButtonBorder();
	void init$(::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor);
	void init$(::com::apple::laf::AquaButtonLabeledUI$LabeledButtonBorder* other);
	virtual ::com::apple::laf::AquaPainter* createPainter() override;
	virtual void doButtonPaint(::javax::swing::AbstractButton* b, ::javax::swing::ButtonModel* model, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual ::apple::laf::JRSUIConstants$State* getButtonState(::javax::swing::AbstractButton* b, ::javax::swing::ButtonModel* model) override;
	static bool isIndeterminate(::javax::swing::AbstractButton* b);
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonLabeledUI$LabeledButtonBorder_h_