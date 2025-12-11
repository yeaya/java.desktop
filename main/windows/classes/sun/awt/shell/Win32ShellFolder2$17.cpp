#include <sun/awt/shell/Win32ShellFolder2$17.h>

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

$FieldInfo _Win32ShellFolder2$17_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$17, this$0)},
	{"val$column", "I", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$17, val$column)},
	{}
};

$MethodInfo _Win32ShellFolder2$17_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;I)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$17::*)($Win32ShellFolder2*,int32_t)>(&Win32ShellFolder2$17::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$17_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getFolderColumnValue",
	"(I)Ljava/lang/Object;"
};

$InnerClassInfo _Win32ShellFolder2$17_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$17", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$17_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$17",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$17_FieldInfo_,
	_Win32ShellFolder2$17_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Object;>;",
	&_Win32ShellFolder2$17_EnclosingMethodInfo_,
	_Win32ShellFolder2$17_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$17($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$17));
}

void Win32ShellFolder2$17::init$($Win32ShellFolder2* this$0, int32_t val$column) {
	$set(this, this$0, this$0);
	this->val$column = val$column;
}

$Object* Win32ShellFolder2$17::call() {
	int64_t var$0 = this->this$0->getParentIShellFolder();
	return $of(this->this$0->doGetColumnValue(var$0, this->this$0->getRelativePIDL(), this->val$column));
}

Win32ShellFolder2$17::Win32ShellFolder2$17() {
}

$Class* Win32ShellFolder2$17::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$17, name, initialize, &_Win32ShellFolder2$17_ClassInfo_, allocate$Win32ShellFolder2$17);
	return class$;
}

$Class* Win32ShellFolder2$17::class$ = nullptr;

		} // shell
	} // awt
} // sun