#include <sun/awt/shell/Win32ShellFolder2$6.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$6_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$6, this$0)},
	{"val$attribute", "I", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$6, val$attribute)},
	{}
};

$MethodInfo _Win32ShellFolder2$6_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;I)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$6::*)($Win32ShellFolder2*,int32_t)>(&Win32ShellFolder2$6::init$))},
	{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$6_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"hasAttribute",
	"(I)Z"
};

$InnerClassInfo _Win32ShellFolder2$6_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$6",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$6_FieldInfo_,
	_Win32ShellFolder2$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
	&_Win32ShellFolder2$6_EnclosingMethodInfo_,
	_Win32ShellFolder2$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$6($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$6));
}

void Win32ShellFolder2$6::init$($Win32ShellFolder2* this$0, int32_t val$attribute) {
	$set(this, this$0, this$0);
	this->val$attribute = val$attribute;
}

$Object* Win32ShellFolder2$6::call() {
	int64_t var$0 = this->this$0->getParentIShellFolder();
	return $of($Boolean::valueOf(((int32_t)($Win32ShellFolder2::getAttributes0(var$0, this->this$0->getRelativePIDL(), this->val$attribute) & (uint32_t)this->val$attribute)) != 0));
}

Win32ShellFolder2$6::Win32ShellFolder2$6() {
}

$Class* Win32ShellFolder2$6::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$6, name, initialize, &_Win32ShellFolder2$6_ClassInfo_, allocate$Win32ShellFolder2$6);
	return class$;
}

$Class* Win32ShellFolder2$6::class$ = nullptr;

		} // shell
	} // awt
} // sun