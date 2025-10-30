#include <sun/awt/shell/ShellFolder$2.h>

#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

#undef FILE_COMPARATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _ShellFolder$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/ShellFolder;", nullptr, $FINAL | $SYNTHETIC, $field(ShellFolder$2, this$0)},
	{"val$files", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(ShellFolder$2, val$files)},
	{}
};

$MethodInfo _ShellFolder$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/ShellFolder;Ljava/util/List;)V", "()V", 0, $method(static_cast<void(ShellFolder$2::*)($ShellFolder*,$List*)>(&ShellFolder$2::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ShellFolder$2_EnclosingMethodInfo_ = {
	"sun.awt.shell.ShellFolder",
	"sortChildren",
	"(Ljava/util/List;)V"
};

$InnerClassInfo _ShellFolder$2_InnerClassesInfo_[] = {
	{"sun.awt.shell.ShellFolder$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShellFolder$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.ShellFolder$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_ShellFolder$2_FieldInfo_,
	_ShellFolder$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_ShellFolder$2_EnclosingMethodInfo_,
	_ShellFolder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.ShellFolder"
};

$Object* allocate$ShellFolder$2($Class* clazz) {
	return $of($alloc(ShellFolder$2));
}

void ShellFolder$2::init$($ShellFolder* this$0, $List* val$files) {
	$set(this, this$0, this$0);
	$set(this, val$files, val$files);
}

$Object* ShellFolder$2::call() {
	$init($ShellFolder);
	$Collections::sort(this->val$files, $ShellFolder::FILE_COMPARATOR);
	return $of(nullptr);
}

ShellFolder$2::ShellFolder$2() {
}

$Class* ShellFolder$2::load$($String* name, bool initialize) {
	$loadClass(ShellFolder$2, name, initialize, &_ShellFolder$2_ClassInfo_, allocate$ShellFolder$2);
	return class$;
}

$Class* ShellFolder$2::class$ = nullptr;

		} // shell
	} // awt
} // sun