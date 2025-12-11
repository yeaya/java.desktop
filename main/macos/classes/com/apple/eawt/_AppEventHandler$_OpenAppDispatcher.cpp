#include <com/apple/eawt/_AppEventHandler$_OpenAppDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <com/apple/eawt/_OpenAppHandler.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $_AppEventHandler$_QueuingAppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_QueuingAppEventDispatcher;
using $_OpenAppHandler = ::com::apple::eawt::_OpenAppHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_OpenAppDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_OpenAppDispatcher, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_OpenAppDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_OpenAppDispatcher::*)($_AppEventHandler*)>(&_AppEventHandler$_OpenAppDispatcher::init$))},
	{"performUsing", "(Lcom/apple/eawt/_OpenAppHandler;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0},
	{"performUsing", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo __AppEventHandler$_OpenAppDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_OpenAppDispatcher", "com.apple.eawt._AppEventHandler", "_OpenAppDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher", "com.apple.eawt._AppEventHandler", "_QueuingAppEventDispatcher", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_OpenAppDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_OpenAppDispatcher",
	"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher",
	nullptr,
	__AppEventHandler$_OpenAppDispatcher_FieldInfo_,
	__AppEventHandler$_OpenAppDispatcher_MethodInfo_,
	"Lcom/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher<Lcom/apple/eawt/_OpenAppHandler;>;",
	nullptr,
	__AppEventHandler$_OpenAppDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_OpenAppDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_OpenAppDispatcher));
}

void _AppEventHandler$_OpenAppDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_QueuingAppEventDispatcher::init$(this$0);
}

void _AppEventHandler$_OpenAppDispatcher::performUsing($_OpenAppHandler* handler, $_AppEventHandler$_NativeEvent* event) {
	$nc(handler)->handleOpenApp();
}

void _AppEventHandler$_OpenAppDispatcher::performUsing(Object$* handler, $_AppEventHandler$_NativeEvent* event) {
	this->performUsing($cast($_OpenAppHandler, handler), event);
}

_AppEventHandler$_OpenAppDispatcher::_AppEventHandler$_OpenAppDispatcher() {
}

$Class* _AppEventHandler$_OpenAppDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_OpenAppDispatcher, name, initialize, &__AppEventHandler$_OpenAppDispatcher_ClassInfo_, allocate$_AppEventHandler$_OpenAppDispatcher);
	return class$;
}

$Class* _AppEventHandler$_OpenAppDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com