#include <bug4708809$3$1.h>

#include <bug4708809$3.h>
#include <bug4708809.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug4708809 = ::bug4708809;
using $bug4708809$3 = ::bug4708809$3;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug4708809$3$1_FieldInfo_[] = {
	{"this$0", "Lbug4708809$3;", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$3$1, this$0)},
	{"val$oldValue", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$3$1, val$oldValue)},
	{}
};

$MethodInfo _bug4708809$3$1_MethodInfo_[] = {
	{"<init>", "(Lbug4708809$3;I)V", "()V", 0, $method(static_cast<void(bug4708809$3$1::*)($bug4708809$3*,int32_t)>(&bug4708809$3$1::init$))},
	{"adjustmentValueChanged", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4708809$3$1_EnclosingMethodInfo_ = {
	"bug4708809$3",
	"run",
	"()V"
};

$InnerClassInfo _bug4708809$3$1_InnerClassesInfo_[] = {
	{"bug4708809$3", nullptr, nullptr, 0},
	{"bug4708809$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4708809$3$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4708809$3$1",
	"java.lang.Object",
	"java.awt.event.AdjustmentListener",
	_bug4708809$3$1_FieldInfo_,
	_bug4708809$3$1_MethodInfo_,
	nullptr,
	&_bug4708809$3$1_EnclosingMethodInfo_,
	_bug4708809$3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4708809"
};

$Object* allocate$bug4708809$3$1($Class* clazz) {
	return $of($alloc(bug4708809$3$1));
}

void bug4708809$3$1::init$($bug4708809$3* this$0, int32_t val$oldValue) {
	$set(this, this$0, this$0);
	this->val$oldValue = val$oldValue;
}

void bug4708809$3$1::adjustmentValueChanged($AdjustmentEvent* e) {
	if ($nc(e)->getValue() >= this->val$oldValue) {
		$init($bug4708809);
		$bug4708809::passed = false;
	}
	$init($bug4708809);
	$bug4708809::do_test = true;
}

bug4708809$3$1::bug4708809$3$1() {
}

$Class* bug4708809$3$1::load$($String* name, bool initialize) {
	$loadClass(bug4708809$3$1, name, initialize, &_bug4708809$3$1_ClassInfo_, allocate$bug4708809$3$1);
	return class$;
}

$Class* bug4708809$3$1::class$ = nullptr;