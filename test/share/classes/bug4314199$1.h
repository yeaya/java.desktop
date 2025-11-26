#ifndef _bug4314199$1_h_
#define _bug4314199$1_h_
//$ class bug4314199$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4314199;

class bug4314199$1 : public ::java::lang::Runnable {
	$class(bug4314199$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4314199$1();
	void init$(::bug4314199* this$0);
	virtual void run() override;
	::bug4314199* this$0 = nullptr;
};

#endif // _bug4314199$1_h_