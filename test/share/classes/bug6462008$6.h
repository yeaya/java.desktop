#ifndef _bug6462008$6_h_
#define _bug6462008$6_h_
//$ class bug6462008$6
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6462008$6 : public ::java::lang::Runnable {
	$class(bug6462008$6, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6462008$6();
	void init$(int32_t val$index0, int32_t val$index1);
	virtual void run() override;
	int32_t val$index1 = 0;
	int32_t val$index0 = 0;
};

#endif // _bug6462008$6_h_