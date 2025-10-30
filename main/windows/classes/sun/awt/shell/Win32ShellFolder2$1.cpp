#include <sun/awt/shell/Win32ShellFolder2$1.h>

#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$FolderDisposer = ::sun::awt::shell::Win32ShellFolder2$FolderDisposer;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$1, this$0)},
	{"val$csidl", "I", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$1, val$csidl)},
	{}
};

$MethodInfo _Win32ShellFolder2$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;I)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$1::*)($Win32ShellFolder2*,int32_t)>(&Win32ShellFolder2$1::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$1_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"<init>",
	"(I)V"
};

$InnerClassInfo _Win32ShellFolder2$1_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$1_FieldInfo_,
	_Win32ShellFolder2$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_Win32ShellFolder2$1_EnclosingMethodInfo_,
	_Win32ShellFolder2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$1($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$1));
}

void Win32ShellFolder2$1::init$($Win32ShellFolder2* this$0, int32_t val$csidl) {
	$set(this, this$0, this$0);
	this->val$csidl = val$csidl;
}

$Object* Win32ShellFolder2$1::call() {
	if (this->val$csidl == 0) {
		this->this$0->initDesktop();
	} else {
		this->this$0->initSpecial($nc($(this->this$0->getDesktop()))->getIShellFolder(), this->val$csidl);
		int64_t pIDL = $nc(this->this$0->disposer)->relativePIDL;
		$set(this->this$0, parent, this->this$0->getDesktop());
		while (pIDL != 0) {
			int64_t childPIDL = $Win32ShellFolder2::copyFirstPIDLEntry(pIDL);
			if (childPIDL != 0) {
				pIDL = $Win32ShellFolder2::getNextPIDLEntry(pIDL);
				if (pIDL != 0) {
					$set(this->this$0, parent, $Win32ShellFolder2::createShellFolder($cast($Win32ShellFolder2, this->this$0->parent), childPIDL));
				} else {
					$nc(this->this$0->disposer)->relativePIDL = childPIDL;
				}
			} else {
				break;
			}
		}
	}
	return $of(nullptr);
}

Win32ShellFolder2$1::Win32ShellFolder2$1() {
}

$Class* Win32ShellFolder2$1::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$1, name, initialize, &_Win32ShellFolder2$1_ClassInfo_, allocate$Win32ShellFolder2$1);
	return class$;
}

$Class* Win32ShellFolder2$1::class$ = nullptr;

		} // shell
	} // awt
} // sun