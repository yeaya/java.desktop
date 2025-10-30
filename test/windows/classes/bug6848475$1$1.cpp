#include <bug6848475$1$1.h>

#include <bug6848475$1.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <jcpp.h>

using $bug6848475$1 = ::bug6848475$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;

$FieldInfo _bug6848475$1$1_FieldInfo_[] = {
	{"this$0", "Lbug6848475$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6848475$1$1, this$0)},
	{}
};

$MethodInfo _bug6848475$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug6848475$1;)V", nullptr, 0, $method(static_cast<void(bug6848475$1$1::*)($bug6848475$1*)>(&bug6848475$1$1::init$))},
	{"setValue", "(I)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6848475$1$1_EnclosingMethodInfo_ = {
	"bug6848475$1",
	"run",
	"()V"
};

$InnerClassInfo _bug6848475$1$1_InnerClassesInfo_[] = {
	{"bug6848475$1", nullptr, nullptr, 0},
	{"bug6848475$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6848475$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6848475$1$1",
	"javax.swing.DefaultBoundedRangeModel",
	nullptr,
	_bug6848475$1$1_FieldInfo_,
	_bug6848475$1$1_MethodInfo_,
	nullptr,
	&_bug6848475$1$1_EnclosingMethodInfo_,
	_bug6848475$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6848475"
};

$Object* allocate$bug6848475$1$1($Class* clazz) {
	return $of($alloc(bug6848475$1$1));
}

void bug6848475$1$1::init$($bug6848475$1* this$0) {
	$set(this, this$0, this$0);
	$DefaultBoundedRangeModel::init$();
}

void bug6848475$1$1::setValue(int32_t n) {
}

bug6848475$1$1::bug6848475$1$1() {
}

$Class* bug6848475$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6848475$1$1, name, initialize, &_bug6848475$1$1_ClassInfo_, allocate$bug6848475$1$1);
	return class$;
}

$Class* bug6848475$1$1::class$ = nullptr;