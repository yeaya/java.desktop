#ifndef _javax_swing_undo_UndoManager_h_
#define _javax_swing_undo_UndoManager_h_
//$ class javax.swing.undo.UndoManager
//$ extends javax.swing.undo.CompoundEdit
//$ implements javax.swing.event.UndoableEditListener

#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/undo/CompoundEdit.h>

namespace javax {
	namespace swing {
		namespace event {
			class UndoableEditEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace undo {
			class UndoManager$Action;
			class UndoableEdit;
		}
	}
}
namespace sun {
	namespace swing {
		namespace text {
			class UndoableEditLockSupport;
		}
	}
}

namespace javax {
	namespace swing {
		namespace undo {

class $import UndoManager : public ::javax::swing::undo::CompoundEdit, public ::javax::swing::event::UndoableEditListener {
	$class(UndoManager, $NO_CLASS_INIT, ::javax::swing::undo::CompoundEdit, ::javax::swing::event::UndoableEditListener)
public:
	UndoManager();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool addEdit(::javax::swing::undo::UndoableEdit* anEdit) override;
	virtual bool canRedo() override;
	virtual bool canUndo() override;
	virtual bool canUndoOrRedo();
	virtual void discardAllEdits();
	virtual ::javax::swing::undo::UndoableEdit* editToBeRedone();
	virtual ::javax::swing::undo::UndoableEdit* editToBeUndone();
	virtual void end() override;
	::sun::swing::text::UndoableEditLockSupport* getEditLockSupport(::javax::swing::undo::UndoableEdit* anEdit);
	virtual int32_t getLimit();
	virtual $String* getRedoPresentationName() override;
	virtual $String* getUndoOrRedoPresentationName();
	virtual $String* getUndoPresentationName() override;
	virtual void redo() override;
	virtual void redoTo(::javax::swing::undo::UndoableEdit* edit);
	virtual void setLimit(int32_t l);
	virtual $String* toString() override;
	virtual void trimEdits(int32_t from, int32_t to);
	virtual void trimForLimit();
	void tryUndoOrRedo(::javax::swing::undo::UndoManager$Action* action);
	virtual void undo() override;
	virtual void undoOrRedo();
	virtual void undoTo(::javax::swing::undo::UndoableEdit* edit);
	virtual void undoableEditHappened(::javax::swing::event::UndoableEditEvent* e) override;
	int32_t indexOfNextAdd = 0;
	int32_t limit = 0;
};

		} // undo
	} // swing
} // javax

#endif // _javax_swing_undo_UndoManager_h_