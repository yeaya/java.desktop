#include <bug6263446$5.h>

#include <bug6263446.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <jcpp.h>

using $bug6263446 = ::bug6263446;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CellEditor = ::javax::swing::CellEditor;
using $JTree = ::javax::swing::JTree;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;

$MethodInfo _bug6263446$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6263446$5::*)()>(&bug6263446$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6263446$5_EnclosingMethodInfo_ = {
	"bug6263446",
	"cancelCellEditing",
	"()V"
};

$InnerClassInfo _bug6263446$5_InnerClassesInfo_[] = {
	{"bug6263446$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446$5_ClassInfo_ = {
	$ACC_SUPER,
	"bug6263446$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6263446$5_MethodInfo_,
	nullptr,
	&_bug6263446$5_EnclosingMethodInfo_,
	_bug6263446$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6263446"
};

$Object* allocate$bug6263446$5($Class* clazz) {
	return $of($alloc(bug6263446$5));
}

void bug6263446$5::init$() {
}

void bug6263446$5::run() {
	$init($bug6263446);
	$nc($($nc($bug6263446::tree)->getCellEditor()))->cancelCellEditing();
}

bug6263446$5::bug6263446$5() {
}

$Class* bug6263446$5::load$($String* name, bool initialize) {
	$loadClass(bug6263446$5, name, initialize, &_bug6263446$5_ClassInfo_, allocate$bug6263446$5);
	return class$;
}

$Class* bug6263446$5::class$ = nullptr;