#include <sun/awt/shell/Win32ShellFolder2$2.h>

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

$FieldInfo _Win32ShellFolder2$2_FieldInfo_[] = {
	{"val$pIDL", "J", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$2, val$pIDL)},
	{"val$parent", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$2, val$parent)},
	{}
};

$MethodInfo _Win32ShellFolder2$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;J)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$2::*)($Win32ShellFolder2*,int64_t)>(&Win32ShellFolder2$2::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$2_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"createShellFolder",
	"(Lsun/awt/shell/Win32ShellFolder2;J)Lsun/awt/shell/Win32ShellFolder2;"
};

$InnerClassInfo _Win32ShellFolder2$2_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$2_FieldInfo_,
	_Win32ShellFolder2$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_Win32ShellFolder2$2_EnclosingMethodInfo_,
	_Win32ShellFolder2$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$2($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$2));
}

void Win32ShellFolder2$2::init$($Win32ShellFolder2* val$parent, int64_t val$pIDL) {
	$set(this, val$parent, val$parent);
	this->val$pIDL = val$pIDL;
}

$Object* Win32ShellFolder2$2::call() {
	return $of($Win32ShellFolder2::getFileSystemPath($nc(this->val$parent)->getIShellFolder(), this->val$pIDL));
}

Win32ShellFolder2$2::Win32ShellFolder2$2() {
}

$Class* Win32ShellFolder2$2::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$2, name, initialize, &_Win32ShellFolder2$2_ClassInfo_, allocate$Win32ShellFolder2$2);
	return class$;
}

$Class* Win32ShellFolder2$2::class$ = nullptr;

		} // shell
	} // awt
} // sun