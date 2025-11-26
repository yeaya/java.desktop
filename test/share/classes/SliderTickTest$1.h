#ifndef _SliderTickTest$1_h_
#define _SliderTickTest$1_h_
//$ class SliderTickTest$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class TestUI;

class SliderTickTest$1 : public ::java::lang::Runnable {
	$class(SliderTickTest$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SliderTickTest$1();
	void init$(::TestUI* val$test);
	virtual void run() override;
	::TestUI* val$test = nullptr;
};

#endif // _SliderTickTest$1_h_