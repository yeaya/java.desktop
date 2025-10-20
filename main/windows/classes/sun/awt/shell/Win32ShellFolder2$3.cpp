#include <sun/awt/shell/Win32ShellFolder2$3.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
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
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$3, this$0)},
	{}
};

$MethodInfo _Win32ShellFolder2$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;)V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2$3::*)($Win32ShellFolder2*)>(&Win32ShellFolder2$3::init$))},
	{"call", "()Ljava/io/File;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$3_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"writeReplace",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _Win32ShellFolder2$3_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$3",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$3_FieldInfo_,
	_Win32ShellFolder2$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/io/File;>;",
	&_Win32ShellFolder2$3_EnclosingMethodInfo_,
	_Win32ShellFolder2$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$3($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$3));
}

void Win32ShellFolder2$3::init$($Win32ShellFolder2* this$0) {
	$set(this, this$0, this$0);
}

$Object* Win32ShellFolder2$3::call() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->isFileSystem()) {
		return $of($new($File, $(this->this$0->getPath())));
	} else {
		$var($Win32ShellFolder2, drives, $Win32ShellFolderManager2::getDrives());
		if (drives != nullptr) {
			$var($FileArray, driveRoots, drives->listFiles());
			if (driveRoots != nullptr) {
				for (int32_t i = 0; i < driveRoots->length; ++i) {
					if ($instanceOf($Win32ShellFolder2, driveRoots->get(i))) {
						$var($Win32ShellFolder2, sf, $cast($Win32ShellFolder2, driveRoots->get(i)));
						bool var$0 = $nc(sf)->isFileSystem();
						if (var$0 && !sf->hasAttribute(0x02000000)) {
							return $of($new($File, $(sf->getPath())));
						}
					}
				}
			}
		}
		return $of($new($File, "C:\\"_s));
	}
}

Win32ShellFolder2$3::Win32ShellFolder2$3() {
}

$Class* Win32ShellFolder2$3::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$3, name, initialize, &_Win32ShellFolder2$3_ClassInfo_, allocate$Win32ShellFolder2$3);
	return class$;
}

$Class* Win32ShellFolder2$3::class$ = nullptr;

		} // shell
	} // awt
} // sun