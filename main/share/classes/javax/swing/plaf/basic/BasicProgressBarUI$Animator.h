#ifndef _javax_swing_plaf_basic_BasicProgressBarUI$Animator_h_
#define _javax_swing_plaf_basic_BasicProgressBarUI$Animator_h_
//$ class javax.swing.plaf.basic.BasicProgressBarUI$Animator
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

#pragma push_macro("MINIMUM_DELAY")
#undef MINIMUM_DELAY

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
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicProgressBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicProgressBarUI$Animator : public ::java::awt::event::ActionListener {
	$class(BasicProgressBarUI$Animator, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	BasicProgressBarUI$Animator();
	void init$(::javax::swing::plaf::basic::BasicProgressBarUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void start(int32_t interval);
	void stop();
	::javax::swing::plaf::basic::BasicProgressBarUI* this$0 = nullptr;
	::javax::swing::Timer* timer = nullptr;
	int64_t previousDelay = 0;
	int32_t interval = 0;
	int64_t lastCall = 0;
	int32_t MINIMUM_DELAY = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("MINIMUM_DELAY")

#endif // _javax_swing_plaf_basic_BasicProgressBarUI$Animator_h_