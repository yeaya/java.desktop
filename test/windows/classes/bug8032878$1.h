#ifndef _bug8032878$1_h_
#define _bug8032878$1_h_
//$ class bug8032878$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug8032878;

class bug8032878$1 : public ::java::lang::Runnable {
	$class(bug8032878$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug8032878$1();
	void init$(::bug8032878* this$0);
	virtual void run() override;
	::bug8032878* this$0 = nullptr;
};

#endif // _bug8032878$1_h_