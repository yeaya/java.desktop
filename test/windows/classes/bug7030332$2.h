#ifndef _bug7030332$2_h_
#define _bug7030332$2_h_
//$ class bug7030332$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug7030332;

class bug7030332$2 : public ::java::lang::Runnable {
	$class(bug7030332$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug7030332$2();
	void init$(::bug7030332* this$0);
	virtual void run() override;
	::bug7030332* this$0 = nullptr;
};

#endif // _bug7030332$2_h_