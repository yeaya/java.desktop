#ifndef _apple_laf_JRSUIStateFactory_h_
#define _apple_laf_JRSUIStateFactory_h_
//$ class apple.laf.JRSUIStateFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIState;
		class JRSUIState$AnimationFrameState;
		class JRSUIState$ScrollBarState;
		class JRSUIState$TitleBarHeightState;
		class JRSUIState$ValueState;
	}
}

namespace apple {
	namespace laf {

class JRSUIStateFactory : public ::java::lang::Object {
	$class(JRSUIStateFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIStateFactory();
	void init$();
	static ::apple::laf::JRSUIState$AnimationFrameState* getDisclosureTriangle();
	static ::apple::laf::JRSUIState$ValueState* getLabeledButton();
	static ::apple::laf::JRSUIState$ValueState* getProgressBar();
	static ::apple::laf::JRSUIState$ScrollBarState* getScrollBar();
	static ::apple::laf::JRSUIState* getSliderThumb();
	static ::apple::laf::JRSUIState* getSliderTrack();
	static ::apple::laf::JRSUIState* getSpinnerArrows();
	static ::apple::laf::JRSUIState* getSplitPaneDivider();
	static ::apple::laf::JRSUIState* getTab();
	static ::apple::laf::JRSUIState$TitleBarHeightState* getTitleBar();
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIStateFactory_h_