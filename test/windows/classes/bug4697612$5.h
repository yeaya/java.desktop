#ifndef _bug4697612$5_h_
#define _bug4697612$5_h_
//$ class bug4697612$5
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class bug4697612$5 : public ::java::lang::Runnable {
	$class(bug4697612$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4697612$5();
	void init$($ints* val$result);
	virtual void run() override;
	$ints* val$result = nullptr;
};

#endif // _bug4697612$5_h_