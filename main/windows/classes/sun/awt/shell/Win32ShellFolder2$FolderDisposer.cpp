#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>

#include <java/util/concurrent/Callable.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer$1.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $Win32ShellFolder2$FolderDisposer$1 = ::sun::awt::shell::Win32ShellFolder2$FolderDisposer$1;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$FolderDisposer_FieldInfo_[] = {
	{"absolutePIDL", "J", nullptr, 0, $field(Win32ShellFolder2$FolderDisposer, absolutePIDL)},
	{"pIShellFolder", "J", nullptr, 0, $field(Win32ShellFolder2$FolderDisposer, pIShellFolder)},
	{"relativePIDL", "J", nullptr, 0, $field(Win32ShellFolder2$FolderDisposer, relativePIDL)},
	{"disposed", "Z", nullptr, 0, $field(Win32ShellFolder2$FolderDisposer, disposed)},
	{}
};

$MethodInfo _Win32ShellFolder2$FolderDisposer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2$FolderDisposer::*)()>(&Win32ShellFolder2$FolderDisposer::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Win32ShellFolder2$FolderDisposer_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$FolderDisposer", "sun.awt.shell.Win32ShellFolder2", "FolderDisposer", $STATIC},
	{"sun.awt.shell.Win32ShellFolder2$FolderDisposer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$FolderDisposer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$FolderDisposer",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_Win32ShellFolder2$FolderDisposer_FieldInfo_,
	_Win32ShellFolder2$FolderDisposer_MethodInfo_,
	nullptr,
	nullptr,
	_Win32ShellFolder2$FolderDisposer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$FolderDisposer($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$FolderDisposer));
}

void Win32ShellFolder2$FolderDisposer::init$() {
}

void Win32ShellFolder2$FolderDisposer::dispose() {
	if (this->disposed) {
		return;
	}
	$ShellFolder::invoke($$new($Win32ShellFolder2$FolderDisposer$1, this));
	this->disposed = true;
}

Win32ShellFolder2$FolderDisposer::Win32ShellFolder2$FolderDisposer() {
}

$Class* Win32ShellFolder2$FolderDisposer::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$FolderDisposer, name, initialize, &_Win32ShellFolder2$FolderDisposer_ClassInfo_, allocate$Win32ShellFolder2$FolderDisposer);
	return class$;
}

$Class* Win32ShellFolder2$FolderDisposer::class$ = nullptr;

		} // shell
	} // awt
} // sun