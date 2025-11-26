#ifndef _TestJInternalFrameIconify$1_h_
#define _TestJInternalFrameIconify$1_h_
//$ class TestJInternalFrameIconify$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class TestJInternalFrameIconify$1 : public ::java::lang::Runnable {
	$class(TestJInternalFrameIconify$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TestJInternalFrameIconify$1();
	void init$($String* val$lookAndFeelString);
	virtual void run() override;
	$String* val$lookAndFeelString = nullptr;
};

#endif // _TestJInternalFrameIconify$1_h_