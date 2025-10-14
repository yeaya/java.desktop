#ifndef _FPMethodCalledTest$7_h_
#define _FPMethodCalledTest$7_h_
//$ class FPMethodCalledTest$7
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

class FPMethodCalledTest$7 : public ::FPMethodCalledTest$Test {
	$class(FPMethodCalledTest$7, $NO_CLASS_INIT, ::FPMethodCalledTest$Test)
public:
	FPMethodCalledTest$7();
	void init$();
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) override;
};

#endif // _FPMethodCalledTest$7_h_