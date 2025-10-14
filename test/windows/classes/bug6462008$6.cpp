#include <bug6462008$6.h>

#include <bug6462008.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JList = ::javax::swing::JList;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

$FieldInfo _bug6462008$6_FieldInfo_[] = {
	{"val$index1", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$6, val$index1)},
	{"val$index0", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$6, val$index0)},
	{}
};

$MethodInfo _bug6462008$6_MethodInfo_[] = {
	{"<init>", "(II)V", "()V", 0, $method(static_cast<void(bug6462008$6::*)(int32_t,int32_t)>(&bug6462008$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6462008$6_EnclosingMethodInfo_ = {
	"bug6462008",
	"setSelectionInterval",
	"(II)V"
};

$InnerClassInfo _bug6462008$6_InnerClassesInfo_[] = {
	{"bug6462008$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6462008$6_ClassInfo_ = {
	$ACC_SUPER,
	"bug6462008$6",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6462008$6_FieldInfo_,
	_bug6462008$6_MethodInfo_,
	nullptr,
	&_bug6462008$6_EnclosingMethodInfo_,
	_bug6462008$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6462008"
};

$Object* allocate$bug6462008$6($Class* clazz) {
	return $of($alloc(bug6462008$6));
}

void bug6462008$6::init$(int32_t val$index0, int32_t val$index1) {
	this->val$index0 = val$index0;
	this->val$index1 = val$index1;
}

void bug6462008$6::run() {
	$init($bug6462008);
	$nc($($nc($bug6462008::list)->getSelectionModel()))->setSelectionInterval(this->val$index0, this->val$index1);
	$bug6462008::setAnchorLeadNonThreadSafe();
}

bug6462008$6::bug6462008$6() {
}

$Class* bug6462008$6::load$($String* name, bool initialize) {
	$loadClass(bug6462008$6, name, initialize, &_bug6462008$6_ClassInfo_, allocate$bug6462008$6);
	return class$;
}

$Class* bug6462008$6::class$ = nullptr;