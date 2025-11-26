#ifndef _bug6794831$1_h_
#define _bug6794831$1_h_
//$ class bug6794831$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6794831;

class bug6794831$1 : public ::java::lang::Runnable {
	$class(bug6794831$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6794831$1();
	void init$(::bug6794831* this$0);
	virtual void run() override;
	::bug6794831* this$0 = nullptr;
};

#endif // _bug6794831$1_h_