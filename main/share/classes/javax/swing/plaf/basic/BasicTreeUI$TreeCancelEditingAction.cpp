#include <javax/swing/plaf/basic/BasicTreeUI$TreeCancelEditingAction.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Actions.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

#undef SHARED_ACTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JTree = ::javax::swing::JTree;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Actions = ::javax::swing::plaf::basic::BasicTreeUI$Actions;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$TreeCancelEditingAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeCancelEditingAction, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$TreeCancelEditingAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$TreeCancelEditingAction::*)($BasicTreeUI*,$String*)>(&BasicTreeUI$TreeCancelEditingAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreeCancelEditingAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreeCancelEditingAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeCancelEditingAction", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$TreeCancelEditingAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreeCancelEditingAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicTreeUI$TreeCancelEditingAction_FieldInfo_,
	_BasicTreeUI$TreeCancelEditingAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$TreeCancelEditingAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreeCancelEditingAction($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreeCancelEditingAction));
}

void BasicTreeUI$TreeCancelEditingAction::init$($BasicTreeUI* this$0, $String* name) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicTreeUI$TreeCancelEditingAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$init($BasicTreeUI);
		$nc($BasicTreeUI::SHARED_ACTION)->cancelEditing(this->this$0->tree, this->this$0);
	}
}

bool BasicTreeUI$TreeCancelEditingAction::isEnabled() {
	bool var$0 = this->this$0->tree != nullptr && $nc(this->this$0->tree)->isEnabled();
	return (var$0 && this->this$0->isEditing(this->this$0->tree));
}

BasicTreeUI$TreeCancelEditingAction::BasicTreeUI$TreeCancelEditingAction() {
}

$Class* BasicTreeUI$TreeCancelEditingAction::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreeCancelEditingAction, name, initialize, &_BasicTreeUI$TreeCancelEditingAction_ClassInfo_, allocate$BasicTreeUI$TreeCancelEditingAction);
	return class$;
}

$Class* BasicTreeUI$TreeCancelEditingAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax