#include <com/apple/eawt/event/GestureAdapter.h>

#include <com/apple/eawt/event/GesturePhaseEvent.h>
#include <com/apple/eawt/event/GesturePhaseListener.h>
#include <com/apple/eawt/event/MagnificationEvent.h>
#include <com/apple/eawt/event/RotationEvent.h>
#include <com/apple/eawt/event/SwipeEvent.h>
#include <jcpp.h>

using $GesturePhaseEvent = ::com::apple::eawt::event::GesturePhaseEvent;
using $GesturePhaseListener = ::com::apple::eawt::event::GesturePhaseListener;
using $MagnificationEvent = ::com::apple::eawt::event::MagnificationEvent;
using $RotationEvent = ::com::apple::eawt::event::RotationEvent;
using $SwipeEvent = ::com::apple::eawt::event::SwipeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$MethodInfo _GestureAdapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GestureAdapter::*)()>(&GestureAdapter::init$))},
	{"gestureBegan", "(Lcom/apple/eawt/event/GesturePhaseEvent;)V", nullptr, $PUBLIC},
	{"gestureEnded", "(Lcom/apple/eawt/event/GesturePhaseEvent;)V", nullptr, $PUBLIC},
	{"magnify", "(Lcom/apple/eawt/event/MagnificationEvent;)V", nullptr, $PUBLIC},
	{"rotate", "(Lcom/apple/eawt/event/RotationEvent;)V", nullptr, $PUBLIC},
	{"swipedDown", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC},
	{"swipedLeft", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC},
	{"swipedRight", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC},
	{"swipedUp", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GestureAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.eawt.event.GestureAdapter",
	"java.lang.Object",
	"com.apple.eawt.event.GesturePhaseListener,com.apple.eawt.event.MagnificationListener,com.apple.eawt.event.RotationListener,com.apple.eawt.event.SwipeListener",
	nullptr,
	_GestureAdapter_MethodInfo_
};

$Object* allocate$GestureAdapter($Class* clazz) {
	return $of($alloc(GestureAdapter));
}

int32_t GestureAdapter::hashCode() {
	 return this->$GesturePhaseListener::hashCode();
}

bool GestureAdapter::equals(Object$* arg0) {
	 return this->$GesturePhaseListener::equals(arg0);
}

$Object* GestureAdapter::clone() {
	 return this->$GesturePhaseListener::clone();
}

$String* GestureAdapter::toString() {
	 return this->$GesturePhaseListener::toString();
}

void GestureAdapter::finalize() {
	this->$GesturePhaseListener::finalize();
}

void GestureAdapter::init$() {
}

void GestureAdapter::gestureBegan($GesturePhaseEvent* e) {
}

void GestureAdapter::gestureEnded($GesturePhaseEvent* e) {
}

void GestureAdapter::magnify($MagnificationEvent* e) {
}

void GestureAdapter::rotate($RotationEvent* e) {
}

void GestureAdapter::swipedDown($SwipeEvent* e) {
}

void GestureAdapter::swipedLeft($SwipeEvent* e) {
}

void GestureAdapter::swipedRight($SwipeEvent* e) {
}

void GestureAdapter::swipedUp($SwipeEvent* e) {
}

GestureAdapter::GestureAdapter() {
}

$Class* GestureAdapter::load$($String* name, bool initialize) {
	$loadClass(GestureAdapter, name, initialize, &_GestureAdapter_ClassInfo_, allocate$GestureAdapter);
	return class$;
}

$Class* GestureAdapter::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com