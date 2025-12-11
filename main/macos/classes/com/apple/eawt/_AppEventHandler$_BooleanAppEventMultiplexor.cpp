#include <com/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor.h>

#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <jcpp.h>

#undef TRUE

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventMultiplexor = ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_BooleanAppEventMultiplexor_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_BooleanAppEventMultiplexor, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_BooleanAppEventMultiplexor_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_BooleanAppEventMultiplexor::*)($_AppEventHandler*)>(&_AppEventHandler$_BooleanAppEventMultiplexor::init$))},
	{"createEvent", "(Z)Ljava/lang/Object;", "(Z)TE;", $ABSTRACT},
	{"performFalseEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TL;TE;)V", $ABSTRACT},
	{"performOnListener", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", "(TL;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", 0},
	{"performTrueEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TL;TE;)V", $ABSTRACT},
	{}
};

$InnerClassInfo __AppEventHandler$_BooleanAppEventMultiplexor_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_BooleanAppEventMultiplexor", $ABSTRACT},
	{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_AppEventMultiplexor", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_BooleanAppEventMultiplexor_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor",
	"com.apple.eawt._AppEventHandler$_AppEventMultiplexor",
	nullptr,
	__AppEventHandler$_BooleanAppEventMultiplexor_FieldInfo_,
	__AppEventHandler$_BooleanAppEventMultiplexor_MethodInfo_,
	"<L:Ljava/lang/Object;E:Ljava/lang/Object;>Lcom/apple/eawt/_AppEventHandler$_AppEventMultiplexor<TL;>;",
	nullptr,
	__AppEventHandler$_BooleanAppEventMultiplexor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_BooleanAppEventMultiplexor($Class* clazz) {
	return $of($alloc(_AppEventHandler$_BooleanAppEventMultiplexor));
}

void _AppEventHandler$_BooleanAppEventMultiplexor::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_AppEventMultiplexor::init$(this$0);
}

void _AppEventHandler$_BooleanAppEventMultiplexor::performOnListener(Object$* listener, $_AppEventHandler$_NativeEvent* event) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	bool isTrue = $nc($Boolean::TRUE)->equals($($nc(event)->get(0)));
	$var($Object, e, createEvent(isTrue));
	if (isTrue) {
		performTrueEventOn(listener, e);
	} else {
		performFalseEventOn(listener, e);
	}
}

_AppEventHandler$_BooleanAppEventMultiplexor::_AppEventHandler$_BooleanAppEventMultiplexor() {
}

$Class* _AppEventHandler$_BooleanAppEventMultiplexor::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_BooleanAppEventMultiplexor, name, initialize, &__AppEventHandler$_BooleanAppEventMultiplexor_ClassInfo_, allocate$_AppEventHandler$_BooleanAppEventMultiplexor);
	return class$;
}

$Class* _AppEventHandler$_BooleanAppEventMultiplexor::class$ = nullptr;

		} // eawt
	} // apple
} // com