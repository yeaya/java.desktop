#include <javax/swing/ToolTipManager$stillInsideTimerAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Timer.h>
#include <javax/swing/ToolTipManager.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $Timer = ::javax::swing::Timer;
using $ToolTipManager = ::javax::swing::ToolTipManager;

namespace javax {
	namespace swing {

$FieldInfo _ToolTipManager$stillInsideTimerAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ToolTipManager;", nullptr, $FINAL | $SYNTHETIC, $field(ToolTipManager$stillInsideTimerAction, this$0)},
	{}
};

$MethodInfo _ToolTipManager$stillInsideTimerAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ToolTipManager;)V", nullptr, $PROTECTED, $method(static_cast<void(ToolTipManager$stillInsideTimerAction::*)($ToolTipManager*)>(&ToolTipManager$stillInsideTimerAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ToolTipManager$stillInsideTimerAction_InnerClassesInfo_[] = {
	{"javax.swing.ToolTipManager$stillInsideTimerAction", "javax.swing.ToolTipManager", "stillInsideTimerAction", $PROTECTED},
	{}
};

$ClassInfo _ToolTipManager$stillInsideTimerAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ToolTipManager$stillInsideTimerAction",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_ToolTipManager$stillInsideTimerAction_FieldInfo_,
	_ToolTipManager$stillInsideTimerAction_MethodInfo_,
	nullptr,
	nullptr,
	_ToolTipManager$stillInsideTimerAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ToolTipManager"
};

$Object* allocate$ToolTipManager$stillInsideTimerAction($Class* clazz) {
	return $of($alloc(ToolTipManager$stillInsideTimerAction));
}

void ToolTipManager$stillInsideTimerAction::init$($ToolTipManager* this$0) {
	$set(this, this$0, this$0);
}

void ToolTipManager$stillInsideTimerAction::actionPerformed($ActionEvent* e) {
	this->this$0->hideTipWindow();
	$nc(this->this$0->enterTimer)->stop();
	this->this$0->showImmediately = false;
	$set(this->this$0, insideComponent, nullptr);
	$set(this->this$0, mouseEvent, nullptr);
}

ToolTipManager$stillInsideTimerAction::ToolTipManager$stillInsideTimerAction() {
}

$Class* ToolTipManager$stillInsideTimerAction::load$($String* name, bool initialize) {
	$loadClass(ToolTipManager$stillInsideTimerAction, name, initialize, &_ToolTipManager$stillInsideTimerAction_ClassInfo_, allocate$ToolTipManager$stillInsideTimerAction);
	return class$;
}

$Class* ToolTipManager$stillInsideTimerAction::class$ = nullptr;

	} // swing
} // javax