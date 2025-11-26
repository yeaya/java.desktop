#include <sun/awt/AppContext$6$1.h>

#include <java/lang/ThreadGroup.h>
#include <sun/awt/AppContext$6.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AppContext = ::sun::awt::AppContext;
using $AppContext$6 = ::sun::awt::AppContext$6;

namespace sun {
	namespace awt {

$FieldInfo _AppContext$6$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/AppContext$6;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$6$1, this$0)},
	{"val$ecx", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$6$1, val$ecx)},
	{}
};

$MethodInfo _AppContext$6$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/AppContext$6;Lsun/awt/AppContext;)V", "()V", 0, $method(static_cast<void(AppContext$6$1::*)($AppContext$6*,$AppContext*)>(&AppContext$6$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AppContext$6$1_EnclosingMethodInfo_ = {
	"sun.awt.AppContext$6",
	"hasRootThreadGroup",
	"(Lsun/awt/AppContext;)Z"
};

$InnerClassInfo _AppContext$6$1_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$6", nullptr, nullptr, 0},
	{"sun.awt.AppContext$6$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppContext$6$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AppContext$6$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AppContext$6$1_FieldInfo_,
	_AppContext$6$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_AppContext$6$1_EnclosingMethodInfo_,
	_AppContext$6$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$6$1($Class* clazz) {
	return $of($alloc(AppContext$6$1));
}

void AppContext$6$1::init$($AppContext$6* this$0, $AppContext* val$ecx) {
	$set(this, this$0, this$0);
	$set(this, val$ecx, val$ecx);
}

$Object* AppContext$6$1::run() {
	return $of($Boolean::valueOf($nc($nc(this->val$ecx)->threadGroup)->getParent() == nullptr));
}

AppContext$6$1::AppContext$6$1() {
}

$Class* AppContext$6$1::load$($String* name, bool initialize) {
	$loadClass(AppContext$6$1, name, initialize, &_AppContext$6$1_ClassInfo_, allocate$AppContext$6$1);
	return class$;
}

$Class* AppContext$6$1::class$ = nullptr;

	} // awt
} // sun