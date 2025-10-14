#ifndef _bug8038113$1_h_
#define _bug8038113$1_h_
//$ class bug8038113$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug8038113;

class bug8038113$1 : public ::java::lang::Runnable {
	$class(bug8038113$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug8038113$1();
	void init$(::bug8038113* this$0);
	virtual void run() override;
	::bug8038113* this$0 = nullptr;
};

#endif // _bug8038113$1_h_