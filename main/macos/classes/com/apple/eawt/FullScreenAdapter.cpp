#include <com/apple/eawt/FullScreenAdapter.h>

#include <com/apple/eawt/event/FullScreenEvent.h>
#include <jcpp.h>

using $FullScreenEvent = ::com::apple::eawt::event::FullScreenEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$MethodInfo _FullScreenAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FullScreenAdapter::*)()>(&FullScreenAdapter::init$))},
	{"windowEnteredFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC},
	{"windowEnteringFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC},
	{"windowExitedFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC},
	{"windowExitingFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FullScreenAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.eawt.FullScreenAdapter",
	"java.lang.Object",
	"com.apple.eawt.FullScreenListener",
	nullptr,
	_FullScreenAdapter_MethodInfo_
};

$Object* allocate$FullScreenAdapter($Class* clazz) {
	return $of($alloc(FullScreenAdapter));
}

void FullScreenAdapter::init$() {
}

void FullScreenAdapter::windowEnteringFullScreen($FullScreenEvent* e) {
}

void FullScreenAdapter::windowEnteredFullScreen($FullScreenEvent* e) {
}

void FullScreenAdapter::windowExitingFullScreen($FullScreenEvent* e) {
}

void FullScreenAdapter::windowExitedFullScreen($FullScreenEvent* e) {
}

FullScreenAdapter::FullScreenAdapter() {
}

$Class* FullScreenAdapter::load$($String* name, bool initialize) {
	$loadClass(FullScreenAdapter, name, initialize, &_FullScreenAdapter_ClassInfo_, allocate$FullScreenAdapter);
	return class$;
}

$Class* FullScreenAdapter::class$ = nullptr;

		} // eawt
	} // apple
} // com