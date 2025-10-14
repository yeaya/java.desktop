#include <bug4788637$1.h>

#include <bug4788637.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug4788637 = ::bug4788637;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

$FieldInfo _bug4788637$1_FieldInfo_[] = {
	{"this$0", "Lbug4788637;", nullptr, $FINAL | $SYNTHETIC, $field(bug4788637$1, this$0)},
	{}
};

$MethodInfo _bug4788637$1_MethodInfo_[] = {
	{"<init>", "(Lbug4788637;)V", nullptr, 0, $method(static_cast<void(bug4788637$1::*)($bug4788637*)>(&bug4788637$1::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4788637$1_EnclosingMethodInfo_ = {
	"bug4788637",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _bug4788637$1_InnerClassesInfo_[] = {
	{"bug4788637$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4788637$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4788637$1",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_bug4788637$1_FieldInfo_,
	_bug4788637$1_MethodInfo_,
	nullptr,
	&_bug4788637$1_EnclosingMethodInfo_,
	_bug4788637$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4788637"
};

$Object* allocate$bug4788637$1($Class* clazz) {
	return $of($alloc(bug4788637$1));
}

void bug4788637$1::init$($bug4788637* this$0) {
	$set(this, this$0, this$0);
}

void bug4788637$1::stateChanged($ChangeEvent* e) {
	$synchronized(this->this$0) {
		$nc(this->this$0->spinnerValueChanged)->set(this->this$0->step, true);
		$of(this->this$0)->notifyAll();
	}
}

bug4788637$1::bug4788637$1() {
}

$Class* bug4788637$1::load$($String* name, bool initialize) {
	$loadClass(bug4788637$1, name, initialize, &_bug4788637$1_ClassInfo_, allocate$bug4788637$1);
	return class$;
}

$Class* bug4788637$1::class$ = nullptr;