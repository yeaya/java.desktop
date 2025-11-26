#ifndef _bug4936917$1_h_
#define _bug4936917$1_h_
//$ class bug4936917$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4936917;

class bug4936917$1 : public ::java::lang::Runnable {
	$class(bug4936917$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4936917$1();
	void init$(::bug4936917* this$0);
	virtual void run() override;
	::bug4936917* this$0 = nullptr;
};

#endif // _bug4936917$1_h_