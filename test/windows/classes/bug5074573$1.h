#ifndef _bug5074573$1_h_
#define _bug5074573$1_h_
//$ class bug5074573$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug5074573$1 : public ::java::lang::Runnable {
	$class(bug5074573$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug5074573$1();
	void init$($Class* val$textComponentClass);
	virtual void run() override;
	$Class* val$textComponentClass = nullptr;
};

#endif // _bug5074573$1_h_