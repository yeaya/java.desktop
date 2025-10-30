#ifndef _javax_swing_undo_CannotRedoException_h_
#define _javax_swing_undo_CannotRedoException_h_
//$ class javax.swing.undo.CannotRedoException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace javax {
	namespace swing {
		namespace undo {

class $import CannotRedoException : public ::java::lang::RuntimeException {
	$class(CannotRedoException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	CannotRedoException();
	void init$();
	CannotRedoException(const CannotRedoException& e);
	virtual void throw$() override;
	inline CannotRedoException* operator ->() {
		return (CannotRedoException*)throwing$;
	}
};

		} // undo
	} // swing
} // javax

#endif // _javax_swing_undo_CannotRedoException_h_