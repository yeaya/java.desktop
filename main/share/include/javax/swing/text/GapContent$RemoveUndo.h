#ifndef _javax_swing_text_GapContent$RemoveUndo_h_
#define _javax_swing_text_GapContent$RemoveUndo_h_
//$ class javax.swing.text.GapContent$RemoveUndo
//$ extends javax.swing.undo.AbstractUndoableEdit

#include <javax/swing/undo/AbstractUndoableEdit.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class GapContent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import GapContent$RemoveUndo : public ::javax::swing::undo::AbstractUndoableEdit {
	$class(GapContent$RemoveUndo, $NO_CLASS_INIT, ::javax::swing::undo::AbstractUndoableEdit)
public:
	GapContent$RemoveUndo();
	void init$(::javax::swing::text::GapContent* this$0, int32_t offset, $String* string);
	virtual void redo() override;
	virtual void undo() override;
	::javax::swing::text::GapContent* this$0 = nullptr;
	int32_t offset = 0;
	int32_t length = 0;
	$String* string = nullptr;
	::java::util::Vector* posRefs = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GapContent$RemoveUndo_h_