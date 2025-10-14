#ifndef _SliderTickTest$2_h_
#define _SliderTickTest$2_h_
//$ class SliderTickTest$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class TestUI;

class SliderTickTest$2 : public ::java::lang::Runnable {
	$class(SliderTickTest$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SliderTickTest$2();
	void init$(::TestUI* val$test);
	virtual void run() override;
	::TestUI* val$test = nullptr;
};

#endif // _SliderTickTest$2_h_