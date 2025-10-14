#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;
using $Win32ShellFolderManager2$ComInvoker = ::sun::awt::shell::Win32ShellFolderManager2$ComInvoker;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolderManager2$ComInvoker$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$ComInvoker$1, this$0)},
	{"val$task", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$ComInvoker$1, val$task)},
	{}
};

$MethodInfo _Win32ShellFolderManager2$ComInvoker$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;Ljava/lang/Runnable;)V", "()V", 0, $method(static_cast<void(Win32ShellFolderManager2$ComInvoker$1::*)($Win32ShellFolderManager2$ComInvoker*,$Runnable*)>(&Win32ShellFolderManager2$ComInvoker$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolderManager2$ComInvoker$1_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker",
	"newThread",
	"(Ljava/lang/Runnable;)Ljava/lang/Thread;"
};

$InnerClassInfo _Win32ShellFolderManager2$ComInvoker$1_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker", "sun.awt.shell.Win32ShellFolderManager2", "ComInvoker", $PRIVATE | $STATIC},
	{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolderManager2$ComInvoker$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Win32ShellFolderManager2$ComInvoker$1_FieldInfo_,
	_Win32ShellFolderManager2$ComInvoker$1_MethodInfo_,
	nullptr,
	&_Win32ShellFolderManager2$ComInvoker$1_EnclosingMethodInfo_,
	_Win32ShellFolderManager2$ComInvoker$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolderManager2"
};

$Object* allocate$Win32ShellFolderManager2$ComInvoker$1($Class* clazz) {
	return $of($alloc(Win32ShellFolderManager2$ComInvoker$1));
}

void Win32ShellFolderManager2$ComInvoker$1::init$($Win32ShellFolderManager2$ComInvoker* this$0, $Runnable* val$task) {
	$set(this, this$0, this$0);
	$set(this, val$task, val$task);
}

void Win32ShellFolderManager2$ComInvoker$1::run() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$Win32ShellFolderManager2::initializeCom();
			$nc(this->val$task)->run();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Win32ShellFolderManager2::uninitializeCom();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Win32ShellFolderManager2$ComInvoker$1::Win32ShellFolderManager2$ComInvoker$1() {
}

$Class* Win32ShellFolderManager2$ComInvoker$1::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolderManager2$ComInvoker$1, name, initialize, &_Win32ShellFolderManager2$ComInvoker$1_ClassInfo_, allocate$Win32ShellFolderManager2$ComInvoker$1);
	return class$;
}

$Class* Win32ShellFolderManager2$ComInvoker$1::class$ = nullptr;

		} // shell
	} // awt
} // sun