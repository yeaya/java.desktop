#ifndef _FPMethodCalledTest$5_h_
#define _FPMethodCalledTest$5_h_
//$ class FPMethodCalledTest$5
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

class FPMethodCalledTest$5 : public ::FPMethodCalledTest$Test {
	$class(FPMethodCalledTest$5, $NO_CLASS_INIT, ::FPMethodCalledTest$Test)
public:
	FPMethodCalledTest$5();
	void init$();
	virtual ::javax::swing::text::View* createView(::javax::swing::text::Element* elem) override;
};

#endif // _FPMethodCalledTest$5_h_