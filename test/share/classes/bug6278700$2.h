#ifndef _bug6278700$2_h_
#define _bug6278700$2_h_
//$ class bug6278700$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6278700;

class bug6278700$2 : public ::java::lang::Runnable {
	$class(bug6278700$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6278700$2();
	void init$(::bug6278700* this$0);
	virtual void run() override;
	::bug6278700* this$0 = nullptr;
};

#endif // _bug6278700$2_h_