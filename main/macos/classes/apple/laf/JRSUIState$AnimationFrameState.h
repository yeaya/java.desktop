#ifndef _apple_laf_JRSUIState$AnimationFrameState_h_
#define _apple_laf_JRSUIState$AnimationFrameState_h_
//$ class apple.laf.JRSUIState$AnimationFrameState
//$ extends apple.laf.JRSUIState

#include <apple/laf/JRSUIState.h>

namespace apple {
	namespace laf {
		class JRSUIControl;
	}
}

namespace apple {
	namespace laf {

class JRSUIState$AnimationFrameState : public ::apple::laf::JRSUIState {
	$class(JRSUIState$AnimationFrameState, $NO_CLASS_INIT, ::apple::laf::JRSUIState)
public:
	JRSUIState$AnimationFrameState();
	void init$(int64_t encodedState, int32_t animationFrame);
	virtual void apply(::apple::laf::JRSUIControl* control) override;
	virtual ::apple::laf::JRSUIState* createDerivation() override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual bool isDerivationSame() override;
	virtual void reset() override;
	virtual void setAnimationFrame(int32_t frame);
	int32_t animationFrame = 0;
	int32_t derivedAnimationFrame = 0;
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIState$AnimationFrameState_h_