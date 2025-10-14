#ifndef _FPMethodCalledTest$4_h_
#define _FPMethodCalledTest$4_h_
//$ class FPMethodCalledTest$4
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

class FPMethodCalledTest$4 : public ::FPMethodCalledTest$Test {
	$class(FPMethodCalledTest$4, $NO_CLASS_INIT, ::FPMethodCalledTest$Test)
public:
	FPMethodCalledTest$4();
	void init$();
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) override;
};

#endif // _FPMethodCalledTest$4_h_