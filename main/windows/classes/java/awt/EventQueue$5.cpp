#include <java/awt/EventQueue$5.h>

#include <java/awt/EventQueue.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;

namespace java {
	namespace awt {

$FieldInfo _EventQueue$5_FieldInfo_[] = {
	{"this$0", "Ljava/awt/EventQueue;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$5, this$0)},
	{"val$eventAcc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$5, val$eventAcc)},
	{"val$action", "Ljava/security/PrivilegedAction;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$5, val$action)},
	{}
};

$MethodInfo _EventQueue$5_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/EventQueue;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)V", "()V", 0, $method(static_cast<void(EventQueue$5::*)($EventQueue*,$PrivilegedAction*,$AccessControlContext*)>(&EventQueue$5::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventQueue$5_EnclosingMethodInfo_ = {
	"java.awt.EventQueue",
	"dispatchEvent",
	"(Ljava/awt/AWTEvent;)V"
};

$InnerClassInfo _EventQueue$5_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventQueue$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventQueue$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_EventQueue$5_FieldInfo_,
	_EventQueue$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_EventQueue$5_EnclosingMethodInfo_,
	_EventQueue$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventQueue"
};

$Object* allocate$EventQueue$5($Class* clazz) {
	return $of($alloc(EventQueue$5));
}

void EventQueue$5::init$($EventQueue* this$0, $PrivilegedAction* val$action, $AccessControlContext* val$eventAcc) {
	$set(this, this$0, this$0);
	$set(this, val$action, val$action);
	$set(this, val$eventAcc, val$eventAcc);
}

$Object* EventQueue$5::run() {
	$init($EventQueue);
	$nc($EventQueue::javaSecurityAccess)->doIntersectionPrivilege(this->val$action, this->val$eventAcc);
	return $of(nullptr);
}

EventQueue$5::EventQueue$5() {
}

$Class* EventQueue$5::load$($String* name, bool initialize) {
	$loadClass(EventQueue$5, name, initialize, &_EventQueue$5_ClassInfo_, allocate$EventQueue$5);
	return class$;
}

$Class* EventQueue$5::class$ = nullptr;

	} // awt
} // java