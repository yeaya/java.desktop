#ifndef _bug8032667$1_h_
#define _bug8032667$1_h_
//$ class bug8032667$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug8032667;

class bug8032667$1 : public ::java::lang::Runnable {
	$class(bug8032667$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug8032667$1();
	void init$(::bug8032667* this$0);
	virtual void run() override;
	::bug8032667* this$0 = nullptr;
};

#endif // _bug8032667$1_h_