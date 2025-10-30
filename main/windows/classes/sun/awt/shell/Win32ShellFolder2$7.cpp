#include <sun/awt/shell/Win32ShellFolder2$7.h>

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

$FieldInfo _Win32ShellFolder2$7_FieldInfo_[] = {
	{"val$csidl", "I", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$7, val$csidl)},
	{}
};

$MethodInfo _Win32ShellFolder2$7_MethodInfo_[] = {
	{"<init>", "(I)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$7::*)(int32_t)>(&Win32ShellFolder2$7::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$7_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getFileSystemPath",
	"(I)Ljava/lang/String;"
};

$InnerClassInfo _Win32ShellFolder2$7_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$7",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$7_FieldInfo_,
	_Win32ShellFolder2$7_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_Win32ShellFolder2$7_EnclosingMethodInfo_,
	_Win32ShellFolder2$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$7($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$7));
}

void Win32ShellFolder2$7::init$(int32_t val$csidl) {
	this->val$csidl = val$csidl;
}

$Object* Win32ShellFolder2$7::call() {
	return $of($Win32ShellFolder2::getFileSystemPath0(this->val$csidl));
}

Win32ShellFolder2$7::Win32ShellFolder2$7() {
}

$Class* Win32ShellFolder2$7::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$7, name, initialize, &_Win32ShellFolder2$7_ClassInfo_, allocate$Win32ShellFolder2$7);
	return class$;
}

$Class* Win32ShellFolder2$7::class$ = nullptr;

		} // shell
	} // awt
} // sun