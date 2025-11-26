#include <JTreeFocusTest$1.h>

#include <JTreeFocusTest.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $JTreeFocusTest = ::JTreeFocusTest;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _JTreeFocusTest$1_FieldInfo_[] = {
	{"this$0", "LJTreeFocusTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTreeFocusTest$1, this$0)},
	{}
};

$MethodInfo _JTreeFocusTest$1_MethodInfo_[] = {
	{"<init>", "(LJTreeFocusTest;)V", nullptr, 0, $method(static_cast<void(JTreeFocusTest$1::*)($JTreeFocusTest*)>(&JTreeFocusTest$1::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTreeFocusTest$1_EnclosingMethodInfo_ = {
	"JTreeFocusTest",
	"<init>",
	"()V"
};

$InnerClassInfo _JTreeFocusTest$1_InnerClassesInfo_[] = {
	{"JTreeFocusTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTreeFocusTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JTreeFocusTest$1",
	"java.awt.event.FocusAdapter",
	nullptr,
	_JTreeFocusTest$1_FieldInfo_,
	_JTreeFocusTest$1_MethodInfo_,
	nullptr,
	&_JTreeFocusTest$1_EnclosingMethodInfo_,
	_JTreeFocusTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTreeFocusTest"
};

$Object* allocate$JTreeFocusTest$1($Class* clazz) {
	return $of($alloc(JTreeFocusTest$1));
}

void JTreeFocusTest$1::init$($JTreeFocusTest* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void JTreeFocusTest$1::focusGained($FocusEvent* e) {
	this->this$0->setPassed(true);
}

JTreeFocusTest$1::JTreeFocusTest$1() {
}

$Class* JTreeFocusTest$1::load$($String* name, bool initialize) {
	$loadClass(JTreeFocusTest$1, name, initialize, &_JTreeFocusTest$1_ClassInfo_, allocate$JTreeFocusTest$1);
	return class$;
}

$Class* JTreeFocusTest$1::class$ = nullptr;