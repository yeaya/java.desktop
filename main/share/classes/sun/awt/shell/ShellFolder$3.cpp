#include <sun/awt/shell/ShellFolder$3.h>

#include <java/lang/Comparable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace shell {

$MethodInfo _ShellFolder$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ShellFolder$3::*)()>(&ShellFolder$3::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ShellFolder$3_EnclosingMethodInfo_ = {
	"sun.awt.shell.ShellFolder",
	nullptr,
	nullptr
};

$InnerClassInfo _ShellFolder$3_InnerClassesInfo_[] = {
	{"sun.awt.shell.ShellFolder$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShellFolder$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.ShellFolder$3",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ShellFolder$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Object;>;",
	&_ShellFolder$3_EnclosingMethodInfo_,
	_ShellFolder$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.ShellFolder"
};

$Object* allocate$ShellFolder$3($Class* clazz) {
	return $of($alloc(ShellFolder$3));
}

void ShellFolder$3::init$() {
}

int32_t ShellFolder$3::compare(Object$* o1, Object$* o2) {
	int32_t gt = 0;
	if (o1 == nullptr && o2 == nullptr) {
		gt = 0;
	} else if (o1 != nullptr && o2 == nullptr) {
		gt = 1;
	} else if (o1 == nullptr && o2 != nullptr) {
		gt = -1;
	} else if ($instanceOf($Comparable, o1)) {
		$var($Comparable, o, $cast($Comparable, o1));
		gt = o->compareTo(o2);
	} else {
		gt = 0;
	}
	return gt;
}

ShellFolder$3::ShellFolder$3() {
}

$Class* ShellFolder$3::load$($String* name, bool initialize) {
	$loadClass(ShellFolder$3, name, initialize, &_ShellFolder$3_ClassInfo_, allocate$ShellFolder$3);
	return class$;
}

$Class* ShellFolder$3::class$ = nullptr;

		} // shell
	} // awt
} // sun