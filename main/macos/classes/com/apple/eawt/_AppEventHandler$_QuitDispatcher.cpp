#include <com/apple/eawt/_AppEventHandler$_QuitDispatcher.h>

#include <com/apple/eawt/MacQuitResponse.h>
#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <com/apple/eawt/_AppMiscHandlers.h>
#include <java/awt/desktop/QuitEvent.h>
#include <java/awt/desktop/QuitHandler.h>
#include <java/awt/desktop/QuitResponse.h>
#include <jcpp.h>

using $MacQuitResponse = ::com::apple::eawt::MacQuitResponse;
using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $_AppMiscHandlers = ::com::apple::eawt::_AppMiscHandlers;
using $QuitEvent = ::java::awt::desktop::QuitEvent;
using $QuitHandler = ::java::awt::desktop::QuitHandler;
using $QuitResponse = ::java::awt::desktop::QuitResponse;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_QuitDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_QuitDispatcher, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_QuitDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_QuitDispatcher::*)($_AppEventHandler*)>(&_AppEventHandler$_QuitDispatcher::init$))},
	{"performDefaultAction", "(Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0},
	{"performUsing", "(Ljava/awt/desktop/QuitHandler;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0},
	{"performUsing", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo __AppEventHandler$_QuitDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_QuitDispatcher", "com.apple.eawt._AppEventHandler", "_QuitDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_AppEventDispatcher", "com.apple.eawt._AppEventHandler", "_AppEventDispatcher", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_QuitDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_QuitDispatcher",
	"com.apple.eawt._AppEventHandler$_AppEventDispatcher",
	nullptr,
	__AppEventHandler$_QuitDispatcher_FieldInfo_,
	__AppEventHandler$_QuitDispatcher_MethodInfo_,
	"Lcom/apple/eawt/_AppEventHandler$_AppEventDispatcher<Ljava/awt/desktop/QuitHandler;>;",
	nullptr,
	__AppEventHandler$_QuitDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_QuitDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_QuitDispatcher));
}

void _AppEventHandler$_QuitDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_AppEventDispatcher::init$(this$0);
}

void _AppEventHandler$_QuitDispatcher::performDefaultAction($_AppEventHandler$_NativeEvent* event) {
	$nc($(this->this$0->obtainQuitResponse()))->performQuit();
}

void _AppEventHandler$_QuitDispatcher::performUsing($QuitHandler* handler, $_AppEventHandler$_NativeEvent* event) {
	$useLocalCurrentObjectStackCache();
	if ($_AppMiscHandlers::isSuddenTerminationEnbaled()) {
		performDefaultAction(event);
		return;
	}
	$var($MacQuitResponse, response, this->this$0->obtainQuitResponse());
	$nc(handler)->handleQuitRequestWith($$new($QuitEvent), response);
}

void _AppEventHandler$_QuitDispatcher::performUsing(Object$* handler, $_AppEventHandler$_NativeEvent* event) {
	this->performUsing($cast($QuitHandler, handler), event);
}

_AppEventHandler$_QuitDispatcher::_AppEventHandler$_QuitDispatcher() {
}

$Class* _AppEventHandler$_QuitDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_QuitDispatcher, name, initialize, &__AppEventHandler$_QuitDispatcher_ClassInfo_, allocate$_AppEventHandler$_QuitDispatcher);
	return class$;
}

$Class* _AppEventHandler$_QuitDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com