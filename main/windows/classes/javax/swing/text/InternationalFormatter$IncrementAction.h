#ifndef _javax_swing_text_InternationalFormatter$IncrementAction_h_
#define _javax_swing_text_InternationalFormatter$IncrementAction_h_
//$ class javax.swing.text.InternationalFormatter$IncrementAction
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
		namespace text {
			class InternationalFormatter;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class InternationalFormatter$IncrementAction : public ::javax::swing::AbstractAction {
	$class(InternationalFormatter$IncrementAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	InternationalFormatter$IncrementAction();
	void init$(::javax::swing::text::InternationalFormatter* this$0, $String* name, int32_t direction);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::javax::swing::text::InternationalFormatter* this$0 = nullptr;
	int32_t direction = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_InternationalFormatter$IncrementAction_h_