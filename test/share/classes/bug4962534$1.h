#ifndef _bug4962534$1_h_
#define _bug4962534$1_h_
//$ class bug4962534$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4962534;

class bug4962534$1 : public ::java::lang::Runnable {
	$class(bug4962534$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4962534$1();
	void init$(::bug4962534* this$0);
	virtual void run() override;
	::bug4962534* this$0 = nullptr;
};

#endif // _bug4962534$1_h_