#ifndef _FPMethodCalledTest$10_h_
#define _FPMethodCalledTest$10_h_
//$ class FPMethodCalledTest$10
//$ extends FPMethodCalledTest$Test

#include <FPMethodCalledTest$Test.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}

class FPMethodCalledTest$10 : public ::FPMethodCalledTest$Test {
	$class(FPMethodCalledTest$10, $NO_CLASS_INIT, ::FPMethodCalledTest$Test)
public:
	FPMethodCalledTest$10();
	void init$(bool isPasswordField);
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) override;
};

#endif // _FPMethodCalledTest$10_h_