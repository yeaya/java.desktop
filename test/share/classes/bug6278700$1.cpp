#include <bug6278700$1.h>

#include <bug6278700.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug6278700 = ::bug6278700;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

$FieldInfo _bug6278700$1_FieldInfo_[] = {
	{"this$0", "Lbug6278700;", nullptr, $FINAL | $SYNTHETIC, $field(bug6278700$1, this$0)},
	{}
};

$MethodInfo _bug6278700$1_MethodInfo_[] = {
	{"<init>", "(Lbug6278700;)V", nullptr, 0, $method(static_cast<void(bug6278700$1::*)($bug6278700*)>(&bug6278700$1::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6278700$1_EnclosingMethodInfo_ = {
	"bug6278700",
	nullptr,
	nullptr
};

$InnerClassInfo _bug6278700$1_InnerClassesInfo_[] = {
	{"bug6278700$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6278700$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6278700$1",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_bug6278700$1_FieldInfo_,
	_bug6278700$1_MethodInfo_,
	nullptr,
	&_bug6278700$1_EnclosingMethodInfo_,
	_bug6278700$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6278700"
};

$Object* allocate$bug6278700$1($Class* clazz) {
	return $of($alloc(bug6278700$1));
}

void bug6278700$1::init$($bug6278700* this$0) {
	$set(this, this$0, this$0);
}

void bug6278700$1::stateChanged($ChangeEvent* e) {
	++this->this$0->changeCount;
}

bug6278700$1::bug6278700$1() {
}

$Class* bug6278700$1::load$($String* name, bool initialize) {
	$loadClass(bug6278700$1, name, initialize, &_bug6278700$1_ClassInfo_, allocate$bug6278700$1);
	return class$;
}

$Class* bug6278700$1::class$ = nullptr;