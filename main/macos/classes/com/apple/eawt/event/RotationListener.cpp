#include <com/apple/eawt/event/RotationListener.h>

#include <com/apple/eawt/event/RotationEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$MethodInfo _RotationListener_MethodInfo_[] = {
	{"rotate", "(Lcom/apple/eawt/event/RotationEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RotationListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.apple.eawt.event.RotationListener",
	nullptr,
	"com.apple.eawt.event.GestureListener",
	nullptr,
	_RotationListener_MethodInfo_
};

$Object* allocate$RotationListener($Class* clazz) {
	return $of($alloc(RotationListener));
}

$Class* RotationListener::load$($String* name, bool initialize) {
	$loadClass(RotationListener, name, initialize, &_RotationListener_ClassInfo_, allocate$RotationListener);
	return class$;
}

$Class* RotationListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com