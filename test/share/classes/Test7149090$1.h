#ifndef _Test7149090$1_h_
#define _Test7149090$1_h_
//$ class Test7149090$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class Test7149090$1 : public ::java::lang::Runnable {
	$class(Test7149090$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Test7149090$1();
	void init$(int32_t val$expectedPosition);
	virtual void run() override;
	int32_t val$expectedPosition = 0;
};

#endif // _Test7149090$1_h_