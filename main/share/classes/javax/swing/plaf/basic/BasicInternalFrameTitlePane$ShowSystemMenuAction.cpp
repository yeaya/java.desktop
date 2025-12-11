#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$ShowSystemMenuAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JMenu = ::javax::swing::JMenu;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane$ShowSystemMenuAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$ShowSystemMenuAction, this$0)},
	{"show", "Z", nullptr, $PRIVATE, $field(BasicInternalFrameTitlePane$ShowSystemMenuAction, show)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$ShowSystemMenuAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$ShowSystemMenuAction::*)($BasicInternalFrameTitlePane*,bool)>(&BasicInternalFrameTitlePane$ShowSystemMenuAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$ShowSystemMenuAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$ShowSystemMenuAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "ShowSystemMenuAction", $PRIVATE},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$ShowSystemMenuAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$ShowSystemMenuAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicInternalFrameTitlePane$ShowSystemMenuAction_FieldInfo_,
	_BasicInternalFrameTitlePane$ShowSystemMenuAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$ShowSystemMenuAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$ShowSystemMenuAction($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$ShowSystemMenuAction));
}

void BasicInternalFrameTitlePane$ShowSystemMenuAction::init$($BasicInternalFrameTitlePane* this$0, bool show) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->show = show;
}

void BasicInternalFrameTitlePane$ShowSystemMenuAction::actionPerformed($ActionEvent* e) {
	if (this->show) {
		$nc(this->this$0->windowMenu)->doClick();
	} else {
		$nc(this->this$0->windowMenu)->setVisible(false);
	}
}

BasicInternalFrameTitlePane$ShowSystemMenuAction::BasicInternalFrameTitlePane$ShowSystemMenuAction() {
}

$Class* BasicInternalFrameTitlePane$ShowSystemMenuAction::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$ShowSystemMenuAction, name, initialize, &_BasicInternalFrameTitlePane$ShowSystemMenuAction_ClassInfo_, allocate$BasicInternalFrameTitlePane$ShowSystemMenuAction);
	return class$;
}

$Class* BasicInternalFrameTitlePane$ShowSystemMenuAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax