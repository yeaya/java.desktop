#include <com/apple/eawt/event/MagnificationListener.h>

#include <com/apple/eawt/event/MagnificationEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$MethodInfo _MagnificationListener_MethodInfo_[] = {
	{"magnify", "(Lcom/apple/eawt/event/MagnificationEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MagnificationListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.apple.eawt.event.MagnificationListener",
	nullptr,
	"com.apple.eawt.event.GestureListener",
	nullptr,
	_MagnificationListener_MethodInfo_
};

$Object* allocate$MagnificationListener($Class* clazz) {
	return $of($alloc(MagnificationListener));
}

$Class* MagnificationListener::load$($String* name, bool initialize) {
	$loadClass(MagnificationListener, name, initialize, &_MagnificationListener_ClassInfo_, allocate$MagnificationListener);
	return class$;
}

$Class* MagnificationListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com