#ifndef _TimeChangeButtonClickTest$1_h_
#define _TimeChangeButtonClickTest$1_h_
//$ class TimeChangeButtonClickTest$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class TestUI;

class TimeChangeButtonClickTest$1 : public ::java::lang::Runnable {
	$class(TimeChangeButtonClickTest$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TimeChangeButtonClickTest$1();
	void init$(::TestUI* val$test);
	virtual void run() override;
	::TestUI* val$test = nullptr;
};

#endif // _TimeChangeButtonClickTest$1_h_