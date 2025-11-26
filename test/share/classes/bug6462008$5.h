#ifndef _bug6462008$5_h_
#define _bug6462008$5_h_
//$ class bug6462008$5
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6462008$5 : public ::java::lang::Runnable {
	$class(bug6462008$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6462008$5();
	void init$(int32_t val$selectionMode);
	virtual void run() override;
	int32_t val$selectionMode = 0;
};

#endif // _bug6462008$5_h_