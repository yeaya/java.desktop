#ifndef _bug4816114$3_h_
#define _bug4816114$3_h_
//$ class bug4816114$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4816114;

class bug4816114$3 : public ::java::lang::Runnable {
	$class(bug4816114$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4816114$3();
	void init$(::bug4816114* this$0, int32_t val$width, int32_t val$height);
	virtual void run() override;
	::bug4816114* this$0 = nullptr;
	int32_t val$height = 0;
	int32_t val$width = 0;
};

#endif // _bug4816114$3_h_