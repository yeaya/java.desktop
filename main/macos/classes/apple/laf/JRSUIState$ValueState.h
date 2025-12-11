#ifndef _apple_laf_JRSUIState$ValueState_h_
#define _apple_laf_JRSUIState$ValueState_h_
//$ class apple.laf.JRSUIState$ValueState
//$ extends apple.laf.JRSUIState

#include <apple/laf/JRSUIState.h>

namespace apple {
	namespace laf {
		class JRSUIControl;
	}
}

namespace apple {
	namespace laf {

class JRSUIState$ValueState : public ::apple::laf::JRSUIState {
	$class(JRSUIState$ValueState, $NO_CLASS_INIT, ::apple::laf::JRSUIState)
public:
	JRSUIState$ValueState();
	void init$(int64_t encodedState, double value);
	virtual void apply(::apple::laf::JRSUIControl* control) override;
	virtual ::apple::laf::JRSUIState* createDerivation() override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual bool isDerivationSame() override;
	virtual void reset() override;
	virtual void setValue(double value);
	double value = 0.0;
	double derivedValue = 0.0;
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIState$ValueState_h_