#include <java/beans/EventHandler$2.h>

#include <java/beans/EventHandler.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

using $EventHandler = ::java::beans::EventHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;

namespace java {
	namespace beans {

$FieldInfo _EventHandler$2_FieldInfo_[] = {
	{"val$handler", "Ljava/beans/EventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$2, val$handler)},
	{"val$interfaces", "[Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$2, val$interfaces)},
	{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$2, val$loader)},
	{}
};

$MethodInfo _EventHandler$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/beans/EventHandler;)V", "()V", 0, $method(static_cast<void(EventHandler$2::*)($ClassLoader*,$ClassArray*,$EventHandler*)>(&EventHandler$2::init$))},
	{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventHandler$2_EnclosingMethodInfo_ = {
	"java.beans.EventHandler",
	"create",
	"(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;"
};

$InnerClassInfo _EventHandler$2_InnerClassesInfo_[] = {
	{"java.beans.EventHandler$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventHandler$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.EventHandler$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_EventHandler$2_FieldInfo_,
	_EventHandler$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<TT;>;",
	&_EventHandler$2_EnclosingMethodInfo_,
	_EventHandler$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.EventHandler"
};

$Object* allocate$EventHandler$2($Class* clazz) {
	return $of($alloc(EventHandler$2));
}

void EventHandler$2::init$($ClassLoader* val$loader, $ClassArray* val$interfaces, $EventHandler* val$handler) {
	$set(this, val$loader, val$loader);
	$set(this, val$interfaces, val$interfaces);
	$set(this, val$handler, val$handler);
}

$Object* EventHandler$2::run() {
	$beforeCallerSensitive();
	return $of($Proxy::newProxyInstance(this->val$loader, this->val$interfaces, static_cast<$InvocationHandler*>(this->val$handler)));
}

EventHandler$2::EventHandler$2() {
}

$Class* EventHandler$2::load$($String* name, bool initialize) {
	$loadClass(EventHandler$2, name, initialize, &_EventHandler$2_ClassInfo_, allocate$EventHandler$2);
	return class$;
}

$Class* EventHandler$2::class$ = nullptr;

	} // beans
} // java