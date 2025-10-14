#include <sun/awt/shell/Win32ShellFolderManager2$1.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolderManager2$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolderManager2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$1, this$0)},
	{"val$dir", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$1, val$dir)},
	{}
};

$MethodInfo _Win32ShellFolderManager2$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2;Ljava/io/File;)V", "()V", 0, $method(static_cast<void(Win32ShellFolderManager2$1::*)($Win32ShellFolderManager2*,$File*)>(&Win32ShellFolderManager2$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolderManager2$1_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolderManager2",
	"isComputerNode",
	"(Ljava/io/File;)Z"
};

$InnerClassInfo _Win32ShellFolderManager2$1_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolderManager2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolderManager2$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolderManager2$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Win32ShellFolderManager2$1_FieldInfo_,
	_Win32ShellFolderManager2$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_Win32ShellFolderManager2$1_EnclosingMethodInfo_,
	_Win32ShellFolderManager2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolderManager2"
};

$Object* allocate$Win32ShellFolderManager2$1($Class* clazz) {
	return $of($alloc(Win32ShellFolderManager2$1));
}

void Win32ShellFolderManager2$1::init$($Win32ShellFolderManager2* this$0, $File* val$dir) {
	$set(this, this$0, this$0);
	$set(this, val$dir, val$dir);
}

$Object* Win32ShellFolderManager2$1::run() {
	return $of($nc(this->val$dir)->getAbsolutePath());
}

Win32ShellFolderManager2$1::Win32ShellFolderManager2$1() {
}

$Class* Win32ShellFolderManager2$1::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolderManager2$1, name, initialize, &_Win32ShellFolderManager2$1_ClassInfo_, allocate$Win32ShellFolderManager2$1);
	return class$;
}

$Class* Win32ShellFolderManager2$1::class$ = nullptr;

		} // shell
	} // awt
} // sun