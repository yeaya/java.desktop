#ifndef _bug6263446$7_h_
#define _bug6263446$7_h_
//$ class bug6263446$7
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6263446$7 : public ::java::lang::Runnable {
	$class(bug6263446$7, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6263446$7();
	void init$(bool val$editing);
	virtual void run() override;
	bool val$editing = false;
};

#endif // _bug6263446$7_h_