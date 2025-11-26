#ifndef _javax_swing_text_DefaultStyledDocument$StyleChangeUndoableEdit_h_
#define _javax_swing_text_DefaultStyledDocument$StyleChangeUndoableEdit_h_
//$ class javax.swing.text.DefaultStyledDocument$StyleChangeUndoableEdit
//$ extends javax.swing.undo.AbstractUndoableEdit

#include <javax/swing/undo/AbstractUndoableEdit.h>

namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument$AbstractElement;
			class AttributeSet;
			class Style;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultStyledDocument$StyleChangeUndoableEdit : public ::javax::swing::undo::AbstractUndoableEdit {
	$class(DefaultStyledDocument$StyleChangeUndoableEdit, $NO_CLASS_INIT, ::javax::swing::undo::AbstractUndoableEdit)
public:
	DefaultStyledDocument$StyleChangeUndoableEdit();
	void init$(::javax::swing::text::AbstractDocument$AbstractElement* element, ::javax::swing::text::Style* newStyle);
	virtual void redo() override;
	virtual void undo() override;
	::javax::swing::text::AbstractDocument$AbstractElement* element = nullptr;
	::javax::swing::text::Style* newStyle = nullptr;
	::javax::swing::text::AttributeSet* oldStyle = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$StyleChangeUndoableEdit_h_