#ifndef _bug6691503$3_h_
#define _bug6691503$3_h_
//$ class bug6691503$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug6691503;

class bug6691503$3 : public ::java::lang::Runnable {
	$class(bug6691503$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6691503$3();
	void init$(::bug6691503* this$0);
	virtual void run() override;
	::bug6691503* this$0 = nullptr;
};

#endif // _bug6691503$3_h_