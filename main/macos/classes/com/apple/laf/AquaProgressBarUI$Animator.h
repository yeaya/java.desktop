#ifndef _com_apple_laf_AquaProgressBarUI$Animator_h_
#define _com_apple_laf_AquaProgressBarUI$Animator_h_
//$ class com.apple.laf.AquaProgressBarUI$Animator
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

#pragma push_macro("MINIMUM_DELAY")
#undef MINIMUM_DELAY

namespace com {
	namespace apple {
		namespace laf {
			class AquaProgressBarUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class Timer;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaProgressBarUI$Animator : public ::java::awt::event::ActionListener {
	$class(AquaProgressBarUI$Animator, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	AquaProgressBarUI$Animator();
	void init$(::com::apple::laf::AquaProgressBarUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void start();
	virtual void stop();
	::com::apple::laf::AquaProgressBarUI* this$0 = nullptr;
	static const int32_t MINIMUM_DELAY = 5;
	::javax::swing::Timer* timer = nullptr;
	int64_t previousDelay = 0;
	int64_t lastCall = 0;
	int32_t repaintInterval = 0;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("MINIMUM_DELAY")

#endif // _com_apple_laf_AquaProgressBarUI$Animator_h_