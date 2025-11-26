#ifndef _bug6462008$8_h_
#define _bug6462008$8_h_
//$ class bug6462008$8
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class bug6462008$8 : public ::java::lang::Runnable {
	$class(bug6462008$8, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6462008$8();
	void init$(int32_t val$anchor, int32_t val$lead, $ints* val$sels);
	virtual void run() override;
	$ints* val$sels = nullptr;
	int32_t val$lead = 0;
	int32_t val$anchor = 0;
};

#endif // _bug6462008$8_h_