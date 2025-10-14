#ifndef _InternalFrameIsNotCollectedTest_h_
#define _InternalFrameIsNotCollectedTest_h_
//$ class InternalFrameIsNotCollectedTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class InternalFrameIsNotCollectedTest$CustomInternalFrame;
namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export InternalFrameIsNotCollectedTest : public ::java::lang::Object {
	$class(InternalFrameIsNotCollectedTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InternalFrameIsNotCollectedTest();
	void init$();
	static void closeInternalFrame();
	static void initRobot();
	static void initUI();
	static void invokeGC();
	static void lambda$main$0();
	static void main($StringArray* args);
	static const int32_t maxWaitTime = 0x000186A0;
	static const int32_t waitTime = 5000;
	static ::java::awt::Robot* robot;
	static ::InternalFrameIsNotCollectedTest$CustomInternalFrame* iFrame;
	static ::javax::swing::JFrame* frame;
};

#endif // _InternalFrameIsNotCollectedTest_h_