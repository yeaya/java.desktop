#ifndef _JInternalFrameIconTest$2_h_
#define _JInternalFrameIconTest$2_h_
//$ class JInternalFrameIconTest$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class JInternalFrameIconTest$2 : public ::java::lang::Runnable {
	$class(JInternalFrameIconTest$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JInternalFrameIconTest$2();
	void init$($String* val$lookAndFeelString);
	virtual void run() override;
	$String* val$lookAndFeelString = nullptr;
};

#endif // _JInternalFrameIconTest$2_h_