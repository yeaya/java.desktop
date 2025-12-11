#include <com/apple/eawt/event/FullScreenEvent.h>

#include <com/apple/eawt/Application.h>
#include <java/awt/Window.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $Application = ::com::apple::eawt::Application;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$FieldInfo _FullScreenEvent_FieldInfo_[] = {
	{"window", "Ljava/awt/Window;", nullptr, $FINAL, $field(FullScreenEvent, window)},
	{}
};

$MethodInfo _FullScreenEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(FullScreenEvent::*)($Window*)>(&FullScreenEvent::init$))},
	{"getWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FullScreenEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.eawt.event.FullScreenEvent",
	"java.util.EventObject",
	nullptr,
	_FullScreenEvent_FieldInfo_,
	_FullScreenEvent_MethodInfo_
};

$Object* allocate$FullScreenEvent($Class* clazz) {
	return $of($alloc(FullScreenEvent));
}

void FullScreenEvent::init$($Window* window) {
	$EventObject::init$($($Application::getApplication()));
	$set(this, window, window);
}

$Window* FullScreenEvent::getWindow() {
	return this->window;
}

FullScreenEvent::FullScreenEvent() {
}

$Class* FullScreenEvent::load$($String* name, bool initialize) {
	$loadClass(FullScreenEvent, name, initialize, &_FullScreenEvent_ClassInfo_, allocate$FullScreenEvent);
	return class$;
}

$Class* FullScreenEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com