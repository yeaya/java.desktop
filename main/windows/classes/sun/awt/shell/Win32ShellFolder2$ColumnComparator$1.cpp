#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator$1.h>

#include <java/io/File.h>
#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$ColumnComparator = ::sun::awt::shell::Win32ShellFolder2$ColumnComparator;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$ColumnComparator$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2$ColumnComparator;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$ColumnComparator$1, this$0)},
	{"val$o1", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$ColumnComparator$1, val$o1)},
	{"val$o", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$ColumnComparator$1, val$o)},
	{}
};

$MethodInfo _Win32ShellFolder2$ColumnComparator$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2$ColumnComparator;Ljava/io/File;Ljava/io/File;)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$ColumnComparator$1::*)($Win32ShellFolder2$ColumnComparator*,$File*,$File*)>(&Win32ShellFolder2$ColumnComparator$1::init$))},
	{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$ColumnComparator$1_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2$ColumnComparator",
	"compare",
	"(Ljava/io/File;Ljava/io/File;)I"
};

$InnerClassInfo _Win32ShellFolder2$ColumnComparator$1_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$ColumnComparator", "sun.awt.shell.Win32ShellFolder2", "ColumnComparator", $PRIVATE | $STATIC},
	{"sun.awt.shell.Win32ShellFolder2$ColumnComparator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$ColumnComparator$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$ColumnComparator$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$ColumnComparator$1_FieldInfo_,
	_Win32ShellFolder2$ColumnComparator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
	&_Win32ShellFolder2$ColumnComparator$1_EnclosingMethodInfo_,
	_Win32ShellFolder2$ColumnComparator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$ColumnComparator$1($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$ColumnComparator$1));
}

void Win32ShellFolder2$ColumnComparator$1::init$($Win32ShellFolder2$ColumnComparator* this$0, $File* val$o, $File* val$o1) {
	$set(this, this$0, this$0);
	$set(this, val$o, val$o);
	$set(this, val$o1, val$o1);
}

$Object* Win32ShellFolder2$ColumnComparator$1::call() {
	if ($instanceOf($Win32ShellFolder2, this->val$o) && $instanceOf($Win32ShellFolder2, this->val$o1)) {
		int64_t var$0 = $nc(this->this$0->shellFolder)->getIShellFolder();
		int64_t var$1 = $nc(($cast($Win32ShellFolder2, this->val$o)))->getRelativePIDL();
		return $of($Integer::valueOf($Win32ShellFolder2::compareIDsByColumn(var$0, var$1, $nc(($cast($Win32ShellFolder2, this->val$o1)))->getRelativePIDL(), this->this$0->columnIdx)));
	}
	return $of($Integer::valueOf(0));
}

Win32ShellFolder2$ColumnComparator$1::Win32ShellFolder2$ColumnComparator$1() {
}

$Class* Win32ShellFolder2$ColumnComparator$1::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$ColumnComparator$1, name, initialize, &_Win32ShellFolder2$ColumnComparator$1_ClassInfo_, allocate$Win32ShellFolder2$ColumnComparator$1);
	return class$;
}

$Class* Win32ShellFolder2$ColumnComparator$1::class$ = nullptr;

		} // shell
	} // awt
} // sun