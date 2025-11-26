#ifndef _bug6274267$1_h_
#define _bug6274267$1_h_
//$ class bug6274267$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6274267;

class bug6274267$1 : public ::java::lang::Runnable {
	$class(bug6274267$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6274267$1();
	void init$(::bug6274267* val$test);
	virtual void run() override;
	::bug6274267* val$test = nullptr;
};

#endif // _bug6274267$1_h_