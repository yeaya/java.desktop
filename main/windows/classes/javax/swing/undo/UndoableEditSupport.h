#ifndef _javax_swing_undo_UndoableEditSupport_h_
#define _javax_swing_undo_UndoableEditSupport_h_
//$ class javax.swing.undo.UndoableEditSupport
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class UndoableEditListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace undo {
			class CompoundEdit;
			class UndoableEdit;
		}
	}
}

namespace javax {
	namespace swing {
		namespace undo {

class $export UndoableEditSupport : public ::java::lang::Object {
	$class(UndoableEditSupport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UndoableEditSupport();
	void init$();
	void init$(Object$* r);
	virtual void _postEdit(::javax::swing::undo::UndoableEdit* e);
	virtual void addUndoableEditListener(::javax::swing::event::UndoableEditListener* l);
	virtual void beginUpdate();
	virtual ::javax::swing::undo::CompoundEdit* createCompoundEdit();
	virtual void endUpdate();
	virtual $Array<::javax::swing::event::UndoableEditListener>* getUndoableEditListeners();
	virtual int32_t getUpdateLevel();
	virtual void postEdit(::javax::swing::undo::UndoableEdit* e);
	virtual void removeUndoableEditListener(::javax::swing::event::UndoableEditListener* l);
	virtual $String* toString() override;
	int32_t updateLevel = 0;
	::javax::swing::undo::CompoundEdit* compoundEdit = nullptr;
	::java::util::Vector* listeners = nullptr;
	$Object* realSource = nullptr;
};

		} // undo
	} // swing
} // javax

#endif // _javax_swing_undo_UndoableEditSupport_h_