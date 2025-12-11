#include <java/beans/EventHandler$1.h>

#include <java/beans/EventHandler.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EventHandler = ::java::beans::EventHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace beans {

$FieldInfo _EventHandler$1_FieldInfo_[] = {
	{"this$0", "Ljava/beans/EventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$1, this$0)},
	{"val$arguments", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$1, val$arguments)},
	{"val$method", "Ljava/lang/reflect/Method;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$1, val$method)},
	{"val$proxy", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$1, val$proxy)},
	{}
};

$MethodInfo _EventHandler$1_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/EventHandler;Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)V", "()V", 0, $method(static_cast<void(EventHandler$1::*)($EventHandler*,Object$*,$Method*,$ObjectArray*)>(&EventHandler$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventHandler$1_EnclosingMethodInfo_ = {
	"java.beans.EventHandler",
	"invoke",
	"(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;"
};

$InnerClassInfo _EventHandler$1_InnerClassesInfo_[] = {
	{"java.beans.EventHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.EventHandler$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_EventHandler$1_FieldInfo_,
	_EventHandler$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_EventHandler$1_EnclosingMethodInfo_,
	_EventHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.EventHandler"
};

$Object* allocate$EventHandler$1($Class* clazz) {
	return $of($alloc(EventHandler$1));
}

void EventHandler$1::init$($EventHandler* this$0, Object$* val$proxy, $Method* val$method, $ObjectArray* val$arguments) {
	$set(this, this$0, this$0);
	$set(this, val$proxy, val$proxy);
	$set(this, val$method, val$method);
	$set(this, val$arguments, val$arguments);
}

$Object* EventHandler$1::run() {
	return $of(this->this$0->invokeInternal(this->val$proxy, this->val$method, this->val$arguments));
}

EventHandler$1::EventHandler$1() {
}

$Class* EventHandler$1::load$($String* name, bool initialize) {
	$loadClass(EventHandler$1, name, initialize, &_EventHandler$1_ClassInfo_, allocate$EventHandler$1);
	return class$;
}

$Class* EventHandler$1::class$ = nullptr;

	} // beans
} // java