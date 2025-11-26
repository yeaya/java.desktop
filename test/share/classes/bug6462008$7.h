#ifndef _bug6462008$7_h_
#define _bug6462008$7_h_
//$ class bug6462008$7
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6462008$7 : public ::java::lang::Runnable {
	$class(bug6462008$7, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6462008$7();
	void init$(int32_t val$anchorLeadValue);
	virtual void run() override;
	int32_t val$anchorLeadValue = 0;
};

#endif // _bug6462008$7_h_