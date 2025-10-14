#include <bug8031573$1.h>

#include <bug8031573.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $bug8031573 = ::bug8031573;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$MethodInfo _bug8031573$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8031573$1::*)()>(&bug8031573$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8031573$1_EnclosingMethodInfo_ = {
	"bug8031573",
	"createTestGUI",
	"()V"
};

$InnerClassInfo _bug8031573$1_InnerClassesInfo_[] = {
	{"bug8031573$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8031573$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8031573$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_bug8031573$1_MethodInfo_,
	nullptr,
	&_bug8031573$1_EnclosingMethodInfo_,
	_bug8031573$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8031573"
};

$Object* allocate$bug8031573$1($Class* clazz) {
	return $of($alloc(bug8031573$1));
}

void bug8031573$1::init$() {
	$WindowAdapter::init$();
}

void bug8031573$1::windowClosing($WindowEvent* e) {
	$init($bug8031573);
	$nc($bug8031573::latch)->countDown();
}

bug8031573$1::bug8031573$1() {
}

$Class* bug8031573$1::load$($String* name, bool initialize) {
	$loadClass(bug8031573$1, name, initialize, &_bug8031573$1_ClassInfo_, allocate$bug8031573$1);
	return class$;
}

$Class* bug8031573$1::class$ = nullptr;