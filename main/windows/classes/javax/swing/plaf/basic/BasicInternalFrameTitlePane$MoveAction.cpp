#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$MoveAction.h>

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
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $UIManager = ::javax::swing::UIManager;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane$MoveAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$MoveAction, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$MoveAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$MoveAction::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$MoveAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$MoveAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$MoveAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "MoveAction", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$MoveAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$MoveAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicInternalFrameTitlePane$MoveAction_FieldInfo_,
	_BasicInternalFrameTitlePane$MoveAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$MoveAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$MoveAction($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$MoveAction));
}

void BasicInternalFrameTitlePane$MoveAction::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("InternalFrameTitlePane.moveButtonText"_s)));
}

void BasicInternalFrameTitlePane$MoveAction::actionPerformed($ActionEvent* e) {
}

BasicInternalFrameTitlePane$MoveAction::BasicInternalFrameTitlePane$MoveAction() {
}

$Class* BasicInternalFrameTitlePane$MoveAction::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$MoveAction, name, initialize, &_BasicInternalFrameTitlePane$MoveAction_ClassInfo_, allocate$BasicInternalFrameTitlePane$MoveAction);
	return class$;
}

$Class* BasicInternalFrameTitlePane$MoveAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax