#ifndef _javax_swing_text_StringContent$InsertUndo_h_
#define _javax_swing_text_StringContent$InsertUndo_h_
//$ class javax.swing.text.StringContent$InsertUndo
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
			class StringContent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export StringContent$InsertUndo : public ::javax::swing::undo::AbstractUndoableEdit {
	$class(StringContent$InsertUndo, $NO_CLASS_INIT, ::javax::swing::undo::AbstractUndoableEdit)
public:
	StringContent$InsertUndo();
	void init$(::javax::swing::text::StringContent* this$0, int32_t offset, int32_t length);
	virtual void redo() override;
	virtual void undo() override;
	::javax::swing::text::StringContent* this$0 = nullptr;
	int32_t offset = 0;
	int32_t length = 0;
	$String* string = nullptr;
	::java::util::Vector* posRefs = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StringContent$InsertUndo_h_