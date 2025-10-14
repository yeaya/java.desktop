#include <javax/swing/plaf/basic/BasicTreeUI$TreeIncrementAction.h>

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

$FieldInfo _BasicTreeUI$TreeIncrementAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeIncrementAction, this$0)},
	{"direction", "I", nullptr, $PROTECTED, $field(BasicTreeUI$TreeIncrementAction, direction)},
	{"addToSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeIncrementAction, addToSelection)},
	{"changeSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeIncrementAction, changeSelection)},
	{}
};

$MethodInfo _BasicTreeUI$TreeIncrementAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$TreeIncrementAction::*)($BasicTreeUI*,int32_t,$String*)>(&BasicTreeUI$TreeIncrementAction::init$))},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$TreeIncrementAction::*)($BasicTreeUI*,int32_t,$String*,bool,bool)>(&BasicTreeUI$TreeIncrementAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreeIncrementAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreeIncrementAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeIncrementAction", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$TreeIncrementAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreeIncrementAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicTreeUI$TreeIncrementAction_FieldInfo_,
	_BasicTreeUI$TreeIncrementAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$TreeIncrementAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreeIncrementAction($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreeIncrementAction));
}

void BasicTreeUI$TreeIncrementAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name) {
	BasicTreeUI$TreeIncrementAction::init$(this$0, direction, name, false, true);
}

void BasicTreeUI$TreeIncrementAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name, bool addToSelection, bool changeSelection) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->direction = direction;
	this->addToSelection = addToSelection;
	this->changeSelection = changeSelection;
}

void BasicTreeUI$TreeIncrementAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$init($BasicTreeUI);
		$nc($BasicTreeUI::SHARED_ACTION)->increment(this->this$0->tree, this->this$0, this->direction, this->addToSelection, this->changeSelection);
	}
}

bool BasicTreeUI$TreeIncrementAction::isEnabled() {
	return (this->this$0->tree != nullptr && $nc(this->this$0->tree)->isEnabled());
}

BasicTreeUI$TreeIncrementAction::BasicTreeUI$TreeIncrementAction() {
}

$Class* BasicTreeUI$TreeIncrementAction::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreeIncrementAction, name, initialize, &_BasicTreeUI$TreeIncrementAction_ClassInfo_, allocate$BasicTreeUI$TreeIncrementAction);
	return class$;
}

$Class* BasicTreeUI$TreeIncrementAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax