#include <com/apple/eawt/_AppEventHandler$_OpenURIDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/OpenURIEvent.h>
#include <java/awt/desktop/OpenURIHandler.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $_AppEventHandler$_QueuingAppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_QueuingAppEventDispatcher;
using $OpenURIEvent = ::java::awt::desktop::OpenURIEvent;
using $OpenURIHandler = ::java::awt::desktop::OpenURIHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_OpenURIDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_OpenURIDispatcher, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_OpenURIDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_OpenURIDispatcher::*)($_AppEventHandler*)>(&_AppEventHandler$_OpenURIDispatcher::init$))},
	{"performUsing", "(Ljava/awt/desktop/OpenURIHandler;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0},
	{"performUsing", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo __AppEventHandler$_OpenURIDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_OpenURIDispatcher", "com.apple.eawt._AppEventHandler", "_OpenURIDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher", "com.apple.eawt._AppEventHandler", "_QueuingAppEventDispatcher", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_OpenURIDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_OpenURIDispatcher",
	"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher",
	nullptr,
	__AppEventHandler$_OpenURIDispatcher_FieldInfo_,
	__AppEventHandler$_OpenURIDispatcher_MethodInfo_,
	"Lcom/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher<Ljava/awt/desktop/OpenURIHandler;>;",
	nullptr,
	__AppEventHandler$_OpenURIDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_OpenURIDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_OpenURIDispatcher));
}

void _AppEventHandler$_OpenURIDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_QueuingAppEventDispatcher::init$(this$0);
}

void _AppEventHandler$_OpenURIDispatcher::performUsing($OpenURIHandler* handler, $_AppEventHandler$_NativeEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($String, urlString, $cast($String, $nc(event)->get(0)));
	try {
		$nc(handler)->openURI($$new($OpenURIEvent, $$new($URI, urlString)));
	} catch ($URISyntaxException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void _AppEventHandler$_OpenURIDispatcher::performUsing(Object$* handler, $_AppEventHandler$_NativeEvent* event) {
	this->performUsing($cast($OpenURIHandler, handler), event);
}

_AppEventHandler$_OpenURIDispatcher::_AppEventHandler$_OpenURIDispatcher() {
}

$Class* _AppEventHandler$_OpenURIDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_OpenURIDispatcher, name, initialize, &__AppEventHandler$_OpenURIDispatcher_ClassInfo_, allocate$_AppEventHandler$_OpenURIDispatcher);
	return class$;
}

$Class* _AppEventHandler$_OpenURIDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com