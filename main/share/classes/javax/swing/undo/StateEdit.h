#ifndef _javax_swing_undo_StateEdit_h_
#define _javax_swing_undo_StateEdit_h_
//$ class javax.swing.undo.StateEdit
//$ extends javax.swing.undo.AbstractUndoableEdit

#include <javax/swing/undo/AbstractUndoableEdit.h>

#pragma push_macro("RCSID")
#undef RCSID

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		namespace undo {
			class StateEditable;
		}
	}
}

namespace javax {
	namespace swing {
		namespace undo {

class $export StateEdit : public ::javax::swing::undo::AbstractUndoableEdit {
	$class(StateEdit, 0, ::javax::swing::undo::AbstractUndoableEdit)
public:
	StateEdit();
	void init$(::javax::swing::undo::StateEditable* anObject);
	void init$(::javax::swing::undo::StateEditable* anObject, $String* name);
	virtual void end();
	virtual $String* getPresentationName() override;
	virtual void init(::javax::swing::undo::StateEditable* anObject, $String* name);
	virtual void redo() override;
	virtual void removeRedundantState();
	virtual void undo() override;
	static $String* RCSID;
	::javax::swing::undo::StateEditable* object = nullptr;
	::java::util::Hashtable* preState = nullptr;
	::java::util::Hashtable* postState = nullptr;
	$String* undoRedoName = nullptr;
};

		} // undo
	} // swing
} // javax

#pragma pop_macro("RCSID")

#endif // _javax_swing_undo_StateEdit_h_