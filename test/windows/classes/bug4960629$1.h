#ifndef _bug4960629$1_h_
#define _bug4960629$1_h_
//$ class bug4960629$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4960629;

class bug4960629$1 : public ::java::lang::Runnable {
	$class(bug4960629$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4960629$1();
	void init$(::bug4960629* this$0);
	virtual void run() override;
	::bug4960629* this$0 = nullptr;
};

#endif // _bug4960629$1_h_