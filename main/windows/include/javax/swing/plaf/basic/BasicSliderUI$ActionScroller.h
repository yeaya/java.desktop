#ifndef _javax_swing_plaf_basic_BasicSliderUI$ActionScroller_h_
#define _javax_swing_plaf_basic_BasicSliderUI$ActionScroller_h_
//$ class javax.swing.plaf.basic.BasicSliderUI$ActionScroller
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JSlider;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSliderUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicSliderUI$ActionScroller : public ::javax::swing::AbstractAction {
	$class(BasicSliderUI$ActionScroller, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicSliderUI$ActionScroller();
	void init$(::javax::swing::plaf::basic::BasicSliderUI* this$0, ::javax::swing::JSlider* slider, int32_t dir, bool block);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::javax::swing::plaf::basic::BasicSliderUI* this$0 = nullptr;
	int32_t dir = 0;
	bool block = false;
	::javax::swing::JSlider* slider = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSliderUI$ActionScroller_h_