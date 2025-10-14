#include <bug7160604$1.h>

#include <bug7160604.h>
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

using $bug7160604 = ::bug7160604;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

$FieldInfo _bug7160604$1_FieldInfo_[] = {
	{"this$0", "Lbug7160604;", nullptr, $FINAL | $SYNTHETIC, $field(bug7160604$1, this$0)},
	{}
};

$MethodInfo _bug7160604$1_MethodInfo_[] = {
	{"<init>", "(Lbug7160604;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(bug7160604$1::*)($bug7160604*,$String*)>(&bug7160604$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7160604$1_EnclosingMethodInfo_ = {
	"bug7160604",
	"init",
	"()V"
};

$InnerClassInfo _bug7160604$1_InnerClassesInfo_[] = {
	{"bug7160604$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7160604$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7160604$1",
	"javax.swing.AbstractAction",
	nullptr,
	_bug7160604$1_FieldInfo_,
	_bug7160604$1_MethodInfo_,
	nullptr,
	&_bug7160604$1_EnclosingMethodInfo_,
	_bug7160604$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7160604"
};

$Object* allocate$bug7160604$1($Class* clazz) {
	return $of($alloc(bug7160604$1));
}

void bug7160604$1::init$($bug7160604* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(arg0);
}

void bug7160604$1::actionPerformed($ActionEvent* e) {
}

bug7160604$1::bug7160604$1() {
}

$Class* bug7160604$1::load$($String* name, bool initialize) {
	$loadClass(bug7160604$1, name, initialize, &_bug7160604$1_ClassInfo_, allocate$bug7160604$1);
	return class$;
}

$Class* bug7160604$1::class$ = nullptr;