#include <sun/awt/shell/ShellFolder$1.h>

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
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

#undef FILE_COMPARATOR

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _ShellFolder$1_FieldInfo_[] = {
	{"val$files", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(ShellFolder$1, val$files)},
	{}
};

$MethodInfo _ShellFolder$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "()V", 0, $method(static_cast<void(ShellFolder$1::*)($List*)>(&ShellFolder$1::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ShellFolder$1_EnclosingMethodInfo_ = {
	"sun.awt.shell.ShellFolder",
	"sort",
	"(Ljava/util/List;)V"
};

$InnerClassInfo _ShellFolder$1_InnerClassesInfo_[] = {
	{"sun.awt.shell.ShellFolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShellFolder$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.ShellFolder$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_ShellFolder$1_FieldInfo_,
	_ShellFolder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_ShellFolder$1_EnclosingMethodInfo_,
	_ShellFolder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.ShellFolder"
};

$Object* allocate$ShellFolder$1($Class* clazz) {
	return $of($alloc(ShellFolder$1));
}

void ShellFolder$1::init$($List* val$files) {
	$set(this, val$files, val$files);
}

$Object* ShellFolder$1::call() {
	$var($File, commonParent, nullptr);
	{
		$var($Iterator, i$, $nc(this->val$files)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, file, $cast($File, i$->next()));
			{
				$var($File, parent, $nc(file)->getParentFile());
				if (parent == nullptr || !($instanceOf($ShellFolder, file))) {
					$assign(commonParent, nullptr);
					break;
				}
				if (commonParent == nullptr) {
					$assign(commonParent, parent);
				} else if (commonParent != parent && !commonParent->equals(parent)) {
					$assign(commonParent, nullptr);
					break;
				}
			}
		}
	}
	if ($instanceOf($ShellFolder, commonParent)) {
		$nc(($cast($ShellFolder, commonParent)))->sortChildren(this->val$files);
	} else {
		$init($ShellFolder);
		$Collections::sort(this->val$files, $ShellFolder::FILE_COMPARATOR);
	}
	return $of(nullptr);
}

ShellFolder$1::ShellFolder$1() {
}

$Class* ShellFolder$1::load$($String* name, bool initialize) {
	$loadClass(ShellFolder$1, name, initialize, &_ShellFolder$1_ClassInfo_, allocate$ShellFolder$1);
	return class$;
}

$Class* ShellFolder$1::class$ = nullptr;

		} // shell
	} // awt
} // sun