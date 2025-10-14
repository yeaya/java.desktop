#include <sun/awt/shell/Win32ShellFolder2$13.h>

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

$FieldInfo _Win32ShellFolder2$13_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$13, this$0)},
	{}
};

$MethodInfo _Win32ShellFolder2$13_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;)V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2$13::*)($Win32ShellFolder2*)>(&Win32ShellFolder2$13::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$13_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getDisplayName",
	"()Ljava/lang/String;"
};

$InnerClassInfo _Win32ShellFolder2$13_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$13", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$13_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$13",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$13_FieldInfo_,
	_Win32ShellFolder2$13_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_Win32ShellFolder2$13_EnclosingMethodInfo_,
	_Win32ShellFolder2$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$13($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$13));
}

void Win32ShellFolder2$13::init$($Win32ShellFolder2* this$0) {
	$set(this, this$0, this$0);
}

$Object* Win32ShellFolder2$13::call() {
	int64_t var$0 = this->this$0->getParentIShellFolder();
	return $of($Win32ShellFolder2::getDisplayNameOf(var$0, this->this$0->getRelativePIDL(), 0));
}

Win32ShellFolder2$13::Win32ShellFolder2$13() {
}

$Class* Win32ShellFolder2$13::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$13, name, initialize, &_Win32ShellFolder2$13_ClassInfo_, allocate$Win32ShellFolder2$13);
	return class$;
}

$Class* Win32ShellFolder2$13::class$ = nullptr;

		} // shell
	} // awt
} // sun