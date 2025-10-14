#ifndef _TestCCEOnEditEvent$1_h_
#define _TestCCEOnEditEvent$1_h_
//$ class TestCCEOnEditEvent$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class TestCCEOnEditEvent;

class TestCCEOnEditEvent$1 : public ::java::lang::Runnable {
	$class(TestCCEOnEditEvent$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TestCCEOnEditEvent$1();
	void init$(::TestCCEOnEditEvent* val$test);
	virtual void run() override;
	::TestCCEOnEditEvent* val$test = nullptr;
};

#endif // _TestCCEOnEditEvent$1_h_