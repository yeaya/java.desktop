#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$MaximizeAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $UIManager = ::javax::swing::UIManager;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane$MaximizeAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$MaximizeAction, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$MaximizeAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$MaximizeAction::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$MaximizeAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$MaximizeAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$MaximizeAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "MaximizeAction", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$MaximizeAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$MaximizeAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicInternalFrameTitlePane$MaximizeAction_FieldInfo_,
	_BasicInternalFrameTitlePane$MaximizeAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$MaximizeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$MaximizeAction($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$MaximizeAction));
}

void BasicInternalFrameTitlePane$MaximizeAction::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("InternalFrameTitlePane.maximizeButtonText"_s)));
}

void BasicInternalFrameTitlePane$MaximizeAction::actionPerformed($ActionEvent* evt) {
	if ($nc(this->this$0->frame)->isMaximizable()) {
		bool var$0 = $nc(this->this$0->frame)->isMaximum();
		if (var$0 && $nc(this->this$0->frame)->isIcon()) {
			try {
				$nc(this->this$0->frame)->setIcon(false);
			} catch ($PropertyVetoException& e) {
			}
		} else if (!$nc(this->this$0->frame)->isMaximum()) {
			try {
				$nc(this->this$0->frame)->setMaximum(true);
			} catch ($PropertyVetoException& e) {
			}
		} else {
			try {
				$nc(this->this$0->frame)->setMaximum(false);
			} catch ($PropertyVetoException& e) {
			}
		}
	}
}

BasicInternalFrameTitlePane$MaximizeAction::BasicInternalFrameTitlePane$MaximizeAction() {
}

$Class* BasicInternalFrameTitlePane$MaximizeAction::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$MaximizeAction, name, initialize, &_BasicInternalFrameTitlePane$MaximizeAction_ClassInfo_, allocate$BasicInternalFrameTitlePane$MaximizeAction);
	return class$;
}

$Class* BasicInternalFrameTitlePane$MaximizeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax