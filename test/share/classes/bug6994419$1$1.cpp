#include <bug6994419$1$1.h>

#include <bug6994419$1.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $bug6994419$1 = ::bug6994419$1;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _bug6994419$1$1_FieldInfo_[] = {
	{"this$0", "Lbug6994419$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6994419$1$1, this$0)},
	{}
};

$MethodInfo _bug6994419$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug6994419$1;)V", nullptr, 0, $method(static_cast<void(bug6994419$1$1::*)($bug6994419$1*)>(&bug6994419$1$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6994419$1$1_EnclosingMethodInfo_ = {
	"bug6994419$1",
	"run",
	"()V"
};

$InnerClassInfo _bug6994419$1$1_InnerClassesInfo_[] = {
	{"bug6994419$1", nullptr, nullptr, 0},
	{"bug6994419$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6994419$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6994419$1$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_bug6994419$1$1_FieldInfo_,
	_bug6994419$1$1_MethodInfo_,
	nullptr,
	&_bug6994419$1$1_EnclosingMethodInfo_,
	_bug6994419$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6994419"
};

$Object* allocate$bug6994419$1$1($Class* clazz) {
	return $of($alloc(bug6994419$1$1));
}

void bug6994419$1$1::init$($bug6994419$1* this$0) {
	$set(this, this$0, this$0);
}

void bug6994419$1$1::propertyChange($PropertyChangeEvent* evt) {
	$throwNew($RuntimeException, "Property change event was unexpectedly fired"_s);
}

bug6994419$1$1::bug6994419$1$1() {
}

$Class* bug6994419$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6994419$1$1, name, initialize, &_bug6994419$1$1_ClassInfo_, allocate$bug6994419$1$1);
	return class$;
}

$Class* bug6994419$1$1::class$ = nullptr;