#ifndef _javax_swing_undo_CompoundEdit_h_
#define _javax_swing_undo_CompoundEdit_h_
//$ class javax.swing.undo.CompoundEdit
//$ extends javax.swing.undo.AbstractUndoableEdit

#include <javax/swing/undo/AbstractUndoableEdit.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace undo {
			class UndoableEdit;
		}
	}
}

namespace javax {
	namespace swing {
		namespace undo {

class $export CompoundEdit : public ::javax::swing::undo::AbstractUndoableEdit {
	$class(CompoundEdit, $NO_CLASS_INIT, ::javax::swing::undo::AbstractUndoableEdit)
public:
	CompoundEdit();
	void init$();
	virtual bool addEdit(::javax::swing::undo::UndoableEdit* anEdit) override;
	virtual bool canRedo() override;
	virtual bool canUndo() override;
	virtual void die() override;
	virtual void end();
	virtual $String* getPresentationName() override;
	virtual $String* getRedoPresentationName() override;
	virtual $String* getUndoPresentationName() override;
	virtual bool isInProgress();
	virtual bool isSignificant() override;
	virtual ::javax::swing::undo::UndoableEdit* lastEdit();
	virtual void redo() override;
	virtual $String* toString() override;
	virtual void undo() override;
	bool inProgress = false;
	::java::util::Vector* edits = nullptr;
};

		} // undo
	} // swing
} // javax

#endif // _javax_swing_undo_CompoundEdit_h_