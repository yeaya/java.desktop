#include <HeadlessTimer.h>

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::javax::swing::Timer;

$MethodInfo _HeadlessTimer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessTimer::*)()>(&HeadlessTimer::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessTimer::main))},
	{}
};

$ClassInfo _HeadlessTimer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessTimer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessTimer_MethodInfo_
};

$Object* allocate$HeadlessTimer($Class* clazz) {
	return $of($alloc(HeadlessTimer));
}

void HeadlessTimer::init$() {
}

void HeadlessTimer::main($StringArray* args) {
	$var($Timer, t, $new($Timer, 100, nullptr));
}

HeadlessTimer::HeadlessTimer() {
}

$Class* HeadlessTimer::load$($String* name, bool initialize) {
	$loadClass(HeadlessTimer, name, initialize, &_HeadlessTimer_ClassInfo_, allocate$HeadlessTimer);
	return class$;
}

$Class* HeadlessTimer::class$ = nullptr;