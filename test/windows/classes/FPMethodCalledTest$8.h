#ifndef _FPMethodCalledTest$8_h_
#define _FPMethodCalledTest$8_h_
//$ class FPMethodCalledTest$8
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

class FPMethodCalledTest$8 : public ::FPMethodCalledTest$Test {
	$class(FPMethodCalledTest$8, $NO_CLASS_INIT, ::FPMethodCalledTest$Test)
public:
	FPMethodCalledTest$8();
	void init$(bool isPasswordField);
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) override;
};

#endif // _FPMethodCalledTest$8_h_