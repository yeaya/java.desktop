#ifndef _bug4697612$6_h_
#define _bug4697612$6_h_
//$ class bug4697612$6
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class bug4697612$6 : public ::java::lang::Runnable {
	$class(bug4697612$6, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4697612$6();
	void init$($ints* val$result);
	virtual void run() override;
	$ints* val$result = nullptr;
};

#endif // _bug4697612$6_h_