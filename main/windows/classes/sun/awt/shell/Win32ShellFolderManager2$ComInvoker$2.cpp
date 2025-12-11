#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker$2.h>

#include <java/util/concurrent/Future.h>
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Future = ::java::util::concurrent::Future;
using $Win32ShellFolderManager2$ComInvoker = ::sun::awt::shell::Win32ShellFolderManager2$ComInvoker;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolderManager2$ComInvoker$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$ComInvoker$2, this$0)},
	{"val$future", "Ljava/util/concurrent/Future;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$ComInvoker$2, val$future)},
	{}
};

$MethodInfo _Win32ShellFolderManager2$ComInvoker$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;Ljava/util/concurrent/Future;)V", "()V", 0, $method(static_cast<void(Win32ShellFolderManager2$ComInvoker$2::*)($Win32ShellFolderManager2$ComInvoker*,$Future*)>(&Win32ShellFolderManager2$ComInvoker$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolderManager2$ComInvoker$2_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker",
	"invoke",
	"(Ljava/util/concurrent/Callable;)Ljava/lang/Object;"
};

$InnerClassInfo _Win32ShellFolderManager2$ComInvoker$2_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker", "sun.awt.shell.Win32ShellFolderManager2", "ComInvoker", $PRIVATE | $STATIC},
	{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolderManager2$ComInvoker$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Win32ShellFolderManager2$ComInvoker$2_FieldInfo_,
	_Win32ShellFolderManager2$ComInvoker$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Win32ShellFolderManager2$ComInvoker$2_EnclosingMethodInfo_,
	_Win32ShellFolderManager2$ComInvoker$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolderManager2"
};

$Object* allocate$Win32ShellFolderManager2$ComInvoker$2($Class* clazz) {
	return $of($alloc(Win32ShellFolderManager2$ComInvoker$2));
}

void Win32ShellFolderManager2$ComInvoker$2::init$($Win32ShellFolderManager2$ComInvoker* this$0, $Future* val$future) {
	$set(this, this$0, this$0);
	$set(this, val$future, val$future);
}

$Object* Win32ShellFolderManager2$ComInvoker$2::run() {
	$nc(this->val$future)->cancel(true);
	return $of(nullptr);
}

Win32ShellFolderManager2$ComInvoker$2::Win32ShellFolderManager2$ComInvoker$2() {
}

$Class* Win32ShellFolderManager2$ComInvoker$2::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolderManager2$ComInvoker$2, name, initialize, &_Win32ShellFolderManager2$ComInvoker$2_ClassInfo_, allocate$Win32ShellFolderManager2$ComInvoker$2);
	return class$;
}

$Class* Win32ShellFolderManager2$ComInvoker$2::class$ = nullptr;

		} // shell
	} // awt
} // sun