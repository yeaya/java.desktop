#include <bug6544309$2.h>

#include <bug6544309.h>
#include <java/awt/event/ActionEvent.h>
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

using $bug6544309 = ::bug6544309;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug6544309$2_FieldInfo_[] = {
	{"this$0", "Lbug6544309;", nullptr, $FINAL | $SYNTHETIC, $field(bug6544309$2, this$0)},
	{}
};

$MethodInfo _bug6544309$2_MethodInfo_[] = {
	{"<init>", "(Lbug6544309;)V", nullptr, 0, $method(static_cast<void(bug6544309$2::*)($bug6544309*)>(&bug6544309$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6544309$2_EnclosingMethodInfo_ = {
	"bug6544309",
	"setupUI",
	"()V"
};

$InnerClassInfo _bug6544309$2_InnerClassesInfo_[] = {
	{"bug6544309$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6544309$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6544309$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_bug6544309$2_FieldInfo_,
	_bug6544309$2_MethodInfo_,
	nullptr,
	&_bug6544309$2_EnclosingMethodInfo_,
	_bug6544309$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6544309"
};

$Object* allocate$bug6544309$2($Class* clazz) {
	return $of($alloc(bug6544309$2));
}

void bug6544309$2::init$($bug6544309* this$0) {
	$set(this, this$0, this$0);
}

void bug6544309$2::actionPerformed($ActionEvent* e) {
	this->this$0->passed = true;
}

bug6544309$2::bug6544309$2() {
}

$Class* bug6544309$2::load$($String* name, bool initialize) {
	$loadClass(bug6544309$2, name, initialize, &_bug6544309$2_ClassInfo_, allocate$bug6544309$2);
	return class$;
}

$Class* bug6544309$2::class$ = nullptr;