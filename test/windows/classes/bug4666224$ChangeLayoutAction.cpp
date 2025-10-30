#include <bug4666224$ChangeLayoutAction.h>

#include <bug4666224.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

#undef SCROLL_TAB_LAYOUT
#undef WRAP_TAB_LAYOUT

using $bug4666224 = ::bug4666224;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$FieldInfo _bug4666224$ChangeLayoutAction_FieldInfo_[] = {
	{"this$0", "Lbug4666224;", nullptr, $FINAL | $SYNTHETIC, $field(bug4666224$ChangeLayoutAction, this$0)},
	{"a", "Z", nullptr, $PRIVATE, $field(bug4666224$ChangeLayoutAction, a)},
	{}
};

$MethodInfo _bug4666224$ChangeLayoutAction_MethodInfo_[] = {
	{"<init>", "(Lbug4666224;)V", nullptr, $PRIVATE, $method(static_cast<void(bug4666224$ChangeLayoutAction::*)($bug4666224*)>(&bug4666224$ChangeLayoutAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4666224$ChangeLayoutAction_InnerClassesInfo_[] = {
	{"bug4666224$ChangeLayoutAction", "bug4666224", "ChangeLayoutAction", $PRIVATE},
	{}
};

$ClassInfo _bug4666224$ChangeLayoutAction_ClassInfo_ = {
	$ACC_SUPER,
	"bug4666224$ChangeLayoutAction",
	"javax.swing.AbstractAction",
	nullptr,
	_bug4666224$ChangeLayoutAction_FieldInfo_,
	_bug4666224$ChangeLayoutAction_MethodInfo_,
	nullptr,
	nullptr,
	_bug4666224$ChangeLayoutAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4666224"
};

$Object* allocate$bug4666224$ChangeLayoutAction($Class* clazz) {
	return $of($alloc(bug4666224$ChangeLayoutAction));
}

void bug4666224$ChangeLayoutAction::init$($bug4666224* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->a = true;
}

void bug4666224$ChangeLayoutAction::actionPerformed($ActionEvent* e) {
	if (this->a) {
		$nc(this->this$0->tabPane)->setTabLayoutPolicy($JTabbedPane::WRAP_TAB_LAYOUT);
		this->a = false;
	} else {
		$nc(this->this$0->tabPane)->setTabLayoutPolicy($JTabbedPane::SCROLL_TAB_LAYOUT);
		this->a = true;
	}
}

bug4666224$ChangeLayoutAction::bug4666224$ChangeLayoutAction() {
}

$Class* bug4666224$ChangeLayoutAction::load$($String* name, bool initialize) {
	$loadClass(bug4666224$ChangeLayoutAction, name, initialize, &_bug4666224$ChangeLayoutAction_ClassInfo_, allocate$bug4666224$ChangeLayoutAction);
	return class$;
}

$Class* bug4666224$ChangeLayoutAction::class$ = nullptr;