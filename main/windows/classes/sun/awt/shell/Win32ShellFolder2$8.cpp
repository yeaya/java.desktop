#include <sun/awt/shell/Win32ShellFolder2$8.h>

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
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
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
using $Win32ShellFolder2$FolderDisposer = ::sun::awt::shell::Win32ShellFolder2$FolderDisposer;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$8_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$8, this$0)},
	{"val$includeHiddenFiles", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$8, val$includeHiddenFiles)},
	{}
};

$MethodInfo _Win32ShellFolder2$8_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Z)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$8::*)($Win32ShellFolder2*,bool)>(&Win32ShellFolder2$8::init$))},
	{"call", "()Ljava/lang/Long;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$8_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getEnumObjects",
	"(Z)J"
};

$InnerClassInfo _Win32ShellFolder2$8_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$8",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$8_FieldInfo_,
	_Win32ShellFolder2$8_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Long;>;",
	&_Win32ShellFolder2$8_EnclosingMethodInfo_,
	_Win32ShellFolder2$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$8($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$8));
}

void Win32ShellFolder2$8::init$($Win32ShellFolder2* this$0, bool val$includeHiddenFiles) {
	$set(this, this$0, this$0);
	this->val$includeHiddenFiles = val$includeHiddenFiles;
}

$Object* Win32ShellFolder2$8::call() {
	bool isDesktop = $nc(this->this$0->disposer)->pIShellFolder == this->this$0->getDesktopIShellFolder();
	return $of($Long::valueOf(this->this$0->getEnumObjects($nc(this->this$0->disposer)->pIShellFolder, isDesktop, this->val$includeHiddenFiles)));
}

Win32ShellFolder2$8::Win32ShellFolder2$8() {
}

$Class* Win32ShellFolder2$8::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$8, name, initialize, &_Win32ShellFolder2$8_ClassInfo_, allocate$Win32ShellFolder2$8);
	return class$;
}

$Class* Win32ShellFolder2$8::class$ = nullptr;

		} // shell
	} // awt
} // sun