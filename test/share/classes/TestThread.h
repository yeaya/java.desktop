#ifndef _TestThread_h_
#define _TestThread_h_
//$ class TestThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace awt {
		class Robot;
	}
}

class TestThread : public ::java::lang::Thread {
	$class(TestThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	TestThread();
	void init$();
	virtual void run() override;
	::java::awt::Robot* testRobot = nullptr;
};

#endif // _TestThread_h_