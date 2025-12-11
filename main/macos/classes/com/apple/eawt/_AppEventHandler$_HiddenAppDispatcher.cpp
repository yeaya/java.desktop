#include <com/apple/eawt/_AppEventHandler$_HiddenAppDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/AppHiddenEvent.h>
#include <java/awt/desktop/AppHiddenListener.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_BooleanAppEventMultiplexor = ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor;
using $AppHiddenEvent = ::java::awt::desktop::AppHiddenEvent;
using $AppHiddenListener = ::java::awt::desktop::AppHiddenListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_HiddenAppDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_HiddenAppDispatcher, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_HiddenAppDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_HiddenAppDispatcher::*)($_AppEventHandler*)>(&_AppEventHandler$_HiddenAppDispatcher::init$))},
	{"createEvent", "(Z)Ljava/awt/desktop/AppHiddenEvent;", nullptr, 0},
	{"performFalseEventOn", "(Ljava/awt/desktop/AppHiddenListener;Ljava/awt/desktop/AppHiddenEvent;)V", nullptr, 0},
	{"performFalseEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"performTrueEventOn", "(Ljava/awt/desktop/AppHiddenListener;Ljava/awt/desktop/AppHiddenEvent;)V", nullptr, 0},
	{"performTrueEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo __AppEventHandler$_HiddenAppDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_HiddenAppDispatcher", "com.apple.eawt._AppEventHandler", "_HiddenAppDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_BooleanAppEventMultiplexor", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_HiddenAppDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_HiddenAppDispatcher",
	"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor",
	nullptr,
	__AppEventHandler$_HiddenAppDispatcher_FieldInfo_,
	__AppEventHandler$_HiddenAppDispatcher_MethodInfo_,
	"Lcom/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor<Ljava/awt/desktop/AppHiddenListener;Ljava/awt/desktop/AppHiddenEvent;>;",
	nullptr,
	__AppEventHandler$_HiddenAppDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_HiddenAppDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_HiddenAppDispatcher));
}

void _AppEventHandler$_HiddenAppDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_BooleanAppEventMultiplexor::init$(this$0);
}

$Object* _AppEventHandler$_HiddenAppDispatcher::createEvent(bool isTrue) {
	return $of($new($AppHiddenEvent));
}

void _AppEventHandler$_HiddenAppDispatcher::performFalseEventOn($AppHiddenListener* listener, $AppHiddenEvent* e) {
	$nc(listener)->appUnhidden(e);
}

void _AppEventHandler$_HiddenAppDispatcher::performTrueEventOn($AppHiddenListener* listener, $AppHiddenEvent* e) {
	$nc(listener)->appHidden(e);
}

void _AppEventHandler$_HiddenAppDispatcher::performFalseEventOn(Object$* listener, Object$* e) {
	this->performFalseEventOn($cast($AppHiddenListener, listener), $cast($AppHiddenEvent, e));
}

void _AppEventHandler$_HiddenAppDispatcher::performTrueEventOn(Object$* listener, Object$* e) {
	this->performTrueEventOn($cast($AppHiddenListener, listener), $cast($AppHiddenEvent, e));
}

_AppEventHandler$_HiddenAppDispatcher::_AppEventHandler$_HiddenAppDispatcher() {
}

$Class* _AppEventHandler$_HiddenAppDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_HiddenAppDispatcher, name, initialize, &__AppEventHandler$_HiddenAppDispatcher_ClassInfo_, allocate$_AppEventHandler$_HiddenAppDispatcher);
	return class$;
}

$Class* _AppEventHandler$_HiddenAppDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com