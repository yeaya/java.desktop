#include <sun/awt/shell/Win32ShellFolder2$14.h>

#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$14_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$14, this$0)},
	{"val$absolutePIDL", "J", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$14, val$absolutePIDL)},
	{}
};

$MethodInfo _Win32ShellFolder2$14_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;J)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$14::*)($Win32ShellFolder2*,int64_t)>(&Win32ShellFolder2$14::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$14_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getFolderType",
	"()Ljava/lang/String;"
};

$InnerClassInfo _Win32ShellFolder2$14_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$14", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$14_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$14",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$14_FieldInfo_,
	_Win32ShellFolder2$14_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_Win32ShellFolder2$14_EnclosingMethodInfo_,
	_Win32ShellFolder2$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$14($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$14));
}

void Win32ShellFolder2$14::init$($Win32ShellFolder2* this$0, int64_t val$absolutePIDL) {
	$set(this, this$0, this$0);
	this->val$absolutePIDL = val$absolutePIDL;
}

$Object* Win32ShellFolder2$14::call() {
	return $of($Win32ShellFolder2::getFolderType(this->val$absolutePIDL));
}

Win32ShellFolder2$14::Win32ShellFolder2$14() {
}

$Class* Win32ShellFolder2$14::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$14, name, initialize, &_Win32ShellFolder2$14_ClassInfo_, allocate$Win32ShellFolder2$14);
	return class$;
}

$Class* Win32ShellFolder2$14::class$ = nullptr;

		} // shell
	} // awt
} // sun