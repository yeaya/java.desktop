#ifndef _javax_swing_plaf_basic_BasicTextUI$TextActionWrapper_h_
#define _javax_swing_plaf_basic_BasicTextUI$TextActionWrapper_h_
//$ class javax.swing.plaf.basic.BasicTextUI$TextActionWrapper
//$ extends javax.swing.text.TextAction

#include <javax/swing/text/TextAction.h>

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
				class BasicTextUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTextUI$TextActionWrapper : public ::javax::swing::text::TextAction {
	$class(BasicTextUI$TextActionWrapper, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	BasicTextUI$TextActionWrapper();
	void init$(::javax::swing::plaf::basic::BasicTextUI* this$0, ::javax::swing::text::TextAction* action);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::javax::swing::plaf::basic::BasicTextUI* this$0 = nullptr;
	::javax::swing::text::TextAction* action = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$TextActionWrapper_h_