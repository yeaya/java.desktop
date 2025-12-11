#include <sun/awt/shell/Win32ShellFolder2$11.h>

#include <java/lang/InternalError.h>
#include <java/lang/InterruptedException.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$11_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$11, this$0)},
	{"val$resolve", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$11, val$resolve)},
	{}
};

$MethodInfo _Win32ShellFolder2$11_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Z)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$11::*)($Win32ShellFolder2*,bool)>(&Win32ShellFolder2$11::init$))},
	{"call", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$11_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getLinkLocation",
	"(Z)Lsun/awt/shell/Win32ShellFolder2;"
};

$InnerClassInfo _Win32ShellFolder2$11_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$11_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$11",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$11_FieldInfo_,
	_Win32ShellFolder2$11_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Lsun/awt/shell/Win32ShellFolder2;>;",
	&_Win32ShellFolder2$11_EnclosingMethodInfo_,
	_Win32ShellFolder2$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$11($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$11));
}

void Win32ShellFolder2$11::init$($Win32ShellFolder2* this$0, bool val$resolve) {
	$set(this, this$0, this$0);
	this->val$resolve = val$resolve;
}

$Object* Win32ShellFolder2$11::call() {
	$useLocalCurrentObjectStackCache();
	if (!this->this$0->isLink()) {
		return $of(nullptr);
	}
	$var($Win32ShellFolder2, location, nullptr);
	int64_t var$0 = this->this$0->getParentIShellFolder();
	int64_t linkLocationPIDL = $Win32ShellFolder2::getLinkLocation(var$0, this->this$0->getRelativePIDL(), this->val$resolve);
	if (linkLocationPIDL != 0) {
		try {
			$assign(location, $Win32ShellFolderManager2::createShellFolderFromRelativePIDL($(this->this$0->getDesktop()), linkLocationPIDL));
		} catch ($InterruptedException& e) {
		} catch ($InternalError& e) {
		}
	}
	return $of(location);
}

Win32ShellFolder2$11::Win32ShellFolder2$11() {
}

$Class* Win32ShellFolder2$11::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$11, name, initialize, &_Win32ShellFolder2$11_ClassInfo_, allocate$Win32ShellFolder2$11);
	return class$;
}

$Class* Win32ShellFolder2$11::class$ = nullptr;

		} // shell
	} // awt
} // sun