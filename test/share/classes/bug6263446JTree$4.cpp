#include <bug6263446JTree$4.h>

#include <bug6263446JTree.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $bug6263446JTree = ::bug6263446JTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTree = ::javax::swing::JTree;
using $TreePath = ::javax::swing::tree::TreePath;

$MethodInfo _bug6263446JTree$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6263446JTree$4::*)()>(&bug6263446JTree$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6263446JTree$4_EnclosingMethodInfo_ = {
	"bug6263446JTree",
	"startPathEditing",
	"()V"
};

$InnerClassInfo _bug6263446JTree$4_InnerClassesInfo_[] = {
	{"bug6263446JTree$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446JTree$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug6263446JTree$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6263446JTree$4_MethodInfo_,
	nullptr,
	&_bug6263446JTree$4_EnclosingMethodInfo_,
	_bug6263446JTree$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6263446JTree"
};

$Object* allocate$bug6263446JTree$4($Class* clazz) {
	return $of($alloc(bug6263446JTree$4));
}

void bug6263446JTree$4::init$() {
}

void bug6263446JTree$4::run() {
	$init($bug6263446JTree);
	$nc($bug6263446JTree::tree)->startEditingAtPath($($nc($bug6263446JTree::tree)->getPathForRow(0)));
}

bug6263446JTree$4::bug6263446JTree$4() {
}

$Class* bug6263446JTree$4::load$($String* name, bool initialize) {
	$loadClass(bug6263446JTree$4, name, initialize, &_bug6263446JTree$4_ClassInfo_, allocate$bug6263446JTree$4);
	return class$;
}

$Class* bug6263446JTree$4::class$ = nullptr;