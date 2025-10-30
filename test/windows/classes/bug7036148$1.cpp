#include <bug7036148$1.h>

#include <bug7036148.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $bug7036148 = ::bug7036148;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Icon = ::javax::swing::Icon;

$FieldInfo _bug7036148$1_FieldInfo_[] = {
	{"this$0", "Lbug7036148;", nullptr, $FINAL | $SYNTHETIC, $field(bug7036148$1, this$0)},
	{}
};

$MethodInfo _bug7036148$1_MethodInfo_[] = {
	{"<init>", "(Lbug7036148;Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, 0, $method(static_cast<void(bug7036148$1::*)($bug7036148*,$String*,$Icon*)>(&bug7036148$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7036148$1_EnclosingMethodInfo_ = {
	"bug7036148",
	"<init>",
	"()V"
};

$InnerClassInfo _bug7036148$1_InnerClassesInfo_[] = {
	{"bug7036148$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7036148$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7036148$1",
	"javax.swing.AbstractAction",
	nullptr,
	_bug7036148$1_FieldInfo_,
	_bug7036148$1_MethodInfo_,
	nullptr,
	&_bug7036148$1_EnclosingMethodInfo_,
	_bug7036148$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7036148"
};

$Object* allocate$bug7036148$1($Class* clazz) {
	return $of($alloc(bug7036148$1));
}

void bug7036148$1::init$($bug7036148* this$0, $String* arg0, $Icon* arg1) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(arg0, arg1);
}

void bug7036148$1::actionPerformed($ActionEvent* e) {
}

bug7036148$1::bug7036148$1() {
}

$Class* bug7036148$1::load$($String* name, bool initialize) {
	$loadClass(bug7036148$1, name, initialize, &_bug7036148$1_ClassInfo_, allocate$bug7036148$1);
	return class$;
}

$Class* bug7036148$1::class$ = nullptr;