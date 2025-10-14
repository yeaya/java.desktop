#include <sun/awt/PeerEvent.h>

#include <java/awt/event/InvocationEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LOW_PRIORITY_EVENT
#undef PRIORITY_EVENT
#undef ULTIMATE_PRIORITY_EVENT

using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace sun {
	namespace awt {

$FieldInfo _PeerEvent_FieldInfo_[] = {
	{"PRIORITY_EVENT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PeerEvent, PRIORITY_EVENT)},
	{"ULTIMATE_PRIORITY_EVENT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PeerEvent, ULTIMATE_PRIORITY_EVENT)},
	{"LOW_PRIORITY_EVENT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PeerEvent, LOW_PRIORITY_EVENT)},
	{"flags", "J", nullptr, $PRIVATE, $field(PeerEvent, flags)},
	{}
};

$MethodInfo _PeerEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Runnable;J)V", nullptr, $PUBLIC, $method(static_cast<void(PeerEvent::*)(Object$*,$Runnable*,int64_t)>(&PeerEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Runnable;Ljava/lang/Object;ZJ)V", nullptr, $PUBLIC, $method(static_cast<void(PeerEvent::*)(Object$*,$Runnable*,Object$*,bool,int64_t)>(&PeerEvent::init$))},
	{"coalesceEvents", "(Lsun/awt/PeerEvent;)Lsun/awt/PeerEvent;", nullptr, $PUBLIC},
	{"getFlags", "()J", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PeerEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.PeerEvent",
	"java.awt.event.InvocationEvent",
	nullptr,
	_PeerEvent_FieldInfo_,
	_PeerEvent_MethodInfo_
};

$Object* allocate$PeerEvent($Class* clazz) {
	return $of($alloc(PeerEvent));
}

void PeerEvent::init$(Object$* source, $Runnable* runnable, int64_t flags) {
	PeerEvent::init$(source, runnable, nullptr, false, flags);
}

void PeerEvent::init$(Object$* source, $Runnable* runnable, Object$* notifier, bool catchExceptions, int64_t flags) {
	$InvocationEvent::init$(source, runnable, notifier, catchExceptions);
	this->flags = flags;
}

int64_t PeerEvent::getFlags() {
	return this->flags;
}

PeerEvent* PeerEvent::coalesceEvents(PeerEvent* newEvent) {
	return nullptr;
}

PeerEvent::PeerEvent() {
}

$Class* PeerEvent::load$($String* name, bool initialize) {
	$loadClass(PeerEvent, name, initialize, &_PeerEvent_ClassInfo_, allocate$PeerEvent);
	return class$;
}

$Class* PeerEvent::class$ = nullptr;

	} // awt
} // sun