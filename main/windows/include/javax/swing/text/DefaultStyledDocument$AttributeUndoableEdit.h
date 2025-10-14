#ifndef _javax_swing_text_DefaultStyledDocument$AttributeUndoableEdit_h_
#define _javax_swing_text_DefaultStyledDocument$AttributeUndoableEdit_h_
//$ class javax.swing.text.DefaultStyledDocument$AttributeUndoableEdit
//$ extends javax.swing.undo.AbstractUndoableEdit

#include <javax/swing/undo/AbstractUndoableEdit.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultStyledDocument$AttributeUndoableEdit : public ::javax::swing::undo::AbstractUndoableEdit {
	$class(DefaultStyledDocument$AttributeUndoableEdit, $NO_CLASS_INIT, ::javax::swing::undo::AbstractUndoableEdit)
public:
	DefaultStyledDocument$AttributeUndoableEdit();
	void init$(::javax::swing::text::Element* element, ::javax::swing::text::AttributeSet* newAttributes, bool isReplacing);
	virtual void redo() override;
	virtual void undo() override;
	::javax::swing::text::AttributeSet* newAttributes = nullptr;
	::javax::swing::text::AttributeSet* copy = nullptr;
	bool isReplacing = false;
	::javax::swing::text::Element* element = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$AttributeUndoableEdit_h_