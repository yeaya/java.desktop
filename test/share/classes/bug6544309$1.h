#ifndef _bug6544309$1_h_
#define _bug6544309$1_h_
//$ class bug6544309$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6544309;

class bug6544309$1 : public ::java::lang::Runnable {
	$class(bug6544309$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6544309$1();
	void init$(::bug6544309* val$test);
	virtual void run() override;
	::bug6544309* val$test = nullptr;
};

#endif // _bug6544309$1_h_