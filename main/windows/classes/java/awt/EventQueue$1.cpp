#include <java/awt/EventQueue$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace awt {

$MethodInfo _EventQueue$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EventQueue$1::*)()>(&EventQueue$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventQueue$1_EnclosingMethodInfo_ = {
	"java.awt.EventQueue",
	nullptr,
	nullptr
};

$InnerClassInfo _EventQueue$1_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventQueue$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventQueue$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_EventQueue$1_MethodInfo_,
	nullptr,
	&_EventQueue$1_EnclosingMethodInfo_,
	_EventQueue$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventQueue"
};

$Object* allocate$EventQueue$1($Class* clazz) {
	return $of($alloc(EventQueue$1));
}

void EventQueue$1::init$() {
}

void EventQueue$1::run() {
}

EventQueue$1::EventQueue$1() {
}

$Class* EventQueue$1::load$($String* name, bool initialize) {
	$loadClass(EventQueue$1, name, initialize, &_EventQueue$1_ClassInfo_, allocate$EventQueue$1);
	return class$;
}

$Class* EventQueue$1::class$ = nullptr;

	} // awt
} // java