#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$1_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$1_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$1
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
				class BasicFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicFileChooserUI$1 : public ::sun::swing::UIAction {
	$class(BasicFileChooserUI$1, $NO_CLASS_INIT, ::sun::swing::UIAction)
public:
	BasicFileChooserUI$1();
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0, $String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$1_h_