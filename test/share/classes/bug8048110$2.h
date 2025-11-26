#ifndef _bug8048110$2_h_
#define _bug8048110$2_h_
//$ class bug8048110$2
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class bug8048110$2 : public ::java::lang::Thread {
	$class(bug8048110$2, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	bug8048110$2();
	void init$();
	virtual void run() override;
};

#endif // _bug8048110$2_h_