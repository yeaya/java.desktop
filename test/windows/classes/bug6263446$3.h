#ifndef _bug6263446$3_h_
#define _bug6263446$3_h_
//$ class bug6263446$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6263446$3 : public ::java::lang::Runnable {
	$class(bug6263446$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6263446$3();
	void init$(int32_t val$clicks);
	virtual void run() override;
	int32_t val$clicks = 0;
};

#endif // _bug6263446$3_h_