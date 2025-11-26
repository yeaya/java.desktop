#ifndef _javax_swing_InputVerifier_h_
#define _javax_swing_InputVerifier_h_
//$ class javax.swing.InputVerifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class $export InputVerifier : public ::java::lang::Object {
	$class(InputVerifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InputVerifier();
	void init$();
	virtual bool shouldYieldFocus(::javax::swing::JComponent* input);
	virtual bool shouldYieldFocus(::javax::swing::JComponent* source, ::javax::swing::JComponent* target);
	virtual bool verify(::javax::swing::JComponent* input) {return false;}
	virtual bool verifyTarget(::javax::swing::JComponent* target);
};

	} // swing
} // javax

#endif // _javax_swing_InputVerifier_h_