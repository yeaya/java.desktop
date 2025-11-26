#ifndef _JInternalFrameIconTest$1_h_
#define _JInternalFrameIconTest$1_h_
//$ class JInternalFrameIconTest$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class JInternalFrameIconTest$1 : public ::java::lang::Runnable {
	$class(JInternalFrameIconTest$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JInternalFrameIconTest$1();
	void init$($String* val$lookAndFeelString);
	virtual void run() override;
	$String* val$lookAndFeelString = nullptr;
};

#endif // _JInternalFrameIconTest$1_h_