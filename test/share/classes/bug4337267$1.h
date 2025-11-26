#ifndef _bug4337267$1_h_
#define _bug4337267$1_h_
//$ class bug4337267$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4337267;

class bug4337267$1 : public ::java::lang::Runnable {
	$class(bug4337267$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4337267$1();
	void init$(::bug4337267* val$test);
	virtual void run() override;
	::bug4337267* val$test = nullptr;
};

#endif // _bug4337267$1_h_