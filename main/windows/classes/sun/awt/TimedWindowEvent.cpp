#include <sun/awt/TimedWindowEvent.h>

#include <java/awt/Window.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$FieldInfo _TimedWindowEvent_FieldInfo_[] = {
	{"time", "J", nullptr, $PRIVATE, $field(TimedWindowEvent, time)},
	{}
};

$MethodInfo _TimedWindowEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;ILjava/awt/Window;J)V", nullptr, $PUBLIC, $method(static_cast<void(TimedWindowEvent::*)($Window*,int32_t,$Window*,int64_t)>(&TimedWindowEvent::init$))},
	{"<init>", "(Ljava/awt/Window;ILjava/awt/Window;IIJ)V", nullptr, $PUBLIC, $method(static_cast<void(TimedWindowEvent::*)($Window*,int32_t,$Window*,int32_t,int32_t,int64_t)>(&TimedWindowEvent::init$))},
	{"getWhen", "()J", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TimedWindowEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.TimedWindowEvent",
	"java.awt.event.WindowEvent",
	nullptr,
	_TimedWindowEvent_FieldInfo_,
	_TimedWindowEvent_MethodInfo_
};

$Object* allocate$TimedWindowEvent($Class* clazz) {
	return $of($alloc(TimedWindowEvent));
}

int64_t TimedWindowEvent::getWhen() {
	return this->time;
}

void TimedWindowEvent::init$($Window* source, int32_t id, $Window* opposite, int64_t time) {
	$WindowEvent::init$(source, id, opposite);
	this->time = time;
}

void TimedWindowEvent::init$($Window* source, int32_t id, $Window* opposite, int32_t oldState, int32_t newState, int64_t time) {
	$WindowEvent::init$(source, id, opposite, oldState, newState);
	this->time = time;
}

TimedWindowEvent::TimedWindowEvent() {
}

$Class* TimedWindowEvent::load$($String* name, bool initialize) {
	$loadClass(TimedWindowEvent, name, initialize, &_TimedWindowEvent_ClassInfo_, allocate$TimedWindowEvent);
	return class$;
}

$Class* TimedWindowEvent::class$ = nullptr;

	} // awt
} // sun