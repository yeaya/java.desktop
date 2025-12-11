#ifndef _apple_laf_JRSUIState$TitleBarHeightState_h_
#define _apple_laf_JRSUIState$TitleBarHeightState_h_
//$ class apple.laf.JRSUIState$TitleBarHeightState
//$ extends apple.laf.JRSUIState$ValueState

#include <apple/laf/JRSUIState$ValueState.h>

namespace apple {
	namespace laf {
		class JRSUIControl;
		class JRSUIState;
	}
}

namespace apple {
	namespace laf {

class JRSUIState$TitleBarHeightState : public ::apple::laf::JRSUIState$ValueState {
	$class(JRSUIState$TitleBarHeightState, $NO_CLASS_INIT, ::apple::laf::JRSUIState$ValueState)
public:
	JRSUIState$TitleBarHeightState();
	void init$(int64_t encodedState, double value);
	virtual void apply(::apple::laf::JRSUIControl* control) override;
	virtual ::apple::laf::JRSUIState* createDerivation() override;
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIState$TitleBarHeightState_h_