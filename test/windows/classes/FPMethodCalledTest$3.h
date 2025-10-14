#ifndef _FPMethodCalledTest$3_h_
#define _FPMethodCalledTest$3_h_
//$ class FPMethodCalledTest$3
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

class FPMethodCalledTest$3 : public ::FPMethodCalledTest$Test {
	$class(FPMethodCalledTest$3, $NO_CLASS_INIT, ::FPMethodCalledTest$Test)
public:
	FPMethodCalledTest$3();
	void init$();
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) override;
};

#endif // _FPMethodCalledTest$3_h_