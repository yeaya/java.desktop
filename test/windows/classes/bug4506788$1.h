#ifndef _bug4506788$1_h_
#define _bug4506788$1_h_
//$ class bug4506788$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4506788;

class bug4506788$1 : public ::java::lang::Runnable {
	$class(bug4506788$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4506788$1();
	void init$(::bug4506788* this$0);
	virtual void run() override;
	::bug4506788* this$0 = nullptr;
};

#endif // _bug4506788$1_h_