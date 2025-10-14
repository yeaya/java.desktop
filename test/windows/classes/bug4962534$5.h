#ifndef _bug4962534$5_h_
#define _bug4962534$5_h_
//$ class bug4962534$5
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class bug4962534;

class bug4962534$5 : public ::java::lang::Runnable {
	$class(bug4962534$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4962534$5();
	void init$(::bug4962534* this$0, $booleans* val$result);
	virtual void run() override;
	::bug4962534* this$0 = nullptr;
	$booleans* val$result = nullptr;
};

#endif // _bug4962534$5_h_