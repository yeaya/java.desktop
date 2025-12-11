#include <com/apple/eawt/_AppEventHandler$_UserSessionDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/UserSessionEvent$Reason.h>
#include <java/awt/desktop/UserSessionEvent.h>
#include <java/awt/desktop/UserSessionListener.h>
#include <jcpp.h>

#undef UNSPECIFIED

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_BooleanAppEventMultiplexor = ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor;
using $UserSessionEvent = ::java::awt::desktop::UserSessionEvent;
using $UserSessionEvent$Reason = ::java::awt::desktop::UserSessionEvent$Reason;
using $UserSessionListener = ::java::awt::desktop::UserSessionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_UserSessionDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_UserSessionDispatcher, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_UserSessionDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_UserSessionDispatcher::*)($_AppEventHandler*)>(&_AppEventHandler$_UserSessionDispatcher::init$))},
	{"createEvent", "(Z)Ljava/awt/desktop/UserSessionEvent;", nullptr, 0},
	{"performFalseEventOn", "(Ljava/awt/desktop/UserSessionListener;Ljava/awt/desktop/UserSessionEvent;)V", nullptr, 0},
	{"performFalseEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"performTrueEventOn", "(Ljava/awt/desktop/UserSessionListener;Ljava/awt/desktop/UserSessionEvent;)V", nullptr, 0},
	{"performTrueEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"registerNativeListener", "()V", nullptr, 0},
	{}
};

$InnerClassInfo __AppEventHandler$_UserSessionDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_UserSessionDispatcher", "com.apple.eawt._AppEventHandler", "_UserSessionDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_BooleanAppEventMultiplexor", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_UserSessionDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_UserSessionDispatcher",
	"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor",
	nullptr,
	__AppEventHandler$_UserSessionDispatcher_FieldInfo_,
	__AppEventHandler$_UserSessionDispatcher_MethodInfo_,
	"Lcom/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor<Ljava/awt/desktop/UserSessionListener;Ljava/awt/desktop/UserSessionEvent;>;",
	nullptr,
	__AppEventHandler$_UserSessionDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_UserSessionDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_UserSessionDispatcher));
}

void _AppEventHandler$_UserSessionDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_BooleanAppEventMultiplexor::init$(this$0);
}

$Object* _AppEventHandler$_UserSessionDispatcher::createEvent(bool isTrue) {
	$init($UserSessionEvent$Reason);
	return $of($new($UserSessionEvent, $UserSessionEvent$Reason::UNSPECIFIED));
}

void _AppEventHandler$_UserSessionDispatcher::performFalseEventOn($UserSessionListener* listener, $UserSessionEvent* e) {
	$nc(listener)->userSessionDeactivated(e);
}

void _AppEventHandler$_UserSessionDispatcher::performTrueEventOn($UserSessionListener* listener, $UserSessionEvent* e) {
	$nc(listener)->userSessionActivated(e);
}

void _AppEventHandler$_UserSessionDispatcher::registerNativeListener() {
	$_AppEventHandler::nativeRegisterForNotification(1);
}

void _AppEventHandler$_UserSessionDispatcher::performFalseEventOn(Object$* listener, Object$* e) {
	this->performFalseEventOn($cast($UserSessionListener, listener), $cast($UserSessionEvent, e));
}

void _AppEventHandler$_UserSessionDispatcher::performTrueEventOn(Object$* listener, Object$* e) {
	this->performTrueEventOn($cast($UserSessionListener, listener), $cast($UserSessionEvent, e));
}

_AppEventHandler$_UserSessionDispatcher::_AppEventHandler$_UserSessionDispatcher() {
}

$Class* _AppEventHandler$_UserSessionDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_UserSessionDispatcher, name, initialize, &__AppEventHandler$_UserSessionDispatcher_ClassInfo_, allocate$_AppEventHandler$_UserSessionDispatcher);
	return class$;
}

$Class* _AppEventHandler$_UserSessionDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com