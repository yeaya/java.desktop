#include <sun/awt/shell/Win32ShellFolder2$12.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$12_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$12, this$0)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$12, val$name)},
	{}
};

$MethodInfo _Win32ShellFolder2$12_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$12::*)($Win32ShellFolder2*,$String*)>(&Win32ShellFolder2$12::init$))},
	{"call", "()Ljava/lang/Long;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$12_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"parseDisplayName",
	"(Ljava/lang/String;)J"
};

$InnerClassInfo _Win32ShellFolder2$12_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$12", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$12_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$12",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$12_FieldInfo_,
	_Win32ShellFolder2$12_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Long;>;",
	&_Win32ShellFolder2$12_EnclosingMethodInfo_,
	_Win32ShellFolder2$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$12($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$12));
}

void Win32ShellFolder2$12::init$($Win32ShellFolder2* this$0, $String* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
}

$Object* Win32ShellFolder2$12::call() {
	return $of($Long::valueOf($Win32ShellFolder2::parseDisplayName0(this->this$0->getIShellFolder(), this->val$name)));
}

Win32ShellFolder2$12::Win32ShellFolder2$12() {
}

$Class* Win32ShellFolder2$12::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$12, name, initialize, &_Win32ShellFolder2$12_ClassInfo_, allocate$Win32ShellFolder2$12);
	return class$;
}

$Class* Win32ShellFolder2$12::class$ = nullptr;

		} // shell
	} // awt
} // sun