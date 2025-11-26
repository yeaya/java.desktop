#ifndef _FPMethodCalledTest$6_h_
#define _FPMethodCalledTest$6_h_
//$ class FPMethodCalledTest$6
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

class FPMethodCalledTest$6 : public ::FPMethodCalledTest$Test {
	$class(FPMethodCalledTest$6, $NO_CLASS_INIT, ::FPMethodCalledTest$Test)
public:
	FPMethodCalledTest$6();
	void init$();
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) override;
};

#endif // _FPMethodCalledTest$6_h_