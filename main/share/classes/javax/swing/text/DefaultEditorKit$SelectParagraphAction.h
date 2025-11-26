#ifndef _javax_swing_text_DefaultEditorKit$SelectParagraphAction_h_
#define _javax_swing_text_DefaultEditorKit$SelectParagraphAction_h_
//$ class javax.swing.text.DefaultEditorKit$SelectParagraphAction
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
		class Action;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultEditorKit$SelectParagraphAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$SelectParagraphAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$SelectParagraphAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::Action* start = nullptr;
	::javax::swing::Action* end = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$SelectParagraphAction_h_