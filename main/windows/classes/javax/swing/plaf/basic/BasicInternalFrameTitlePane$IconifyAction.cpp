#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$IconifyAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _BasicInternalFrameTitlePane$IconifyAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$IconifyAction, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$IconifyAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$IconifyAction::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$IconifyAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$IconifyAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$IconifyAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "IconifyAction", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$IconifyAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$IconifyAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicInternalFrameTitlePane$IconifyAction_FieldInfo_,
	_BasicInternalFrameTitlePane$IconifyAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$IconifyAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$IconifyAction($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$IconifyAction));
}

void BasicInternalFrameTitlePane$IconifyAction::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("InternalFrameTitlePane.minimizeButtonText"_s)));
}

void BasicInternalFrameTitlePane$IconifyAction::actionPerformed($ActionEvent* e) {
	if ($nc(this->this$0->frame)->isIconifiable()) {
		if (!$nc(this->this$0->frame)->isIcon()) {
			try {
				$nc(this->this$0->frame)->setIcon(true);
			} catch ($PropertyVetoException&) {
				$catch();
			}
		} else {
			try {
				$nc(this->this$0->frame)->setIcon(false);
			} catch ($PropertyVetoException&) {
				$catch();
			}
		}
	}
}

BasicInternalFrameTitlePane$IconifyAction::BasicInternalFrameTitlePane$IconifyAction() {
}

$Class* BasicInternalFrameTitlePane$IconifyAction::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$IconifyAction, name, initialize, &_BasicInternalFrameTitlePane$IconifyAction_ClassInfo_, allocate$BasicInternalFrameTitlePane$IconifyAction);
	return class$;
}

$Class* BasicInternalFrameTitlePane$IconifyAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax