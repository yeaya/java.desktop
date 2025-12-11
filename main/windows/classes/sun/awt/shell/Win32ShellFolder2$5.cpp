#include <sun/awt/shell/Win32ShellFolder2$5.h>

#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$5_FieldInfo_[] = {
	{"val$pidl2", "J", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$5, val$pidl2)},
	{"val$pidl1", "J", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$5, val$pidl1)},
	{"val$pIShellFolder", "J", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$5, val$pIShellFolder)},
	{}
};

$MethodInfo _Win32ShellFolder2$5_MethodInfo_[] = {
	{"<init>", "(JJJ)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$5::*)(int64_t,int64_t,int64_t)>(&Win32ShellFolder2$5::init$))},
	{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$5_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"pidlsEqual",
	"(JJJ)Z"
};

$InnerClassInfo _Win32ShellFolder2$5_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$5",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$5_FieldInfo_,
	_Win32ShellFolder2$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
	&_Win32ShellFolder2$5_EnclosingMethodInfo_,
	_Win32ShellFolder2$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$5($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$5));
}

void Win32ShellFolder2$5::init$(int64_t val$pIShellFolder, int64_t val$pidl1, int64_t val$pidl2) {
	this->val$pIShellFolder = val$pIShellFolder;
	this->val$pidl1 = val$pidl1;
	this->val$pidl2 = val$pidl2;
}

$Object* Win32ShellFolder2$5::call() {
	return $of($Boolean::valueOf($Win32ShellFolder2::compareIDs(this->val$pIShellFolder, this->val$pidl1, this->val$pidl2) == 0));
}

Win32ShellFolder2$5::Win32ShellFolder2$5() {
}

$Class* Win32ShellFolder2$5::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$5, name, initialize, &_Win32ShellFolder2$5_ClassInfo_, allocate$Win32ShellFolder2$5);
	return class$;
}

$Class* Win32ShellFolder2$5::class$ = nullptr;

		} // shell
	} // awt
} // sun