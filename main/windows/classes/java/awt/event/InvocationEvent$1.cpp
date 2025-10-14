#include <java/awt/event/InvocationEvent$1.h>

#include <java/awt/event/InvocationEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$InvocationEventAccessor = ::sun::awt::AWTAccessor$InvocationEventAccessor;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _InvocationEvent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InvocationEvent$1::*)()>(&InvocationEvent$1::init$))},
	{"dispose", "(Ljava/awt/event/InvocationEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InvocationEvent$1_EnclosingMethodInfo_ = {
	"java.awt.event.InvocationEvent",
	nullptr,
	nullptr
};

$InnerClassInfo _InvocationEvent$1_InnerClassesInfo_[] = {
	{"java.awt.event.InvocationEvent$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$InvocationEventAccessor", "sun.awt.AWTAccessor", "InvocationEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InvocationEvent$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.event.InvocationEvent$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$InvocationEventAccessor",
	nullptr,
	_InvocationEvent$1_MethodInfo_,
	nullptr,
	&_InvocationEvent$1_EnclosingMethodInfo_,
	_InvocationEvent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.event.InvocationEvent"
};

$Object* allocate$InvocationEvent$1($Class* clazz) {
	return $of($alloc(InvocationEvent$1));
}

void InvocationEvent$1::init$() {
}

void InvocationEvent$1::dispose($InvocationEvent* invocationEvent) {
	$nc(invocationEvent)->finishedDispatching(false);
}

InvocationEvent$1::InvocationEvent$1() {
}

$Class* InvocationEvent$1::load$($String* name, bool initialize) {
	$loadClass(InvocationEvent$1, name, initialize, &_InvocationEvent$1_ClassInfo_, allocate$InvocationEvent$1);
	return class$;
}

$Class* InvocationEvent$1::class$ = nullptr;

		} // event
	} // awt
} // java