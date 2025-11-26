#ifndef _NormalBoundsTest$10_h_
#define _NormalBoundsTest$10_h_
//$ class NormalBoundsTest$10
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class NormalBoundsTest$10 : public ::java::lang::Runnable {
	$class(NormalBoundsTest$10, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NormalBoundsTest$10();
	void init$($String* val$lookAndFeelString);
	virtual void run() override;
	$String* val$lookAndFeelString = nullptr;
};

#endif // _NormalBoundsTest$10_h_