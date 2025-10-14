#ifndef _FocusTraversal$1_h_
#define _FocusTraversal$1_h_
//$ class FocusTraversal$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class FocusTraversal$1 : public ::java::lang::Runnable {
	$class(FocusTraversal$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FocusTraversal$1();
	void init$($String* val$lookAndFeelString);
	virtual void run() override;
	$String* val$lookAndFeelString = nullptr;
};

#endif // _FocusTraversal$1_h_