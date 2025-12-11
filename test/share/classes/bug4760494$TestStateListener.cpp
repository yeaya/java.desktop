#include <bug4760494$TestStateListener.h>

#include <bug4760494$RobotThread.h>
#include <bug4760494.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $bug4760494$RobotThread = ::bug4760494$RobotThread;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _bug4760494$TestStateListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4760494$TestStateListener::*)()>(&bug4760494$TestStateListener::init$))},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4760494$TestStateListener_InnerClassesInfo_[] = {
	{"bug4760494$TestStateListener", "bug4760494", "TestStateListener", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _bug4760494$TestStateListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4760494$TestStateListener",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_bug4760494$TestStateListener_MethodInfo_,
	nullptr,
	nullptr,
	_bug4760494$TestStateListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4760494"
};

$Object* allocate$bug4760494$TestStateListener($Class* clazz) {
	return $of($alloc(bug4760494$TestStateListener));
}

void bug4760494$TestStateListener::init$() {
	$WindowAdapter::init$();
}

void bug4760494$TestStateListener::windowOpened($WindowEvent* ev) {
	$useLocalCurrentObjectStackCache();
	try {
		$$new($Thread, static_cast<$Runnable*>($$new($bug4760494$RobotThread)))->start();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Thread Exception"_s);
	}
}

bug4760494$TestStateListener::bug4760494$TestStateListener() {
}

$Class* bug4760494$TestStateListener::load$($String* name, bool initialize) {
	$loadClass(bug4760494$TestStateListener, name, initialize, &_bug4760494$TestStateListener_ClassInfo_, allocate$bug4760494$TestStateListener);
	return class$;
}

$Class* bug4760494$TestStateListener::class$ = nullptr;