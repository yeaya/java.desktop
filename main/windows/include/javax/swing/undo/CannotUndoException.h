#ifndef _javax_swing_undo_CannotUndoException_h_
#define _javax_swing_undo_CannotUndoException_h_
//$ class javax.swing.undo.CannotUndoException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace javax {
	namespace swing {
		namespace undo {

class $import CannotUndoException : public ::java::lang::RuntimeException {
	$class(CannotUndoException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	CannotUndoException();
	void init$();
	CannotUndoException(const CannotUndoException& e);
	CannotUndoException wrapper$();
	virtual void throwWrapper$() override;
};

		} // undo
	} // swing
} // javax

#endif // _javax_swing_undo_CannotUndoException_h_