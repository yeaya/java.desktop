#include <sun/awt/shell/Win32ShellFolder2$10.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Win32ShellFolder2$10_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$10, this$0)},
	{"val$filePath", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$10, val$filePath)},
	{}
};

$MethodInfo _Win32ShellFolder2$10_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$10::*)($Win32ShellFolder2*,$String*)>(&Win32ShellFolder2$10::init$))},
	{"call", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$10_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getChildByPath",
	"(Ljava/lang/String;)Lsun/awt/shell/Win32ShellFolder2;"
};

$InnerClassInfo _Win32ShellFolder2$10_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$10",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$10_FieldInfo_,
	_Win32ShellFolder2$10_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Lsun/awt/shell/Win32ShellFolder2;>;",
	&_Win32ShellFolder2$10_EnclosingMethodInfo_,
	_Win32ShellFolder2$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$10($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$10));
}

void Win32ShellFolder2$10::init$($Win32ShellFolder2* this$0, $String* val$filePath) {
	$set(this, this$0, this$0);
	$set(this, val$filePath, val$filePath);
}

$Object* Win32ShellFolder2$10::call() {
	$useLocalCurrentObjectStackCache();
	int64_t pIShellFolder = this->this$0->getIShellFolder();
	int64_t pEnumObjects = this->this$0->getEnumObjects(true);
	$var($Win32ShellFolder2, child, nullptr);
	int64_t childPIDL = 0;
	while ((childPIDL = this->this$0->getNextChild(pEnumObjects)) != 0) {
		if ($Win32ShellFolder2::getAttributes0(pIShellFolder, childPIDL, 0x40000000) != 0) {
			$var($String, path, $Win32ShellFolder2::getFileSystemPath(pIShellFolder, childPIDL));
			if (this->this$0->isLib) {
				$assign(path, $Win32ShellFolder2::resolveLibrary(path));
			}
			if (path != nullptr && path->equalsIgnoreCase(this->val$filePath)) {
				int64_t childIShellFolder = $Win32ShellFolder2::bindToObject(pIShellFolder, childPIDL);
				$assign(child, $new($Win32ShellFolder2, this->this$0, childIShellFolder, childPIDL, path, this->this$0->isLib));
				break;
			}
		}
		$Win32ShellFolder2::releasePIDL(childPIDL);
	}
	this->this$0->releaseEnumObjects(pEnumObjects);
	return $of(child);
}

Win32ShellFolder2$10::Win32ShellFolder2$10() {
}

$Class* Win32ShellFolder2$10::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$10, name, initialize, &_Win32ShellFolder2$10_ClassInfo_, allocate$Win32ShellFolder2$10);
	return class$;
}

$Class* Win32ShellFolder2$10::class$ = nullptr;

		} // shell
	} // awt
} // sun