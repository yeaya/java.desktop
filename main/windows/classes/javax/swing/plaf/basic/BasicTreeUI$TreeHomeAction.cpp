#include <javax/swing/plaf/basic/BasicTreeUI$TreeHomeAction.h>

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

$FieldInfo _BasicTreeUI$TreeHomeAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeHomeAction, this$0)},
	{"direction", "I", nullptr, $PROTECTED, $field(BasicTreeUI$TreeHomeAction, direction)},
	{"addToSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeHomeAction, addToSelection)},
	{"changeSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeHomeAction, changeSelection)},
	{}
};

$MethodInfo _BasicTreeUI$TreeHomeAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$TreeHomeAction::*)($BasicTreeUI*,int32_t,$String*)>(&BasicTreeUI$TreeHomeAction::init$))},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$TreeHomeAction::*)($BasicTreeUI*,int32_t,$String*,bool,bool)>(&BasicTreeUI$TreeHomeAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreeHomeAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreeHomeAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeHomeAction", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$TreeHomeAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreeHomeAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicTreeUI$TreeHomeAction_FieldInfo_,
	_BasicTreeUI$TreeHomeAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$TreeHomeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreeHomeAction($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreeHomeAction));
}

void BasicTreeUI$TreeHomeAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name) {
	BasicTreeUI$TreeHomeAction::init$(this$0, direction, name, false, true);
}

void BasicTreeUI$TreeHomeAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name, bool addToSelection, bool changeSelection) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->direction = direction;
	this->changeSelection = changeSelection;
	this->addToSelection = addToSelection;
}

void BasicTreeUI$TreeHomeAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$init($BasicTreeUI);
		$nc($BasicTreeUI::SHARED_ACTION)->home(this->this$0->tree, this->this$0, this->direction, this->addToSelection, this->changeSelection);
	}
}

bool BasicTreeUI$TreeHomeAction::isEnabled() {
	return (this->this$0->tree != nullptr && $nc(this->this$0->tree)->isEnabled());
}

BasicTreeUI$TreeHomeAction::BasicTreeUI$TreeHomeAction() {
}

$Class* BasicTreeUI$TreeHomeAction::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreeHomeAction, name, initialize, &_BasicTreeUI$TreeHomeAction_ClassInfo_, allocate$BasicTreeUI$TreeHomeAction);
	return class$;
}

$Class* BasicTreeUI$TreeHomeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax