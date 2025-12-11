#include <com/apple/eawt/event/SwipeListener.h>

#include <com/apple/eawt/event/SwipeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$MethodInfo _SwipeListener_MethodInfo_[] = {
	{"swipedDown", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"swipedLeft", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"swipedRight", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"swipedUp", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SwipeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.apple.eawt.event.SwipeListener",
	nullptr,
	"com.apple.eawt.event.GestureListener",
	nullptr,
	_SwipeListener_MethodInfo_
};

$Object* allocate$SwipeListener($Class* clazz) {
	return $of($alloc(SwipeListener));
}

$Class* SwipeListener::load$($String* name, bool initialize) {
	$loadClass(SwipeListener, name, initialize, &_SwipeListener_ClassInfo_, allocate$SwipeListener);
	return class$;
}

$Class* SwipeListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com