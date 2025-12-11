#include <com/apple/eawt/_AppEventHandler$_SystemSleepDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/SystemSleepEvent.h>
#include <java/awt/desktop/SystemSleepListener.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_BooleanAppEventMultiplexor = ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor;
using $SystemSleepEvent = ::java::awt::desktop::SystemSleepEvent;
using $SystemSleepListener = ::java::awt::desktop::SystemSleepListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_SystemSleepDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_SystemSleepDispatcher, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_SystemSleepDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_SystemSleepDispatcher::*)($_AppEventHandler*)>(&_AppEventHandler$_SystemSleepDispatcher::init$))},
	{"createEvent", "(Z)Ljava/awt/desktop/SystemSleepEvent;", nullptr, 0},
	{"performFalseEventOn", "(Ljava/awt/desktop/SystemSleepListener;Ljava/awt/desktop/SystemSleepEvent;)V", nullptr, 0},
	{"performFalseEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"performTrueEventOn", "(Ljava/awt/desktop/SystemSleepListener;Ljava/awt/desktop/SystemSleepEvent;)V", nullptr, 0},
	{"performTrueEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"registerNativeListener", "()V", nullptr, 0},
	{}
};

$InnerClassInfo __AppEventHandler$_SystemSleepDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_SystemSleepDispatcher", "com.apple.eawt._AppEventHandler", "_SystemSleepDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_BooleanAppEventMultiplexor", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_SystemSleepDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_SystemSleepDispatcher",
	"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor",
	nullptr,
	__AppEventHandler$_SystemSleepDispatcher_FieldInfo_,
	__AppEventHandler$_SystemSleepDispatcher_MethodInfo_,
	"Lcom/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor<Ljava/awt/desktop/SystemSleepListener;Ljava/awt/desktop/SystemSleepEvent;>;",
	nullptr,
	__AppEventHandler$_SystemSleepDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_SystemSleepDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_SystemSleepDispatcher));
}

void _AppEventHandler$_SystemSleepDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_BooleanAppEventMultiplexor::init$(this$0);
}

$Object* _AppEventHandler$_SystemSleepDispatcher::createEvent(bool isTrue) {
	return $of($new($SystemSleepEvent));
}

void _AppEventHandler$_SystemSleepDispatcher::performFalseEventOn($SystemSleepListener* listener, $SystemSleepEvent* e) {
	$nc(listener)->systemAwoke(e);
}

void _AppEventHandler$_SystemSleepDispatcher::performTrueEventOn($SystemSleepListener* listener, $SystemSleepEvent* e) {
	$nc(listener)->systemAboutToSleep(e);
}

void _AppEventHandler$_SystemSleepDispatcher::registerNativeListener() {
	$_AppEventHandler::nativeRegisterForNotification(3);
}

void _AppEventHandler$_SystemSleepDispatcher::performFalseEventOn(Object$* listener, Object$* e) {
	this->performFalseEventOn($cast($SystemSleepListener, listener), $cast($SystemSleepEvent, e));
}

void _AppEventHandler$_SystemSleepDispatcher::performTrueEventOn(Object$* listener, Object$* e) {
	this->performTrueEventOn($cast($SystemSleepListener, listener), $cast($SystemSleepEvent, e));
}

_AppEventHandler$_SystemSleepDispatcher::_AppEventHandler$_SystemSleepDispatcher() {
}

$Class* _AppEventHandler$_SystemSleepDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_SystemSleepDispatcher, name, initialize, &__AppEventHandler$_SystemSleepDispatcher_ClassInfo_, allocate$_AppEventHandler$_SystemSleepDispatcher);
	return class$;
}

$Class* _AppEventHandler$_SystemSleepDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com