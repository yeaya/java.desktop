#ifndef _javax_swing_undo_UndoableEdit_h_
#define _javax_swing_undo_UndoableEdit_h_
//$ interface javax.swing.undo.UndoableEdit
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace undo {

class $export UndoableEdit : public ::java::lang::Object {
	$interface(UndoableEdit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool addEdit(::javax::swing::undo::UndoableEdit* anEdit) {return false;}
	virtual bool canRedo() {return false;}
	virtual bool canUndo() {return false;}
	virtual void die() {}
	virtual $String* getPresentationName() {return nullptr;}
	virtual $String* getRedoPresentationName() {return nullptr;}
	virtual $String* getUndoPresentationName() {return nullptr;}
	virtual bool isSignificant() {return false;}
	virtual void redo() {}
	virtual bool replaceEdit(::javax::swing::undo::UndoableEdit* anEdit) {return false;}
	virtual void undo() {}
};

		} // undo
	} // swing
} // javax

#endif // _javax_swing_undo_UndoableEdit_h_