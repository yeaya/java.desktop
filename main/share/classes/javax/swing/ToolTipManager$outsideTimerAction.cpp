#include <javax/swing/ToolTipManager$outsideTimerAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/ToolTipManager.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ToolTipManager = ::javax::swing::ToolTipManager;

namespace javax {
	namespace swing {

$FieldInfo _ToolTipManager$outsideTimerAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ToolTipManager;", nullptr, $FINAL | $SYNTHETIC, $field(ToolTipManager$outsideTimerAction, this$0)},
	{}
};

$MethodInfo _ToolTipManager$outsideTimerAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ToolTipManager;)V", nullptr, $PROTECTED, $method(static_cast<void(ToolTipManager$outsideTimerAction::*)($ToolTipManager*)>(&ToolTipManager$outsideTimerAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ToolTipManager$outsideTimerAction_InnerClassesInfo_[] = {
	{"javax.swing.ToolTipManager$outsideTimerAction", "javax.swing.ToolTipManager", "outsideTimerAction", $PROTECTED},
	{}
};

$ClassInfo _ToolTipManager$outsideTimerAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ToolTipManager$outsideTimerAction",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_ToolTipManager$outsideTimerAction_FieldInfo_,
	_ToolTipManager$outsideTimerAction_MethodInfo_,
	nullptr,
	nullptr,
	_ToolTipManager$outsideTimerAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ToolTipManager"
};

$Object* allocate$ToolTipManager$outsideTimerAction($Class* clazz) {
	return $of($alloc(ToolTipManager$outsideTimerAction));
}

void ToolTipManager$outsideTimerAction::init$($ToolTipManager* this$0) {
	$set(this, this$0, this$0);
}

void ToolTipManager$outsideTimerAction::actionPerformed($ActionEvent* e) {
	this->this$0->showImmediately = false;
}

ToolTipManager$outsideTimerAction::ToolTipManager$outsideTimerAction() {
}

$Class* ToolTipManager$outsideTimerAction::load$($String* name, bool initialize) {
	$loadClass(ToolTipManager$outsideTimerAction, name, initialize, &_ToolTipManager$outsideTimerAction_ClassInfo_, allocate$ToolTipManager$outsideTimerAction);
	return class$;
}

$Class* ToolTipManager$outsideTimerAction::class$ = nullptr;

	} // swing
} // javax