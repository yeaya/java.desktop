#ifndef _FPMethodCalledTest$Test_h_
#define _FPMethodCalledTest$Test_h_
//$ class FPMethodCalledTest$Test
//$ extends java.lang.Object

#include <java/lang/Object.h>

class FPMethodCalledTest$Resultable;
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}

class $export FPMethodCalledTest$Test : public ::java::lang::Object {
	$class(FPMethodCalledTest$Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FPMethodCalledTest$Test();
	void init$();
	void init$(bool isPasswordField);
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) {return nullptr;}
	virtual bool isPasswordField();
	::FPMethodCalledTest$Resultable* resultable = nullptr;
	bool isPasswordField$ = false;
};

#endif // _FPMethodCalledTest$Test_h_