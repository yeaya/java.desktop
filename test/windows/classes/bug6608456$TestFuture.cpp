#include <bug6608456$TestFuture.h>

#include <bug6608456$TestFuture$1.h>
#include <bug6608456.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/FutureTask.h>
#include <jcpp.h>

#undef TRUE

using $bug6608456 = ::bug6608456;
using $bug6608456$TestFuture$1 = ::bug6608456$TestFuture$1;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $FutureTask = ::java::util::concurrent::FutureTask;

$FieldInfo _bug6608456$TestFuture_FieldInfo_[] = {
	{"defaultCalled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug6608456$TestFuture, defaultCalled$)},
	{"delegateCalled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug6608456$TestFuture, delegateCalled$)},
	{}
};

$MethodInfo _bug6608456$TestFuture_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6608456$TestFuture::*)()>(&bug6608456$TestFuture::init$))},
	{"defaultCalled", "()V", nullptr, $PUBLIC},
	{"delegateCalled", "()V", nullptr, $PUBLIC},
	{"updateState", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6608456$TestFuture::*)()>(&bug6608456$TestFuture::updateState))},
	{}
};

$InnerClassInfo _bug6608456$TestFuture_InnerClassesInfo_[] = {
	{"bug6608456$TestFuture", "bug6608456", "TestFuture", $STATIC},
	{"bug6608456$TestFuture$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6608456$TestFuture_ClassInfo_ = {
	$ACC_SUPER,
	"bug6608456$TestFuture",
	"java.util.concurrent.FutureTask",
	nullptr,
	_bug6608456$TestFuture_FieldInfo_,
	_bug6608456$TestFuture_MethodInfo_,
	"Ljava/util/concurrent/FutureTask<Ljava/lang/Boolean;>;",
	nullptr,
	_bug6608456$TestFuture_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6608456"
};

$Object* allocate$bug6608456$TestFuture($Class* clazz) {
	return $of($alloc(bug6608456$TestFuture));
}

void bug6608456$TestFuture::init$() {
	$FutureTask::init$($$new($bug6608456$TestFuture$1));
	this->defaultCalled$ = false;
	this->delegateCalled$ = false;
}

void bug6608456$TestFuture::defaultCalled() {
	this->defaultCalled$ = true;
	updateState();
}

void bug6608456$TestFuture::delegateCalled() {
	this->delegateCalled$ = true;
	updateState();
}

void bug6608456$TestFuture::updateState() {
	if (this->defaultCalled$ && this->delegateCalled$) {
		$init($Boolean);
		set($Boolean::TRUE);
	}
}

bug6608456$TestFuture::bug6608456$TestFuture() {
}

$Class* bug6608456$TestFuture::load$($String* name, bool initialize) {
	$loadClass(bug6608456$TestFuture, name, initialize, &_bug6608456$TestFuture_ClassInfo_, allocate$bug6608456$TestFuture);
	return class$;
}

$Class* bug6608456$TestFuture::class$ = nullptr;