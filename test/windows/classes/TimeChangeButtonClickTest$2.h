#ifndef _TimeChangeButtonClickTest$2_h_
#define _TimeChangeButtonClickTest$2_h_
//$ class TimeChangeButtonClickTest$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class TestUI;

class TimeChangeButtonClickTest$2 : public ::java::lang::Runnable {
	$class(TimeChangeButtonClickTest$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TimeChangeButtonClickTest$2();
	void init$(::TestUI* val$test);
	virtual void run() override;
	::TestUI* val$test = nullptr;
};

#endif // _TimeChangeButtonClickTest$2_h_