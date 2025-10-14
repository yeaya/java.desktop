#include <sun/awt/shell/Win32ShellFolder2$9.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $ShellFolderArray = $Array<::sun::awt::shell::ShellFolder>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$FolderDisposer = ::sun::awt::shell::Win32ShellFolder2$FolderDisposer;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$9_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$9, this$0)},
	{"val$includeHiddenFiles", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$9, val$includeHiddenFiles)},
	{}
};

$MethodInfo _Win32ShellFolder2$9_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Z)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$9::*)($Win32ShellFolder2*,bool)>(&Win32ShellFolder2$9::init$))},
	{"call", "()[Ljava/io/File;", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$9_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"listFiles",
	"(Z)[Ljava/io/File;"
};

$InnerClassInfo _Win32ShellFolder2$9_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$9",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$9_FieldInfo_,
	_Win32ShellFolder2$9_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<[Ljava/io/File;>;",
	&_Win32ShellFolder2$9_EnclosingMethodInfo_,
	_Win32ShellFolder2$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$9($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$9));
}

void Win32ShellFolder2$9::init$($Win32ShellFolder2* this$0, bool val$includeHiddenFiles) {
	$set(this, this$0, this$0);
	this->val$includeHiddenFiles = val$includeHiddenFiles;
}

$Object* Win32ShellFolder2$9::call() {
	if (!this->this$0->isDirectory()) {
		return $of(nullptr);
	}
	bool var$0 = this->this$0->isLink();
	if (var$0 && !this->this$0->hasAttribute(0x20000000)) {
		return $of($new($FileArray, 0));
	}
	$var($Win32ShellFolder2, desktop, $Win32ShellFolderManager2::getDesktop());
	$var($Win32ShellFolder2, personal, $Win32ShellFolderManager2::getPersonal());
	int64_t pIShellFolder = this->this$0->getIShellFolder();
	$var($ArrayList, list, $new($ArrayList));
	int64_t pEnumObjects = this->this$0->getEnumObjects(this->val$includeHiddenFiles);
	if (pEnumObjects != 0) {
		{
			$var($Throwable, var$1, nullptr);
			try {
				int64_t childPIDL = 0;
				int32_t testedAttrs = 0x40000000 | 0x10000000;
				do {
					childPIDL = this->this$0->getNextChild(pEnumObjects);
					bool releasePIDL = true;
					if (childPIDL != 0 && ((int32_t)($Win32ShellFolder2::getAttributes0(pIShellFolder, childPIDL, testedAttrs) & (uint32_t)testedAttrs)) != 0) {
						$var($Win32ShellFolder2, childFolder, nullptr);
						bool var$2 = this->this$0->equals(desktop) && personal != nullptr;
						if (var$2 && $Win32ShellFolder2::pidlsEqual(pIShellFolder, childPIDL, $nc(personal->disposer)->relativePIDL)) {
							$assign(childFolder, personal);
						} else {
							$assign(childFolder, $Win32ShellFolder2::createShellFolder(this->this$0, childPIDL));
							releasePIDL = false;
						}
						list->add(childFolder);
					}
					if (releasePIDL) {
						$Win32ShellFolder2::releasePIDL(childPIDL);
					}
				} while (childPIDL != 0 && !$($Thread::currentThread())->isInterrupted());
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				this->this$0->releaseEnumObjects(pEnumObjects);
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
	return $of($($Thread::currentThread())->isInterrupted() ? $new($FileArray, 0) : $fcast($FileArray, list->toArray($$new($ShellFolderArray, list->size()))));
}

Win32ShellFolder2$9::Win32ShellFolder2$9() {
}

$Class* Win32ShellFolder2$9::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$9, name, initialize, &_Win32ShellFolder2$9_ClassInfo_, allocate$Win32ShellFolder2$9);
	return class$;
}

$Class* Win32ShellFolder2$9::class$ = nullptr;

		} // shell
	} // awt
} // sun