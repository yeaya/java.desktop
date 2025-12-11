#include <javax/swing/plaf/basic/BasicTreeUI$TreeToggleAction.h>

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

$FieldInfo _BasicTreeUI$TreeToggleAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeToggleAction, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$TreeToggleAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$TreeToggleAction::*)($BasicTreeUI*,$String*)>(&BasicTreeUI$TreeToggleAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreeToggleAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreeToggleAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeToggleAction", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$TreeToggleAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreeToggleAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicTreeUI$TreeToggleAction_FieldInfo_,
	_BasicTreeUI$TreeToggleAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$TreeToggleAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreeToggleAction($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreeToggleAction));
}

void BasicTreeUI$TreeToggleAction::init$($BasicTreeUI* this$0, $String* name) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicTreeUI$TreeToggleAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$init($BasicTreeUI);
		$nc($BasicTreeUI::SHARED_ACTION)->toggle(this->this$0->tree, this->this$0);
	}
}

bool BasicTreeUI$TreeToggleAction::isEnabled() {
	return (this->this$0->tree != nullptr && $nc(this->this$0->tree)->isEnabled());
}

BasicTreeUI$TreeToggleAction::BasicTreeUI$TreeToggleAction() {
}

$Class* BasicTreeUI$TreeToggleAction::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreeToggleAction, name, initialize, &_BasicTreeUI$TreeToggleAction_ClassInfo_, allocate$BasicTreeUI$TreeToggleAction);
	return class$;
}

$Class* BasicTreeUI$TreeToggleAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax