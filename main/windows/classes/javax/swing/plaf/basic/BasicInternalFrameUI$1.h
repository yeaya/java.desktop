#ifndef _javax_swing_plaf_basic_BasicInternalFrameUI$1_h_
#define _javax_swing_plaf_basic_BasicInternalFrameUI$1_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameUI$1
//$ extends sun.swing.UIAction

#include <sun/swing/UIAction.h>

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

class BasicInternalFrameUI$1 : public ::sun::swing::UIAction {
	$class(BasicInternalFrameUI$1, $NO_CLASS_INIT, ::sun::swing::UIAction)
public:
	BasicInternalFrameUI$1();
	void init$($String* name);
	virtual bool accept(Object$* sender) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameUI$1_h_