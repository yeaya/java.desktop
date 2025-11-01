#ifndef _javax_swing_undo_AbstractUndoableEdit_h_
#define _javax_swing_undo_AbstractUndoableEdit_h_
//$ class javax.swing.undo.AbstractUndoableEdit
//$ extends javax.swing.undo.UndoableEdit
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/undo/UndoableEdit.h>

namespace javax {
	namespace swing {
		namespace undo {

class $export AbstractUndoableEdit : public ::javax::swing::undo::UndoableEdit, public ::java::io::Serializable {
	$class(AbstractUndoableEdit, 0, ::javax::swing::undo::UndoableEdit, ::java::io::Serializable)
public:
	AbstractUndoableEdit();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool addEdit(::javax::swing::undo::UndoableEdit* anEdit) override;
	virtual bool canRedo() override;
	virtual bool canUndo() override;
	virtual void die() override;
	virtual $String* getPresentationName() override;
	virtual $String* getRedoPresentationName() override;
	virtual $String* getUndoPresentationName() override;
	virtual bool isSignificant() override;
	virtual void redo() override;
	virtual bool replaceEdit(::javax::swing::undo::UndoableEdit* anEdit) override;
	virtual $String* toString() override;
	virtual void undo() override;
	static $String* UndoName;
	static $String* RedoName;
	bool hasBeenDone = false;
	bool alive = false;
};

		} // undo
	} // swing
} // javax

#endif // _javax_swing_undo_AbstractUndoableEdit_h_