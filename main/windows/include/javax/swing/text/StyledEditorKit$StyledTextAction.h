#ifndef _javax_swing_text_StyledEditorKit$StyledTextAction_h_
#define _javax_swing_text_StyledEditorKit$StyledTextAction_h_
//$ class javax.swing.text.StyledEditorKit$StyledTextAction
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
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class StyledDocument;
			class StyledEditorKit;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import StyledEditorKit$StyledTextAction : public ::javax::swing::text::TextAction {
	$class(StyledEditorKit$StyledTextAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	StyledEditorKit$StyledTextAction();
	void init$($String* nm);
	::javax::swing::JEditorPane* getEditor(::java::awt::event::ActionEvent* e);
	::javax::swing::text::StyledDocument* getStyledDocument(::javax::swing::JEditorPane* e);
	::javax::swing::text::StyledEditorKit* getStyledEditorKit(::javax::swing::JEditorPane* e);
	void setCharacterAttributes(::javax::swing::JEditorPane* editor, ::javax::swing::text::AttributeSet* attr, bool replace);
	void setParagraphAttributes(::javax::swing::JEditorPane* editor, ::javax::swing::text::AttributeSet* attr, bool replace);
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$StyledTextAction_h_