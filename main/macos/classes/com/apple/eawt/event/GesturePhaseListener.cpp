#include <com/apple/eawt/event/GesturePhaseListener.h>

#include <com/apple/eawt/event/GesturePhaseEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$MethodInfo _GesturePhaseListener_MethodInfo_[] = {
	{"gestureBegan", "(Lcom/apple/eawt/event/GesturePhaseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"gestureEnded", "(Lcom/apple/eawt/event/GesturePhaseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GesturePhaseListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.apple.eawt.event.GesturePhaseListener",
	nullptr,
	"com.apple.eawt.event.GestureListener",
	nullptr,
	_GesturePhaseListener_MethodInfo_
};

$Object* allocate$GesturePhaseListener($Class* clazz) {
	return $of($alloc(GesturePhaseListener));
}

$Class* GesturePhaseListener::load$($String* name, bool initialize) {
	$loadClass(GesturePhaseListener, name, initialize, &_GesturePhaseListener_ClassInfo_, allocate$GesturePhaseListener);
	return class$;
}

$Class* GesturePhaseListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com