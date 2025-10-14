#include <javax/swing/plaf/basic/BasicTreeUI$TreeTraverseAction.h>

#include <java/awt/Component.h>
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
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Actions.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

#undef SHARED_ACTION

using $Component = ::java::awt::Component;
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

$FieldInfo _BasicTreeUI$TreeTraverseAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeTraverseAction, this$0)},
	{"direction", "I", nullptr, $PROTECTED, $field(BasicTreeUI$TreeTraverseAction, direction)},
	{"changeSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeTraverseAction, changeSelection)},
	{}
};

$MethodInfo _BasicTreeUI$TreeTraverseAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$TreeTraverseAction::*)($BasicTreeUI*,int32_t,$String*)>(&BasicTreeUI$TreeTraverseAction::init$))},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$TreeTraverseAction::*)($BasicTreeUI*,int32_t,$String*,bool)>(&BasicTreeUI$TreeTraverseAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreeTraverseAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreeTraverseAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeTraverseAction", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$TreeTraverseAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreeTraverseAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicTreeUI$TreeTraverseAction_FieldInfo_,
	_BasicTreeUI$TreeTraverseAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$TreeTraverseAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreeTraverseAction($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreeTraverseAction));
}

void BasicTreeUI$TreeTraverseAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name) {
	BasicTreeUI$TreeTraverseAction::init$(this$0, direction, name, true);
}

void BasicTreeUI$TreeTraverseAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name, bool changeSelection) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->direction = direction;
	this->changeSelection = changeSelection;
}

void BasicTreeUI$TreeTraverseAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$init($BasicTreeUI);
		$nc($BasicTreeUI::SHARED_ACTION)->traverse(this->this$0->tree, this->this$0, this->direction, this->changeSelection);
	}
}

bool BasicTreeUI$TreeTraverseAction::isEnabled() {
	return (this->this$0->tree != nullptr && $nc(this->this$0->tree)->isEnabled());
}

BasicTreeUI$TreeTraverseAction::BasicTreeUI$TreeTraverseAction() {
}

$Class* BasicTreeUI$TreeTraverseAction::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreeTraverseAction, name, initialize, &_BasicTreeUI$TreeTraverseAction_ClassInfo_, allocate$BasicTreeUI$TreeTraverseAction);
	return class$;
}

$Class* BasicTreeUI$TreeTraverseAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax