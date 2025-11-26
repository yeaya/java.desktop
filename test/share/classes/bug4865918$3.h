#ifndef _bug4865918$3_h_
#define _bug4865918$3_h_
//$ class bug4865918$3
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class bug4865918$3 : public ::java::lang::Runnable {
	$class(bug4865918$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4865918$3();
	void init$($ints* val$result);
	virtual void run() override;
	$ints* val$result = nullptr;
};

#endif // _bug4865918$3_h_