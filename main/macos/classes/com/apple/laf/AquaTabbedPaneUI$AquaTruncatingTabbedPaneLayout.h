#ifndef _com_apple_laf_AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout_h_
#define _com_apple_laf_AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout_h_
//$ class com.apple.laf.AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout
//$ extends com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI;
		}
	}
}
namespace java {
	namespace awt {
		class FontMetrics;
		class Rectangle;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout : public ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout {
	$class(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, $NO_CLASS_INIT, ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout)
public:
	AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout();
	void init$(::com::apple::laf::AquaTabbedPaneUI* this$0);
	void calculateHorizontalTabRunRect(::java::awt::Rectangle* rect, ::java::awt::FontMetrics* metrics, int32_t tabPlacement, int32_t returnAt, int32_t i, int32_t x, int32_t y);
	virtual void calculateTabRects(int32_t tabPlacement, int32_t tabCount) override;
	void calculateVerticalTabRunRect(::java::awt::Rectangle* rect, ::java::awt::FontMetrics* metrics, int32_t tabPlacement, int32_t returnAt, int32_t i, int32_t x, int32_t y);
	virtual void layoutTabComponents() override;
	virtual void padTabRun(int32_t tabPlacement, int32_t start, int32_t end, int32_t max) override;
	virtual int32_t preferredTabAreaHeight(int32_t tabPlacement, int32_t width) override;
	virtual int32_t preferredTabAreaWidth(int32_t tabPlacement, int32_t height) override;
	virtual void superCalculateTabRects(int32_t tabPlacement, int32_t tabCount);
	::com::apple::laf::AquaTabbedPaneUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout_h_