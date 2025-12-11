#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout
//$ extends com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
		}
	}
}
namespace java {
	namespace awt {
		class Container;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout : public ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout {
	$class(AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout, $NO_CLASS_INIT, ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout)
public:
	AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout();
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0);
	virtual void calculateTabRects(int32_t tabPlacement, int32_t tabCount) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	void layoutCroppedEdge();
	virtual int32_t preferredTabAreaHeight(int32_t tabPlacement, int32_t width) override;
	virtual int32_t preferredTabAreaWidth(int32_t tabPlacement, int32_t height) override;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabbedPaneScrollLayout_h_