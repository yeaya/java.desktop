#include <bug6263446$4.h>

#include <bug6263446.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $bug6263446 = ::bug6263446;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTree = ::javax::swing::JTree;
using $TreePath = ::javax::swing::tree::TreePath;

$MethodInfo _bug6263446$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6263446$4::*)()>(&bug6263446$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6263446$4_EnclosingMethodInfo_ = {
	"bug6263446",
	"startPathEditing",
	"()V"
};

$InnerClassInfo _bug6263446$4_InnerClassesInfo_[] = {
	{"bug6263446$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug6263446$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6263446$4_MethodInfo_,
	nullptr,
	&_bug6263446$4_EnclosingMethodInfo_,
	_bug6263446$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6263446"
};

$Object* allocate$bug6263446$4($Class* clazz) {
	return $of($alloc(bug6263446$4));
}

void bug6263446$4::init$() {
}

void bug6263446$4::run() {
	$init($bug6263446);
	$nc($bug6263446::tree)->startEditingAtPath($($nc($bug6263446::tree)->getPathForRow(0)));
}

bug6263446$4::bug6263446$4() {
}

$Class* bug6263446$4::load$($String* name, bool initialize) {
	$loadClass(bug6263446$4, name, initialize, &_bug6263446$4_ClassInfo_, allocate$bug6263446$4);
	return class$;
}

$Class* bug6263446$4::class$ = nullptr;