#ifndef _apple_laf_JRSUIState$ScrollBarState_h_
#define _apple_laf_JRSUIState$ScrollBarState_h_
//$ class apple.laf.JRSUIState$ScrollBarState
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

class JRSUIState$ScrollBarState : public ::apple::laf::JRSUIState$ValueState {
	$class(JRSUIState$ScrollBarState, $NO_CLASS_INIT, ::apple::laf::JRSUIState$ValueState)
public:
	JRSUIState$ScrollBarState();
	void init$(int64_t encodedState, double value, double thumbProportion, double thumbStart);
	virtual void apply(::apple::laf::JRSUIControl* control) override;
	virtual ::apple::laf::JRSUIState* createDerivation() override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual bool isDerivationSame() override;
	virtual void reset() override;
	virtual void setThumbPercent(double thumbPercent);
	virtual void setThumbStart(double thumbStart);
	double thumbProportion = 0.0;
	double derivedThumbProportion = 0.0;
	double thumbStart = 0.0;
	double derivedThumbStart = 0.0;
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIState$ScrollBarState_h_