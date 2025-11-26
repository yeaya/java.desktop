#ifndef _bug6608456$TestFuture_h_
#define _bug6608456$TestFuture_h_
//$ class bug6608456$TestFuture
//$ extends java.util.concurrent.FutureTask

#include <java/util/concurrent/FutureTask.h>

class $export bug6608456$TestFuture : public ::java::util::concurrent::FutureTask {
	$class(bug6608456$TestFuture, $NO_CLASS_INIT, ::java::util::concurrent::FutureTask)
public:
	bug6608456$TestFuture();
	void init$();
	virtual void defaultCalled();
	virtual void delegateCalled();
	void updateState();
	$volatile(bool) defaultCalled$ = false;
	$volatile(bool) delegateCalled$ = false;
};

#endif // _bug6608456$TestFuture_h_