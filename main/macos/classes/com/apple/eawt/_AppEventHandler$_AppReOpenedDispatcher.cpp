#include <com/apple/eawt/_AppEventHandler$_AppReOpenedDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/AppReopenedEvent.h>
#include <java/awt/desktop/AppReopenedListener.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventMultiplexor = ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $AppReopenedEvent = ::java::awt::desktop::AppReopenedEvent;
using $AppReopenedListener = ::java::awt::desktop::AppReopenedListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_AppReOpenedDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppReOpenedDispatcher, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_AppReOpenedDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_AppReOpenedDispatcher::*)($_AppEventHandler*)>(&_AppEventHandler$_AppReOpenedDispatcher::init$))},
	{"performOnListener", "(Ljava/awt/desktop/AppReopenedListener;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0},
	{"performOnListener", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo __AppEventHandler$_AppReOpenedDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_AppReOpenedDispatcher", "com.apple.eawt._AppEventHandler", "_AppReOpenedDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_AppEventMultiplexor", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_AppReOpenedDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_AppReOpenedDispatcher",
	"com.apple.eawt._AppEventHandler$_AppEventMultiplexor",
	nullptr,
	__AppEventHandler$_AppReOpenedDispatcher_FieldInfo_,
	__AppEventHandler$_AppReOpenedDispatcher_MethodInfo_,
	"Lcom/apple/eawt/_AppEventHandler$_AppEventMultiplexor<Ljava/awt/desktop/AppReopenedListener;>;",
	nullptr,
	__AppEventHandler$_AppReOpenedDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_AppReOpenedDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_AppReOpenedDispatcher));
}

void _AppEventHandler$_AppReOpenedDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_AppEventMultiplexor::init$(this$0);
}

void _AppEventHandler$_AppReOpenedDispatcher::performOnListener($AppReopenedListener* listener, $_AppEventHandler$_NativeEvent* event) {
	$var($AppReopenedEvent, e, $new($AppReopenedEvent));
	$nc(listener)->appReopened(e);
}

void _AppEventHandler$_AppReOpenedDispatcher::performOnListener(Object$* listener, $_AppEventHandler$_NativeEvent* event) {
	this->performOnListener($cast($AppReopenedListener, listener), event);
}

_AppEventHandler$_AppReOpenedDispatcher::_AppEventHandler$_AppReOpenedDispatcher() {
}

$Class* _AppEventHandler$_AppReOpenedDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_AppReOpenedDispatcher, name, initialize, &__AppEventHandler$_AppReOpenedDispatcher_ClassInfo_, allocate$_AppEventHandler$_AppReOpenedDispatcher);
	return class$;
}

$Class* _AppEventHandler$_AppReOpenedDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com