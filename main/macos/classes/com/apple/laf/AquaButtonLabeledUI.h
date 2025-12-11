#ifndef _com_apple_laf_AquaButtonLabeledUI_h_
#define _com_apple_laf_AquaButtonLabeledUI_h_
//$ class com.apple.laf.AquaButtonLabeledUI
//$ extends com.apple.laf.AquaButtonToggleUI

#include <com/apple/laf/AquaButtonToggleUI.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaButtonBorder;
			class AquaButtonLabeledUI$RecyclableSizingIcon;
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class Icon;
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonLabeledUI : public ::com::apple::laf::AquaButtonToggleUI {
	$class(AquaButtonLabeledUI, 0, ::com::apple::laf::AquaButtonToggleUI)
public:
	AquaButtonLabeledUI();
	void init$();
	virtual void applySizeFor(::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$Size* newSize) override;
	virtual ::javax::swing::Icon* getDefaultIcon(::javax::swing::JComponent* c);
	virtual ::com::apple::laf::AquaButtonBorder* getPainter() {return nullptr;}
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	using ::com::apple::laf::AquaButtonToggleUI::paintIcon;
	virtual void setThemeBorder(::javax::swing::AbstractButton* b) override;
	static ::com::apple::laf::AquaButtonLabeledUI$RecyclableSizingIcon* regularIcon;
	static ::com::apple::laf::AquaButtonLabeledUI$RecyclableSizingIcon* smallIcon;
	static ::com::apple::laf::AquaButtonLabeledUI$RecyclableSizingIcon* miniIcon;
	::com::apple::laf::AquaButtonBorder* widgetBorder = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonLabeledUI_h_