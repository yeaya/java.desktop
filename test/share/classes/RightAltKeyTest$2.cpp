#include <RightAltKeyTest$2.h>

#include <RightAltKeyTest.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $RightAltKeyTest = ::RightAltKeyTest;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _RightAltKeyTest$2_FieldInfo_[] = {
	{"this$0", "LRightAltKeyTest;", nullptr, $FINAL | $SYNTHETIC, $field(RightAltKeyTest$2, this$0)},
	{}
};

$MethodInfo _RightAltKeyTest$2_MethodInfo_[] = {
	{"<init>", "(LRightAltKeyTest;)V", nullptr, 0, $method(static_cast<void(RightAltKeyTest$2::*)($RightAltKeyTest*)>(&RightAltKeyTest$2::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RightAltKeyTest$2_EnclosingMethodInfo_ = {
	"RightAltKeyTest",
	"testJTextArea",
	"()V"
};

$InnerClassInfo _RightAltKeyTest$2_InnerClassesInfo_[] = {
	{"RightAltKeyTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RightAltKeyTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"RightAltKeyTest$2",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_RightAltKeyTest$2_FieldInfo_,
	_RightAltKeyTest$2_MethodInfo_,
	nullptr,
	&_RightAltKeyTest$2_EnclosingMethodInfo_,
	_RightAltKeyTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RightAltKeyTest"
};

$Object* allocate$RightAltKeyTest$2($Class* clazz) {
	return $of($alloc(RightAltKeyTest$2));
}

void RightAltKeyTest$2::init$($RightAltKeyTest* this$0) {
	$set(this, this$0, this$0);
}

void RightAltKeyTest$2::focusGained($FocusEvent* e) {
	this->this$0->action = true;
	this->this$0->disposeUI();
}

void RightAltKeyTest$2::focusLost($FocusEvent* e) {
}

RightAltKeyTest$2::RightAltKeyTest$2() {
}

$Class* RightAltKeyTest$2::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$2, name, initialize, &_RightAltKeyTest$2_ClassInfo_, allocate$RightAltKeyTest$2);
	return class$;
}

$Class* RightAltKeyTest$2::class$ = nullptr;