#include <bug4449413$1.h>

#include <bug4449413.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $bug4449413 = ::bug4449413;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _bug4449413$1_FieldInfo_[] = {
	{"this$0", "Lbug4449413;", nullptr, $FINAL | $SYNTHETIC, $field(bug4449413$1, this$0)},
	{}
};

$MethodInfo _bug4449413$1_MethodInfo_[] = {
	{"<init>", "(Lbug4449413;)V", nullptr, 0, $method(static_cast<void(bug4449413$1::*)($bug4449413*)>(&bug4449413$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4449413$1_EnclosingMethodInfo_ = {
	"bug4449413",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _bug4449413$1_InnerClassesInfo_[] = {
	{"bug4449413$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4449413$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4449413$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_bug4449413$1_FieldInfo_,
	_bug4449413$1_MethodInfo_,
	nullptr,
	&_bug4449413$1_EnclosingMethodInfo_,
	_bug4449413$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4449413"
};

$Object* allocate$bug4449413$1($Class* clazz) {
	return $of($alloc(bug4449413$1));
}

void bug4449413$1::init$($bug4449413* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void bug4449413$1::windowClosing($WindowEvent* e) {
	$init($bug4449413);
	$nc($bug4449413::latch)->countDown();
}

bug4449413$1::bug4449413$1() {
}

$Class* bug4449413$1::load$($String* name, bool initialize) {
	$loadClass(bug4449413$1, name, initialize, &_bug4449413$1_ClassInfo_, allocate$bug4449413$1);
	return class$;
}

$Class* bug4449413$1::class$ = nullptr;