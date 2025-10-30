#include <RightAltKeyTest$1.h>

#include <RightAltKeyTest.h>
#include <javax/swing/event/MenuEvent.h>
#include <jcpp.h>

using $RightAltKeyTest = ::RightAltKeyTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuEvent = ::javax::swing::event::MenuEvent;
using $MenuListener = ::javax::swing::event::MenuListener;

$FieldInfo _RightAltKeyTest$1_FieldInfo_[] = {
	{"this$0", "LRightAltKeyTest;", nullptr, $FINAL | $SYNTHETIC, $field(RightAltKeyTest$1, this$0)},
	{}
};

$MethodInfo _RightAltKeyTest$1_MethodInfo_[] = {
	{"<init>", "(LRightAltKeyTest;)V", nullptr, 0, $method(static_cast<void(RightAltKeyTest$1::*)($RightAltKeyTest*)>(&RightAltKeyTest$1::init$))},
	{"menuCanceled", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC},
	{"menuDeselected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC},
	{"menuSelected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RightAltKeyTest$1_EnclosingMethodInfo_ = {
	"RightAltKeyTest",
	"testJMenu",
	"()V"
};

$InnerClassInfo _RightAltKeyTest$1_InnerClassesInfo_[] = {
	{"RightAltKeyTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RightAltKeyTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"RightAltKeyTest$1",
	"java.lang.Object",
	"javax.swing.event.MenuListener",
	_RightAltKeyTest$1_FieldInfo_,
	_RightAltKeyTest$1_MethodInfo_,
	nullptr,
	&_RightAltKeyTest$1_EnclosingMethodInfo_,
	_RightAltKeyTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RightAltKeyTest"
};

$Object* allocate$RightAltKeyTest$1($Class* clazz) {
	return $of($alloc(RightAltKeyTest$1));
}

void RightAltKeyTest$1::init$($RightAltKeyTest* this$0) {
	$set(this, this$0, this$0);
}

void RightAltKeyTest$1::menuSelected($MenuEvent* e) {
	this->this$0->action = true;
	this->this$0->disposeUI();
}

void RightAltKeyTest$1::menuDeselected($MenuEvent* e) {
}

void RightAltKeyTest$1::menuCanceled($MenuEvent* e) {
}

RightAltKeyTest$1::RightAltKeyTest$1() {
}

$Class* RightAltKeyTest$1::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$1, name, initialize, &_RightAltKeyTest$1_ClassInfo_, allocate$RightAltKeyTest$1);
	return class$;
}

$Class* RightAltKeyTest$1::class$ = nullptr;