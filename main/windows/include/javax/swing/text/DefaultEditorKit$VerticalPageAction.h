#ifndef _javax_swing_text_DefaultEditorKit$VerticalPageAction_h_
#define _javax_swing_text_DefaultEditorKit$VerticalPageAction_h_
//$ class javax.swing.text.DefaultEditorKit$VerticalPageAction
//$ extends javax.swing.text.TextAction

#include <javax/swing/text/TextAction.h>

namespace java {
	namespace awt {
		class Rectangle;
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
		namespace text {
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultEditorKit$VerticalPageAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$VerticalPageAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$VerticalPageAction();
	void init$($String* nm, int32_t direction, bool select);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	int32_t constrainOffset(::javax::swing::text::JTextComponent* text, int32_t offset);
	int32_t constrainY(::javax::swing::text::JTextComponent* target, int32_t y, int32_t vis);
	int32_t getAdjustedY(::javax::swing::text::JTextComponent* text, ::java::awt::Rectangle* visible, int32_t index);
	bool select = false;
	int32_t direction = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$VerticalPageAction_h_