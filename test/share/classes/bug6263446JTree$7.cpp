#include <bug6263446JTree$7.h>

#include <bug6263446JTree.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $bug6263446JTree = ::bug6263446JTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTree = ::javax::swing::JTree;

$FieldInfo _bug6263446JTree$7_FieldInfo_[] = {
	{"val$editing", "Z", nullptr, $FINAL | $SYNTHETIC, $field(bug6263446JTree$7, val$editing)},
	{}
};

$MethodInfo _bug6263446JTree$7_MethodInfo_[] = {
	{"<init>", "(Z)V", "()V", 0, $method(static_cast<void(bug6263446JTree$7::*)(bool)>(&bug6263446JTree$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6263446JTree$7_EnclosingMethodInfo_ = {
	"bug6263446JTree",
	"assertEditingNoTreeLock",
	"(Z)V"
};

$InnerClassInfo _bug6263446JTree$7_InnerClassesInfo_[] = {
	{"bug6263446JTree$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446JTree$7_ClassInfo_ = {
	$ACC_SUPER,
	"bug6263446JTree$7",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6263446JTree$7_FieldInfo_,
	_bug6263446JTree$7_MethodInfo_,
	nullptr,
	&_bug6263446JTree$7_EnclosingMethodInfo_,
	_bug6263446JTree$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6263446JTree"
};

$Object* allocate$bug6263446JTree$7($Class* clazz) {
	return $of($alloc(bug6263446JTree$7));
}

void bug6263446JTree$7::init$(bool val$editing) {
	this->val$editing = val$editing;
}

void bug6263446JTree$7::run() {
	$init($bug6263446JTree);
	if (this->val$editing && !$nc($bug6263446JTree::tree)->isEditing()) {
		$throwNew($RuntimeException, "Tree should be editing"_s);
	}
	if (!this->val$editing && $nc($bug6263446JTree::tree)->isEditing()) {
		$throwNew($RuntimeException, "Tree should not be editing"_s);
	}
}

bug6263446JTree$7::bug6263446JTree$7() {
}

$Class* bug6263446JTree$7::load$($String* name, bool initialize) {
	$loadClass(bug6263446JTree$7, name, initialize, &_bug6263446JTree$7_ClassInfo_, allocate$bug6263446JTree$7);
	return class$;
}

$Class* bug6263446JTree$7::class$ = nullptr;