#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$CloseAction.h>

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
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
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

$FieldInfo _BasicInternalFrameTitlePane$CloseAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$CloseAction, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$CloseAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$CloseAction::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$CloseAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$CloseAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$CloseAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "CloseAction", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$CloseAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$CloseAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicInternalFrameTitlePane$CloseAction_FieldInfo_,
	_BasicInternalFrameTitlePane$CloseAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$CloseAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$CloseAction($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$CloseAction));
}

void BasicInternalFrameTitlePane$CloseAction::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("InternalFrameTitlePane.closeButtonText"_s)));
}

void BasicInternalFrameTitlePane$CloseAction::actionPerformed($ActionEvent* e) {
	if ($nc(this->this$0->frame)->isClosable()) {
		$nc(this->this$0->frame)->doDefaultCloseAction();
	}
}

BasicInternalFrameTitlePane$CloseAction::BasicInternalFrameTitlePane$CloseAction() {
}

$Class* BasicInternalFrameTitlePane$CloseAction::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$CloseAction, name, initialize, &_BasicInternalFrameTitlePane$CloseAction_ClassInfo_, allocate$BasicInternalFrameTitlePane$CloseAction);
	return class$;
}

$Class* BasicInternalFrameTitlePane$CloseAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax