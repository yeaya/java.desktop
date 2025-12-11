#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer$1.h>

#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$FolderDisposer = ::sun::awt::shell::Win32ShellFolder2$FolderDisposer;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$FolderDisposer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2$FolderDisposer;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$FolderDisposer$1, this$0)},
	{}
};

$MethodInfo _Win32ShellFolder2$FolderDisposer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2$FolderDisposer;)V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2$FolderDisposer$1::*)($Win32ShellFolder2$FolderDisposer*)>(&Win32ShellFolder2$FolderDisposer$1::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$FolderDisposer$1_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2$FolderDisposer",
	"dispose",
	"()V"
};

$InnerClassInfo _Win32ShellFolder2$FolderDisposer$1_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$FolderDisposer", "sun.awt.shell.Win32ShellFolder2", "FolderDisposer", $STATIC},
	{"sun.awt.shell.Win32ShellFolder2$FolderDisposer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$FolderDisposer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$FolderDisposer$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$FolderDisposer$1_FieldInfo_,
	_Win32ShellFolder2$FolderDisposer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_Win32ShellFolder2$FolderDisposer$1_EnclosingMethodInfo_,
	_Win32ShellFolder2$FolderDisposer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$FolderDisposer$1($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$FolderDisposer$1));
}

void Win32ShellFolder2$FolderDisposer$1::init$($Win32ShellFolder2$FolderDisposer* this$0) {
	$set(this, this$0, this$0);
}

$Object* Win32ShellFolder2$FolderDisposer$1::call() {
	if (this->this$0->relativePIDL != 0) {
		$Win32ShellFolder2::releasePIDL(this->this$0->relativePIDL);
	}
	if (this->this$0->absolutePIDL != 0) {
		$Win32ShellFolder2::releasePIDL(this->this$0->absolutePIDL);
	}
	if (this->this$0->pIShellFolder != 0) {
		$Win32ShellFolder2::releaseIShellFolder(this->this$0->pIShellFolder);
	}
	return $of(nullptr);
}

Win32ShellFolder2$FolderDisposer$1::Win32ShellFolder2$FolderDisposer$1() {
}

$Class* Win32ShellFolder2$FolderDisposer$1::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$FolderDisposer$1, name, initialize, &_Win32ShellFolder2$FolderDisposer$1_ClassInfo_, allocate$Win32ShellFolder2$FolderDisposer$1);
	return class$;
}

$Class* Win32ShellFolder2$FolderDisposer$1::class$ = nullptr;

		} // shell
	} // awt
} // sun