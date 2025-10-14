#include <bug4870644$1.h>

#include <bug4870644.h>
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
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $bug4870644 = ::bug4870644;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

$FieldInfo _bug4870644$1_FieldInfo_[] = {
	{"this$0", "Lbug4870644;", nullptr, $FINAL | $SYNTHETIC, $field(bug4870644$1, this$0)},
	{}
};

$MethodInfo _bug4870644$1_MethodInfo_[] = {
	{"<init>", "(Lbug4870644;)V", nullptr, 0, $method(static_cast<void(bug4870644$1::*)($bug4870644*)>(&bug4870644$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4870644$1_EnclosingMethodInfo_ = {
	"bug4870644",
	"<init>",
	"()V"
};

$InnerClassInfo _bug4870644$1_InnerClassesInfo_[] = {
	{"bug4870644$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4870644$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4870644$1",
	"javax.swing.AbstractAction",
	nullptr,
	_bug4870644$1_FieldInfo_,
	_bug4870644$1_MethodInfo_,
	nullptr,
	&_bug4870644$1_EnclosingMethodInfo_,
	_bug4870644$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4870644"
};

$Object* allocate$bug4870644$1($Class* clazz) {
	return $of($alloc(bug4870644$1));
}

void bug4870644$1::init$($bug4870644* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void bug4870644$1::actionPerformed($ActionEvent* e) {
	$init($bug4870644);
	$bug4870644::passed = false;
}

bug4870644$1::bug4870644$1() {
}

$Class* bug4870644$1::load$($String* name, bool initialize) {
	$loadClass(bug4870644$1, name, initialize, &_bug4870644$1_ClassInfo_, allocate$bug4870644$1);
	return class$;
}

$Class* bug4870644$1::class$ = nullptr;