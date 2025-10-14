#include <sun/awt/im/ExecutableInputMethodManager$1AWTInvocationLock.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _ExecutableInputMethodManager$1AWTInvocationLock_FieldInfo_[] = {
	{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$1AWTInvocationLock, this$0)},
	{}
};

$MethodInfo _ExecutableInputMethodManager$1AWTInvocationLock_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(static_cast<void(ExecutableInputMethodManager$1AWTInvocationLock::*)($ExecutableInputMethodManager*)>(&ExecutableInputMethodManager$1AWTInvocationLock::init$))},
	{}
};

$EnclosingMethodInfo _ExecutableInputMethodManager$1AWTInvocationLock_EnclosingMethodInfo_ = {
	"sun.awt.im.ExecutableInputMethodManager",
	"showInputMethodMenuOnRequesterEDT",
	"(Ljava/awt/Component;)V"
};

$InnerClassInfo _ExecutableInputMethodManager$1AWTInvocationLock_InnerClassesInfo_[] = {
	{"sun.awt.im.ExecutableInputMethodManager$1AWTInvocationLock", nullptr, "AWTInvocationLock", 0},
	{}
};

$ClassInfo _ExecutableInputMethodManager$1AWTInvocationLock_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.ExecutableInputMethodManager$1AWTInvocationLock",
	"java.lang.Object",
	nullptr,
	_ExecutableInputMethodManager$1AWTInvocationLock_FieldInfo_,
	_ExecutableInputMethodManager$1AWTInvocationLock_MethodInfo_,
	nullptr,
	&_ExecutableInputMethodManager$1AWTInvocationLock_EnclosingMethodInfo_,
	_ExecutableInputMethodManager$1AWTInvocationLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.im.ExecutableInputMethodManager"
};

$Object* allocate$ExecutableInputMethodManager$1AWTInvocationLock($Class* clazz) {
	return $of($alloc(ExecutableInputMethodManager$1AWTInvocationLock));
}

void ExecutableInputMethodManager$1AWTInvocationLock::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

ExecutableInputMethodManager$1AWTInvocationLock::ExecutableInputMethodManager$1AWTInvocationLock() {
}

$Class* ExecutableInputMethodManager$1AWTInvocationLock::load$($String* name, bool initialize) {
	$loadClass(ExecutableInputMethodManager$1AWTInvocationLock, name, initialize, &_ExecutableInputMethodManager$1AWTInvocationLock_ClassInfo_, allocate$ExecutableInputMethodManager$1AWTInvocationLock);
	return class$;
}

$Class* ExecutableInputMethodManager$1AWTInvocationLock::class$ = nullptr;

		} // im
	} // awt
} // sun