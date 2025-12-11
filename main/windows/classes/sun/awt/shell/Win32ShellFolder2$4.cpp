#include <sun/awt/shell/Win32ShellFolder2$4.h>

#include <java/io/File.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$4_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$4, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Win32ShellFolder2$4, $assertionsDisabled)},
	{}
};

$MethodInfo _Win32ShellFolder2$4_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;)V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2$4::*)($Win32ShellFolder2*)>(&Win32ShellFolder2$4::init$))},
	{"call", "()Ljava/lang/Long;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$4_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getIShellFolder",
	"()J"
};

$InnerClassInfo _Win32ShellFolder2$4_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$4",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$4_FieldInfo_,
	_Win32ShellFolder2$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Long;>;",
	&_Win32ShellFolder2$4_EnclosingMethodInfo_,
	_Win32ShellFolder2$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$4($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$4));
}

bool Win32ShellFolder2$4::$assertionsDisabled = false;

void Win32ShellFolder2$4::init$($Win32ShellFolder2* this$0) {
	$set(this, this$0, this$0);
}

$Object* Win32ShellFolder2$4::call() {
	$useLocalCurrentObjectStackCache();
	if (!Win32ShellFolder2$4::$assertionsDisabled && !(this->this$0->isDirectory())) {
		$throwNew($AssertionError);
	}
	if (!Win32ShellFolder2$4::$assertionsDisabled && !(this->this$0->parent != nullptr)) {
		$throwNew($AssertionError);
	}
	int64_t parentIShellFolder = this->this$0->getParentIShellFolder();
	if (parentIShellFolder == 0) {
		$throwNew($InternalError, $$str({"Parent IShellFolder was null for "_s, $(this->this$0->getAbsolutePath())}));
	}
	int64_t pIShellFolder = $Win32ShellFolder2::bindToObject(parentIShellFolder, $nc(this->this$0->disposer)->relativePIDL);
	if (pIShellFolder == 0) {
		$throwNew($InternalError, $$str({"Unable to bind "_s, $(this->this$0->getAbsolutePath()), " to parent"_s}));
	}
	return $of($Long::valueOf(pIShellFolder));
}

void clinit$Win32ShellFolder2$4($Class* class$) {
	$load($Win32ShellFolder2);
	Win32ShellFolder2$4::$assertionsDisabled = !$Win32ShellFolder2::class$->desiredAssertionStatus();
}

Win32ShellFolder2$4::Win32ShellFolder2$4() {
}

$Class* Win32ShellFolder2$4::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$4, name, initialize, &_Win32ShellFolder2$4_ClassInfo_, clinit$Win32ShellFolder2$4, allocate$Win32ShellFolder2$4);
	return class$;
}

$Class* Win32ShellFolder2$4::class$ = nullptr;

		} // shell
	} // awt
} // sun