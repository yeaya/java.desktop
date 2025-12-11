#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor$1.h>

#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <jcpp.h>

using $_AppEventHandler$_AppEventMultiplexor = ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_AppEventMultiplexor$1_FieldInfo_[] = {
	{"this$1", "Lcom/apple/eawt/_AppEventHandler$_AppEventMultiplexor;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppEventMultiplexor$1, this$1)},
	{"val$event", "Lcom/apple/eawt/_AppEventHandler$_NativeEvent;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppEventMultiplexor$1, val$event)},
	{"val$listener", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppEventMultiplexor$1, val$listener)},
	{}
};

$MethodInfo __AppEventHandler$_AppEventMultiplexor$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler$_AppEventMultiplexor;Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", "()V", 0, $method(static_cast<void(_AppEventHandler$_AppEventMultiplexor$1::*)($_AppEventHandler$_AppEventMultiplexor*,Object$*,$_AppEventHandler$_NativeEvent*)>(&_AppEventHandler$_AppEventMultiplexor$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo __AppEventHandler$_AppEventMultiplexor$1_EnclosingMethodInfo_ = {
	"com.apple.eawt._AppEventHandler$_AppEventMultiplexor",
	"dispatch",
	"(Lcom/apple/eawt/_AppEventHandler$_NativeEvent;[Ljava/lang/Object;)V"
};

$InnerClassInfo __AppEventHandler$_AppEventMultiplexor$1_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_AppEventMultiplexor", $ABSTRACT},
	{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor$1", nullptr, nullptr, 0},
	{"com.apple.eawt._AppEventHandler$_NativeEvent", "com.apple.eawt._AppEventHandler", "_NativeEvent", $STATIC},
	{}
};

$ClassInfo __AppEventHandler$_AppEventMultiplexor$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_AppEventMultiplexor$1",
	"java.lang.Object",
	"java.lang.Runnable",
	__AppEventHandler$_AppEventMultiplexor$1_FieldInfo_,
	__AppEventHandler$_AppEventMultiplexor$1_MethodInfo_,
	nullptr,
	&__AppEventHandler$_AppEventMultiplexor$1_EnclosingMethodInfo_,
	__AppEventHandler$_AppEventMultiplexor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_AppEventMultiplexor$1($Class* clazz) {
	return $of($alloc(_AppEventHandler$_AppEventMultiplexor$1));
}

void _AppEventHandler$_AppEventMultiplexor$1::init$($_AppEventHandler$_AppEventMultiplexor* this$1, Object$* val$listener, $_AppEventHandler$_NativeEvent* val$event) {
	$set(this, this$1, this$1);
	$set(this, val$listener, val$listener);
	$set(this, val$event, val$event);
}

void _AppEventHandler$_AppEventMultiplexor$1::run() {
	this->this$1->performOnListener(this->val$listener, this->val$event);
}

_AppEventHandler$_AppEventMultiplexor$1::_AppEventHandler$_AppEventMultiplexor$1() {
}

$Class* _AppEventHandler$_AppEventMultiplexor$1::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_AppEventMultiplexor$1, name, initialize, &__AppEventHandler$_AppEventMultiplexor$1_ClassInfo_, allocate$_AppEventHandler$_AppEventMultiplexor$1);
	return class$;
}

$Class* _AppEventHandler$_AppEventMultiplexor$1::class$ = nullptr;

		} // eawt
	} // apple
} // com