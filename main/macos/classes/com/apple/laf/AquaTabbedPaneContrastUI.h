#ifndef _com_apple_laf_AquaTabbedPaneContrastUI_h_
#define _com_apple_laf_AquaTabbedPaneContrastUI_h_
//$ class com.apple.laf.AquaTabbedPaneContrastUI
//$ extends com.apple.laf.AquaTabbedPaneUI

#include <com/apple/laf/AquaTabbedPaneUI.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$SegmentLeadingSeparator;
		class JRSUIConstants$SegmentTrailingSeparator;
		class JRSUIConstants$State;
	}
}
namespace java {
	namespace awt {
		class Color;
		class Font;
		class FontMetrics;
		class Graphics2D;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneContrastUI : public ::com::apple::laf::AquaTabbedPaneUI {
	$class(AquaTabbedPaneContrastUI, $NO_CLASS_INIT, ::com::apple::laf::AquaTabbedPaneUI)
public:
	AquaTabbedPaneContrastUI();
	using ::com::apple::laf::AquaTabbedPaneUI::getTabBounds;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static ::java::awt::Color* getNonSelectedTabTitleColor();
	virtual ::apple::laf::JRSUIConstants$SegmentLeadingSeparator* getSegmentLeadingSeparator(int32_t index, int32_t selectedIndex, bool isLeftToRight) override;
	virtual ::apple::laf::JRSUIConstants$SegmentTrailingSeparator* getSegmentTrailingSeparator(int32_t index, int32_t selectedIndex, bool isLeftToRight) override;
	static ::java::awt::Color* getSelectedTabTitleColor(bool enabled, bool pressed);
	static ::java::awt::Color* getSelectedTabTitleShadowColor(bool enabled);
	virtual ::apple::laf::JRSUIConstants$State* getState(int32_t index, bool frameActive, bool isSelected) override;
	virtual bool isPressedAt(int32_t index);
	virtual void paintTitle(::java::awt::Graphics2D* g2d, ::java::awt::Font* font, ::java::awt::FontMetrics* metrics, ::java::awt::Rectangle* textRect, int32_t tabIndex, $String* title) override;
	virtual bool shouldRepaintSelectedTabOnMouseDown() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneContrastUI_h_