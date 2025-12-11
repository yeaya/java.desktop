#include <com/apple/eawt/FullScreenListener.h>

#include <com/apple/eawt/event/FullScreenEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$MethodInfo _FullScreenListener_MethodInfo_[] = {
	{"windowEnteredFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowEnteringFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowExitedFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowExitingFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FullScreenListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.apple.eawt.FullScreenListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_FullScreenListener_MethodInfo_
};

$Object* allocate$FullScreenListener($Class* clazz) {
	return $of($alloc(FullScreenListener));
}

$Class* FullScreenListener::load$($String* name, bool initialize) {
	$loadClass(FullScreenListener, name, initialize, &_FullScreenListener_ClassInfo_, allocate$FullScreenListener);
	return class$;
}

$Class* FullScreenListener::class$ = nullptr;

		} // eawt
	} // apple
} // com