#include <sun/awt/AppContext$1.h>

#include <java/lang/ClassLoader.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

$FieldInfo _AppContext$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$1, this$0)},
	{}
};

$MethodInfo _AppContext$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/AppContext;)V", nullptr, 0, $method(static_cast<void(AppContext$1::*)($AppContext*)>(&AppContext$1::init$))},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AppContext$1_EnclosingMethodInfo_ = {
	"sun.awt.AppContext",
	"<init>",
	"(Ljava/lang/ThreadGroup;)V"
};

$InnerClassInfo _AppContext$1_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AppContext$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AppContext$1_FieldInfo_,
	_AppContext$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_AppContext$1_EnclosingMethodInfo_,
	_AppContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$1($Class* clazz) {
	return $of($alloc(AppContext$1));
}

void AppContext$1::init$($AppContext* this$0) {
	$set(this, this$0, this$0);
}

$Object* AppContext$1::run() {
	$beforeCallerSensitive();
	return $of($($Thread::currentThread())->getContextClassLoader());
}

AppContext$1::AppContext$1() {
}

$Class* AppContext$1::load$($String* name, bool initialize) {
	$loadClass(AppContext$1, name, initialize, &_AppContext$1_ClassInfo_, allocate$AppContext$1);
	return class$;
}

$Class* AppContext$1::class$ = nullptr;

	} // awt
} // sun