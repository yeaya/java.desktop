#include <com/apple/eawt/event/GestureListener.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$ClassInfo _GestureListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.apple.eawt.event.GestureListener",
	nullptr,
	"java.util.EventListener"
};

$Object* allocate$GestureListener($Class* clazz) {
	return $of($alloc(GestureListener));
}

$Class* GestureListener::load$($String* name, bool initialize) {
	$loadClass(GestureListener, name, initialize, &_GestureListener_ClassInfo_, allocate$GestureListener);
	return class$;
}

$Class* GestureListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com