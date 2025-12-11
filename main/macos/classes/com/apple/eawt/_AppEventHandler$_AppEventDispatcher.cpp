#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher$1.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/lang/Runnable.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventDispatcher$1 = ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher$1;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_AppEventDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppEventDispatcher, this$0)},
	{"_handler", "Ljava/lang/Object;", "TH;", 0, $field(_AppEventHandler$_AppEventDispatcher, _handler)},
	{"handlerContext", "Lsun/awt/AppContext;", nullptr, 0, $field(_AppEventHandler$_AppEventDispatcher, handlerContext)},
	{}
};

$MethodInfo __AppEventHandler$_AppEventDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_AppEventDispatcher::*)($_AppEventHandler*)>(&_AppEventHandler$_AppEventDispatcher::init$))},
	{"dispatch", "(Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0},
	{"performDefaultAction", "(Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0},
	{"performUsing", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", "(TH;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", $ABSTRACT},
	{"setHandler", "(Ljava/lang/Object;)V", "(TH;)V", $SYNCHRONIZED},
	{"setHandlerContext", "(Lsun/awt/AppContext;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo __AppEventHandler$_AppEventDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_AppEventDispatcher", "com.apple.eawt._AppEventHandler", "_AppEventDispatcher", $ABSTRACT},
	{"com.apple.eawt._AppEventHandler$_AppEventDispatcher$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo __AppEventHandler$_AppEventDispatcher_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.eawt._AppEventHandler$_AppEventDispatcher",
	"java.lang.Object",
	nullptr,
	__AppEventHandler$_AppEventDispatcher_FieldInfo_,
	__AppEventHandler$_AppEventDispatcher_MethodInfo_,
	"<H:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	__AppEventHandler$_AppEventDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_AppEventDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_AppEventDispatcher));
}

void _AppEventHandler$_AppEventDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
}

void _AppEventHandler$_AppEventDispatcher::dispatch($_AppEventHandler$_NativeEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Object, localHandler, nullptr);
	$var($AppContext, localHandlerContext, nullptr);
	$synchronized(this) {
		$assign(localHandler, this->_handler);
		$assign(localHandlerContext, this->handlerContext);
	}
	if (localHandler == nullptr) {
		performDefaultAction(event);
	} else {
		$SunToolkit::invokeLaterOnAppContext(localHandlerContext, $$new($_AppEventHandler$_AppEventDispatcher$1, this, localHandler, event));
	}
}

void _AppEventHandler$_AppEventDispatcher::setHandler(Object$* handler) {
	$synchronized(this) {
		$set(this, _handler, handler);
		setHandlerContext($($AppContext::getAppContext()));
	}
}

void _AppEventHandler$_AppEventDispatcher::performDefaultAction($_AppEventHandler$_NativeEvent* event) {
}

void _AppEventHandler$_AppEventDispatcher::setHandlerContext($AppContext* ctx) {
	if (ctx == nullptr) {
		$throwNew($RuntimeException, "Attempting to set a handler from a thread group without AppContext"_s);
	}
	$set(this, handlerContext, ctx);
}

_AppEventHandler$_AppEventDispatcher::_AppEventHandler$_AppEventDispatcher() {
}

$Class* _AppEventHandler$_AppEventDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_AppEventDispatcher, name, initialize, &__AppEventHandler$_AppEventDispatcher_ClassInfo_, allocate$_AppEventHandler$_AppEventDispatcher);
	return class$;
}

$Class* _AppEventHandler$_AppEventDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com