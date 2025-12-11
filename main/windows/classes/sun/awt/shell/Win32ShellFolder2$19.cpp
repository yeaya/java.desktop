#include <sun/awt/shell/Win32ShellFolder2$19.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <sun/awt/shell/Win32ShellFolder2$KnownFolderDefinition.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $Win32ShellFolder2$KnownFolderDefinitionArray = $Array<::sun::awt::shell::Win32ShellFolder2$KnownFolderDefinition>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$KnownFolderDefinition = ::sun::awt::shell::Win32ShellFolder2$KnownFolderDefinition;

namespace sun {
	namespace awt {
		namespace shell {

$MethodInfo _Win32ShellFolder2$19_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2$19::*)()>(&Win32ShellFolder2$19::init$))},
	{"call", "()Ljava/util/List;", "()Ljava/util/List<Lsun/awt/shell/Win32ShellFolder2$KnownFolderDefinition;>;", $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$19_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getLibraries",
	"()Ljava/util/List;"
};

$InnerClassInfo _Win32ShellFolder2$19_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$19", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$KnownFolderDefinition", "sun.awt.shell.Win32ShellFolder2", "KnownFolderDefinition", $STATIC | $FINAL},
	{}
};

$ClassInfo _Win32ShellFolder2$19_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$19",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	nullptr,
	_Win32ShellFolder2$19_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/util/List<Lsun/awt/shell/Win32ShellFolder2$KnownFolderDefinition;>;>;",
	&_Win32ShellFolder2$19_EnclosingMethodInfo_,
	_Win32ShellFolder2$19_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$19($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$19));
}

void Win32ShellFolder2$19::init$() {
}

$Object* Win32ShellFolder2$19::call() {
	$useLocalCurrentObjectStackCache();
	$var($Win32ShellFolder2$KnownFolderDefinitionArray, all, $Win32ShellFolder2::loadKnownFolders());
	$var($List, folders, $new($ArrayList));
	if (all != nullptr) {
		{
			$var($Win32ShellFolder2$KnownFolderDefinitionArray, arr$, all);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Win32ShellFolder2$KnownFolderDefinition, kf, arr$->get(i$));
				{
					if ($nc(kf)->relativePath == nullptr || $nc(kf)->parsingName == nullptr || $nc(kf)->saveLocation == nullptr) {
						continue;
					}
					folders->add(kf);
				}
			}
		}
	}
	return $of(folders);
}

Win32ShellFolder2$19::Win32ShellFolder2$19() {
}

$Class* Win32ShellFolder2$19::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$19, name, initialize, &_Win32ShellFolder2$19_ClassInfo_, allocate$Win32ShellFolder2$19);
	return class$;
}

$Class* Win32ShellFolder2$19::class$ = nullptr;

		} // shell
	} // awt
} // sun