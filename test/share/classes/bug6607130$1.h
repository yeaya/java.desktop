#ifndef _bug6607130$1_h_
#define _bug6607130$1_h_
//$ class bug6607130$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6607130;

class bug6607130$1 : public ::java::lang::Runnable {
	$class(bug6607130$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6607130$1();
	void init$(::bug6607130* val$test);
	virtual void run() override;
	::bug6607130* val$test = nullptr;
};

#endif // _bug6607130$1_h_