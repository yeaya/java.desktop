#ifndef _bug4760494$RobotThread_h_
#define _bug4760494$RobotThread_h_
//$ class bug4760494$RobotThread
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class $export bug4760494$RobotThread : public ::java::lang::Runnable {
	$class(bug4760494$RobotThread, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4760494$RobotThread();
	void init$();
	virtual void run() override;
};

#endif // _bug4760494$RobotThread_h_