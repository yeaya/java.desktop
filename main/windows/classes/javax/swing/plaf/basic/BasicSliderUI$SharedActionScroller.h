#ifndef _javax_swing_plaf_basic_BasicSliderUI$SharedActionScroller_h_
#define _javax_swing_plaf_basic_BasicSliderUI$SharedActionScroller_h_
//$ class javax.swing.plaf.basic.BasicSliderUI$SharedActionScroller
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
		namespace plaf {
			namespace basic {

class $export BasicSliderUI$SharedActionScroller : public ::javax::swing::AbstractAction {
	$class(BasicSliderUI$SharedActionScroller, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	BasicSliderUI$SharedActionScroller();
	void init$(int32_t dir, bool block);
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	int32_t dir = 0;
	bool block = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSliderUI$SharedActionScroller_h_