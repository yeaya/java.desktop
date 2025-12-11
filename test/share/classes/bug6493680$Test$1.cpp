#include <bug6493680$Test$1.h>

#include <bug6493680$Test.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $bug6493680$Test = ::bug6493680$Test;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _bug6493680$Test$1_FieldInfo_[] = {
	{"this$0", "Lbug6493680$Test;", nullptr, $FINAL | $SYNTHETIC, $field(bug6493680$Test$1, this$0)},
	{}
};

$MethodInfo _bug6493680$Test$1_MethodInfo_[] = {
	{"<init>", "(Lbug6493680$Test;)V", nullptr, 0, $method(static_cast<void(bug6493680$Test$1::*)($bug6493680$Test*)>(&bug6493680$Test$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6493680$Test$1_EnclosingMethodInfo_ = {
	"bug6493680$Test",
	"test",
	"()Z"
};

$InnerClassInfo _bug6493680$Test$1_InnerClassesInfo_[] = {
	{"bug6493680$Test", "bug6493680", "Test", $PRIVATE | $STATIC},
	{"bug6493680$Test$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6493680$Test$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6493680$Test$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_bug6493680$Test$1_FieldInfo_,
	_bug6493680$Test$1_MethodInfo_,
	nullptr,
	&_bug6493680$Test$1_EnclosingMethodInfo_,
	_bug6493680$Test$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6493680"
};

$Object* allocate$bug6493680$Test$1($Class* clazz) {
	return $of($alloc(bug6493680$Test$1));
}

void bug6493680$Test$1::init$($bug6493680$Test* this$0) {
	$set(this, this$0, this$0);
}

void bug6493680$Test$1::propertyChange($PropertyChangeEvent* evt) {
	if ("progress"_s == $nc(evt)->getPropertyName()) {
		$nc(this->this$0->lastProgressValue)->set($nc(($cast($Integer, $(evt->getNewValue()))))->intValue());
	}
}

bug6493680$Test$1::bug6493680$Test$1() {
}

$Class* bug6493680$Test$1::load$($String* name, bool initialize) {
	$loadClass(bug6493680$Test$1, name, initialize, &_bug6493680$Test$1_ClassInfo_, allocate$bug6493680$Test$1);
	return class$;
}

$Class* bug6493680$Test$1::class$ = nullptr;