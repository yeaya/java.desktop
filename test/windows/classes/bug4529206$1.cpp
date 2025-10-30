#include <bug4529206$1.h>

#include <bug4529206.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $bug4529206 = ::bug4529206;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug4529206$1_FieldInfo_[] = {
	{"this$0", "Lbug4529206;", nullptr, $FINAL | $SYNTHETIC, $field(bug4529206$1, this$0)},
	{}
};

$MethodInfo _bug4529206$1_MethodInfo_[] = {
	{"<init>", "(Lbug4529206;)V", nullptr, 0, $method(static_cast<void(bug4529206$1::*)($bug4529206*)>(&bug4529206$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4529206$1_EnclosingMethodInfo_ = {
	"bug4529206",
	"<init>",
	"()V"
};

$InnerClassInfo _bug4529206$1_InnerClassesInfo_[] = {
	{"bug4529206$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4529206$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4529206$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_bug4529206$1_FieldInfo_,
	_bug4529206$1_MethodInfo_,
	nullptr,
	&_bug4529206$1_EnclosingMethodInfo_,
	_bug4529206$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4529206"
};

$Object* allocate$bug4529206$1($Class* clazz) {
	return $of($alloc(bug4529206$1));
}

void bug4529206$1::init$($bug4529206* this$0) {
	$set(this, this$0, this$0);
}

void bug4529206$1::actionPerformed($ActionEvent* e) {
	this->this$0->buttonPressed(e);
}

bug4529206$1::bug4529206$1() {
}

$Class* bug4529206$1::load$($String* name, bool initialize) {
	$loadClass(bug4529206$1, name, initialize, &_bug4529206$1_ClassInfo_, allocate$bug4529206$1);
	return class$;
}

$Class* bug4529206$1::class$ = nullptr;