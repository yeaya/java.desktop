#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$RestoreAction.h>

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

$FieldInfo _BasicInternalFrameTitlePane$RestoreAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$RestoreAction, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$RestoreAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$RestoreAction::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$RestoreAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$RestoreAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$RestoreAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "RestoreAction", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$RestoreAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$RestoreAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicInternalFrameTitlePane$RestoreAction_FieldInfo_,
	_BasicInternalFrameTitlePane$RestoreAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$RestoreAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$RestoreAction($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$RestoreAction));
}

void BasicInternalFrameTitlePane$RestoreAction::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("InternalFrameTitlePane.restoreButtonText"_s)));
}

void BasicInternalFrameTitlePane$RestoreAction::actionPerformed($ActionEvent* evt) {
	bool var$1 = $nc(this->this$0->frame)->isMaximizable();
	bool var$0 = var$1 && $nc(this->this$0->frame)->isMaximum();
	if (var$0 && $nc(this->this$0->frame)->isIcon()) {
		try {
			$nc(this->this$0->frame)->setIcon(false);
		} catch ($PropertyVetoException& e) {
		}
	} else {
		bool var$3 = $nc(this->this$0->frame)->isMaximizable();
		if (var$3 && $nc(this->this$0->frame)->isMaximum()) {
			try {
				$nc(this->this$0->frame)->setMaximum(false);
			} catch ($PropertyVetoException& e) {
			}
		} else {
			bool var$5 = $nc(this->this$0->frame)->isIconifiable();
			if (var$5 && $nc(this->this$0->frame)->isIcon()) {
				try {
					$nc(this->this$0->frame)->setIcon(false);
				} catch ($PropertyVetoException& e) {
				}
			}
		}
	}
}

BasicInternalFrameTitlePane$RestoreAction::BasicInternalFrameTitlePane$RestoreAction() {
}

$Class* BasicInternalFrameTitlePane$RestoreAction::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$RestoreAction, name, initialize, &_BasicInternalFrameTitlePane$RestoreAction_ClassInfo_, allocate$BasicInternalFrameTitlePane$RestoreAction);
	return class$;
}

$Class* BasicInternalFrameTitlePane$RestoreAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax