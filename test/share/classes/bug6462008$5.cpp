#include <bug6462008$5.h>

#include <bug6462008.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

$FieldInfo _bug6462008$5_FieldInfo_[] = {
	{"val$selectionMode", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$5, val$selectionMode)},
	{}
};

$MethodInfo _bug6462008$5_MethodInfo_[] = {
	{"<init>", "(I)V", "()V", 0, $method(static_cast<void(bug6462008$5::*)(int32_t)>(&bug6462008$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6462008$5_EnclosingMethodInfo_ = {
	"bug6462008",
	"setSelectionMode",
	"(I)V"
};

$InnerClassInfo _bug6462008$5_InnerClassesInfo_[] = {
	{"bug6462008$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6462008$5_ClassInfo_ = {
	$ACC_SUPER,
	"bug6462008$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6462008$5_FieldInfo_,
	_bug6462008$5_MethodInfo_,
	nullptr,
	&_bug6462008$5_EnclosingMethodInfo_,
	_bug6462008$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6462008"
};

$Object* allocate$bug6462008$5($Class* clazz) {
	return $of($alloc(bug6462008$5));
}

void bug6462008$5::init$(int32_t val$selectionMode) {
	this->val$selectionMode = val$selectionMode;
}

void bug6462008$5::run() {
	$init($bug6462008);
	$nc($($nc($bug6462008::list)->getSelectionModel()))->setSelectionMode(this->val$selectionMode);
	$bug6462008::setAnchorLeadNonThreadSafe();
}

bug6462008$5::bug6462008$5() {
}

$Class* bug6462008$5::load$($String* name, bool initialize) {
	$loadClass(bug6462008$5, name, initialize, &_bug6462008$5_ClassInfo_, allocate$bug6462008$5);
	return class$;
}

$Class* bug6462008$5::class$ = nullptr;