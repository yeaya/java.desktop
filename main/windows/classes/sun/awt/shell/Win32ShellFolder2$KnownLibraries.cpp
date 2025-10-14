#include <sun/awt/shell/Win32ShellFolder2$KnownLibraries.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$KnownLibraries_FieldInfo_[] = {
	{"INSTANCE", "Ljava/util/List;", "Ljava/util/List<Lsun/awt/shell/Win32ShellFolder2$KnownFolderDefinition;>;", $STATIC | $FINAL, $staticField(Win32ShellFolder2$KnownLibraries, INSTANCE)},
	{}
};

$MethodInfo _Win32ShellFolder2$KnownLibraries_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2$KnownLibraries::*)()>(&Win32ShellFolder2$KnownLibraries::init$))},
	{}
};

$InnerClassInfo _Win32ShellFolder2$KnownLibraries_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$KnownLibraries", "sun.awt.shell.Win32ShellFolder2", "KnownLibraries", $STATIC | $FINAL},
	{}
};

$ClassInfo _Win32ShellFolder2$KnownLibraries_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$KnownLibraries",
	"java.lang.Object",
	nullptr,
	_Win32ShellFolder2$KnownLibraries_FieldInfo_,
	_Win32ShellFolder2$KnownLibraries_MethodInfo_,
	nullptr,
	nullptr,
	_Win32ShellFolder2$KnownLibraries_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$KnownLibraries($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$KnownLibraries));
}

$List* Win32ShellFolder2$KnownLibraries::INSTANCE = nullptr;

void Win32ShellFolder2$KnownLibraries::init$() {
}

void clinit$Win32ShellFolder2$KnownLibraries($Class* class$) {
	$assignStatic(Win32ShellFolder2$KnownLibraries::INSTANCE, $Win32ShellFolder2::getLibraries());
}

Win32ShellFolder2$KnownLibraries::Win32ShellFolder2$KnownLibraries() {
}

$Class* Win32ShellFolder2$KnownLibraries::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$KnownLibraries, name, initialize, &_Win32ShellFolder2$KnownLibraries_ClassInfo_, clinit$Win32ShellFolder2$KnownLibraries, allocate$Win32ShellFolder2$KnownLibraries);
	return class$;
}

$Class* Win32ShellFolder2$KnownLibraries::class$ = nullptr;

		} // shell
	} // awt
} // sun