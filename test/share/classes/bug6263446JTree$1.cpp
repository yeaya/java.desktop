#include <bug6263446JTree$1.h>

#include <bug6263446JTree.h>
#include <jcpp.h>

using $bug6263446JTree = ::bug6263446JTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6263446JTree$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6263446JTree$1::*)()>(&bug6263446JTree$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6263446JTree$1_EnclosingMethodInfo_ = {
	"bug6263446JTree",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6263446JTree$1_InnerClassesInfo_[] = {
	{"bug6263446JTree$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446JTree$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6263446JTree$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6263446JTree$1_MethodInfo_,
	nullptr,
	&_bug6263446JTree$1_EnclosingMethodInfo_,
	_bug6263446JTree$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6263446JTree"
};

$Object* allocate$bug6263446JTree$1($Class* clazz) {
	return $of($alloc(bug6263446JTree$1));
}

void bug6263446JTree$1::init$() {
}

void bug6263446JTree$1::run() {
	$bug6263446JTree::createAndShowGUI();
}

bug6263446JTree$1::bug6263446JTree$1() {
}

$Class* bug6263446JTree$1::load$($String* name, bool initialize) {
	$loadClass(bug6263446JTree$1, name, initialize, &_bug6263446JTree$1_ClassInfo_, allocate$bug6263446JTree$1);
	return class$;
}

$Class* bug6263446JTree$1::class$ = nullptr;