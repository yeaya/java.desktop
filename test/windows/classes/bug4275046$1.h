#ifndef _bug4275046$1_h_
#define _bug4275046$1_h_
//$ class bug4275046$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4275046;

class bug4275046$1 : public ::java::lang::Runnable {
	$class(bug4275046$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4275046$1();
	void init$(::bug4275046* this$0);
	virtual void run() override;
	::bug4275046* this$0 = nullptr;
};

#endif // _bug4275046$1_h_