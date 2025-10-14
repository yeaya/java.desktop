#ifndef _CheckCommonUseCases_h_
#define _CheckCommonUseCases_h_
//$ class CheckCommonUseCases
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JPasswordField;
	}
}

class $export CheckCommonUseCases : public ::java::lang::Object {
	$class(CheckCommonUseCases, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CheckCommonUseCases();
	void init$();
	static void checkDifferentTextLength(::javax::swing::JPasswordField* pf);
	static void countListeners(::javax::swing::JPasswordField* pf);
	static void lambda$main$0();
	static void main($StringArray* args);
};

#endif // _CheckCommonUseCases_h_