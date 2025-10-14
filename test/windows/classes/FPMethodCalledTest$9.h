#ifndef _FPMethodCalledTest$9_h_
#define _FPMethodCalledTest$9_h_
//$ class FPMethodCalledTest$9
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

class FPMethodCalledTest$9 : public ::FPMethodCalledTest$Test {
	$class(FPMethodCalledTest$9, $NO_CLASS_INIT, ::FPMethodCalledTest$Test)
public:
	FPMethodCalledTest$9();
	void init$(bool isPasswordField);
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) override;
};

#endif // _FPMethodCalledTest$9_h_