#include <sun/awt/shell/Win32ShellFolder2$KnownFolderDefinition.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$KnownFolderDefinition_FieldInfo_[] = {
	{"guid", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, guid)},
	{"category", "I", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, category)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, name)},
	{"description", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, description)},
	{"parent", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, parent)},
	{"relativePath", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, relativePath)},
	{"parsingName", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, parsingName)},
	{"tooltip", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, tooltip)},
	{"localizedName", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, localizedName)},
	{"icon", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, icon)},
	{"security", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, security)},
	{"attributes", "J", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, attributes)},
	{"defenitionFlags", "I", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, defenitionFlags)},
	{"ftidType", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, ftidType)},
	{"path", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, path)},
	{"saveLocation", "Ljava/lang/String;", nullptr, 0, $field(Win32ShellFolder2$KnownFolderDefinition, saveLocation)},
	{}
};

$MethodInfo _Win32ShellFolder2$KnownFolderDefinition_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2$KnownFolderDefinition::*)()>(&Win32ShellFolder2$KnownFolderDefinition::init$))},
	{}
};

$InnerClassInfo _Win32ShellFolder2$KnownFolderDefinition_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$KnownFolderDefinition", "sun.awt.shell.Win32ShellFolder2", "KnownFolderDefinition", $STATIC | $FINAL},
	{}
};

$ClassInfo _Win32ShellFolder2$KnownFolderDefinition_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$KnownFolderDefinition",
	"java.lang.Object",
	nullptr,
	_Win32ShellFolder2$KnownFolderDefinition_FieldInfo_,
	_Win32ShellFolder2$KnownFolderDefinition_MethodInfo_,
	nullptr,
	nullptr,
	_Win32ShellFolder2$KnownFolderDefinition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$KnownFolderDefinition($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$KnownFolderDefinition));
}

void Win32ShellFolder2$KnownFolderDefinition::init$() {
}

Win32ShellFolder2$KnownFolderDefinition::Win32ShellFolder2$KnownFolderDefinition() {
}

$Class* Win32ShellFolder2$KnownFolderDefinition::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$KnownFolderDefinition, name, initialize, &_Win32ShellFolder2$KnownFolderDefinition_ClassInfo_, allocate$Win32ShellFolder2$KnownFolderDefinition);
	return class$;
}

$Class* Win32ShellFolder2$KnownFolderDefinition::class$ = nullptr;

		} // shell
	} // awt
} // sun