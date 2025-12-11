#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>

#include <com/apple/eawt/_AppEventHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_NativeEvent_FieldInfo_[] = {
	{"args", "[Ljava/lang/Object;", nullptr, 0, $field(_AppEventHandler$_NativeEvent, args)},
	{}
};

$MethodInfo __AppEventHandler$_NativeEvent_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(_AppEventHandler$_NativeEvent::*)($ObjectArray*)>(&_AppEventHandler$_NativeEvent::init$))},
	{"get", "(I)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(I)TT;", 0},
	{}
};

$InnerClassInfo __AppEventHandler$_NativeEvent_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_NativeEvent", "com.apple.eawt._AppEventHandler", "_NativeEvent", $STATIC},
	{}
};

$ClassInfo __AppEventHandler$_NativeEvent_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_NativeEvent",
	"java.lang.Object",
	nullptr,
	__AppEventHandler$_NativeEvent_FieldInfo_,
	__AppEventHandler$_NativeEvent_MethodInfo_,
	nullptr,
	nullptr,
	__AppEventHandler$_NativeEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_NativeEvent($Class* clazz) {
	return $of($alloc(_AppEventHandler$_NativeEvent));
}

void _AppEventHandler$_NativeEvent::init$($ObjectArray* args) {
	$set(this, args, args);
}

$Object* _AppEventHandler$_NativeEvent::get(int32_t i) {
	if (this->args == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(this->args)->get(i));
}

_AppEventHandler$_NativeEvent::_AppEventHandler$_NativeEvent() {
}

$Class* _AppEventHandler$_NativeEvent::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_NativeEvent, name, initialize, &__AppEventHandler$_NativeEvent_ClassInfo_, allocate$_AppEventHandler$_NativeEvent);
	return class$;
}

$Class* _AppEventHandler$_NativeEvent::class$ = nullptr;

		} // eawt
	} // apple
} // com