#ifndef _javax_swing_text_StateInvariantError_h_
#define _javax_swing_text_StateInvariantError_h_
//$ class javax.swing.text.StateInvariantError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace javax {
	namespace swing {
		namespace text {

class StateInvariantError : public ::java::lang::Error {
	$class(StateInvariantError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	StateInvariantError();
	void init$($String* s);
	StateInvariantError(const StateInvariantError& e);
	virtual void throw$() override;
	inline StateInvariantError* operator ->() {
		return (StateInvariantError*)throwing$;
	}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StateInvariantError_h_