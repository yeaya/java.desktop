#include <bug4666224$RotateAction.h>

#include <bug4666224.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $bug4666224 = ::bug4666224;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$FieldInfo _bug4666224$RotateAction_FieldInfo_[] = {
	{"this$0", "Lbug4666224;", nullptr, $FINAL | $SYNTHETIC, $field(bug4666224$RotateAction, this$0)},
	{"placement", "I", nullptr, $PRIVATE, $field(bug4666224$RotateAction, placement)},
	{}
};

$MethodInfo _bug4666224$RotateAction_MethodInfo_[] = {
	{"<init>", "(Lbug4666224;I)V", nullptr, $PUBLIC, $method(static_cast<void(bug4666224$RotateAction::*)($bug4666224*,int32_t)>(&bug4666224$RotateAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4666224$RotateAction_InnerClassesInfo_[] = {
	{"bug4666224$RotateAction", "bug4666224", "RotateAction", $PRIVATE},
	{}
};

$ClassInfo _bug4666224$RotateAction_ClassInfo_ = {
	$ACC_SUPER,
	"bug4666224$RotateAction",
	"javax.swing.AbstractAction",
	nullptr,
	_bug4666224$RotateAction_FieldInfo_,
	_bug4666224$RotateAction_MethodInfo_,
	nullptr,
	nullptr,
	_bug4666224$RotateAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4666224"
};

$Object* allocate$bug4666224$RotateAction($Class* clazz) {
	return $of($alloc(bug4666224$RotateAction));
}

void bug4666224$RotateAction::init$($bug4666224* this$0, int32_t placement) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->placement = placement;
}

void bug4666224$RotateAction::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->tabPane)->setTabPlacement(this->placement);
}

bug4666224$RotateAction::bug4666224$RotateAction() {
}

$Class* bug4666224$RotateAction::load$($String* name, bool initialize) {
	$loadClass(bug4666224$RotateAction, name, initialize, &_bug4666224$RotateAction_ClassInfo_, allocate$bug4666224$RotateAction);
	return class$;
}

$Class* bug4666224$RotateAction::class$ = nullptr;