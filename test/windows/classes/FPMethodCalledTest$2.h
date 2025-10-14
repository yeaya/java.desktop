#ifndef _FPMethodCalledTest$2_h_
#define _FPMethodCalledTest$2_h_
//$ class FPMethodCalledTest$2
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

class FPMethodCalledTest$2 : public ::FPMethodCalledTest$Test {
	$class(FPMethodCalledTest$2, $NO_CLASS_INIT, ::FPMethodCalledTest$Test)
public:
	FPMethodCalledTest$2();
	void init$();
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) override;
};

#endif // _FPMethodCalledTest$2_h_