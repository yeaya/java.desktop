#ifndef _TestJInternalFrameIconify$2_h_
#define _TestJInternalFrameIconify$2_h_
//$ class TestJInternalFrameIconify$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class TestJInternalFrameIconify$2 : public ::java::lang::Runnable {
	$class(TestJInternalFrameIconify$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TestJInternalFrameIconify$2();
	void init$($String* val$lookAndFeelString);
	virtual void run() override;
	$String* val$lookAndFeelString = nullptr;
};

#endif // _TestJInternalFrameIconify$2_h_