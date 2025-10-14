#include <javax/swing/plaf/basic/BasicTreeUI$TreePageAction.h>

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

$FieldInfo _BasicTreeUI$TreePageAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreePageAction, this$0)},
	{"direction", "I", nullptr, $PROTECTED, $field(BasicTreeUI$TreePageAction, direction)},
	{"addToSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreePageAction, addToSelection)},
	{"changeSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreePageAction, changeSelection)},
	{}
};

$MethodInfo _BasicTreeUI$TreePageAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$TreePageAction::*)($BasicTreeUI*,int32_t,$String*)>(&BasicTreeUI$TreePageAction::init$))},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$TreePageAction::*)($BasicTreeUI*,int32_t,$String*,bool,bool)>(&BasicTreeUI$TreePageAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreePageAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreePageAction", "javax.swing.plaf.basic.BasicTreeUI", "TreePageAction", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$TreePageAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreePageAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicTreeUI$TreePageAction_FieldInfo_,
	_BasicTreeUI$TreePageAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$TreePageAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreePageAction($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreePageAction));
}

void BasicTreeUI$TreePageAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name) {
	BasicTreeUI$TreePageAction::init$(this$0, direction, name, false, true);
}

void BasicTreeUI$TreePageAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name, bool addToSelection, bool changeSelection) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->direction = direction;
	this->addToSelection = addToSelection;
	this->changeSelection = changeSelection;
}

void BasicTreeUI$TreePageAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$init($BasicTreeUI);
		$nc($BasicTreeUI::SHARED_ACTION)->page(this->this$0->tree, this->this$0, this->direction, this->addToSelection, this->changeSelection);
	}
}

bool BasicTreeUI$TreePageAction::isEnabled() {
	return (this->this$0->tree != nullptr && $nc(this->this$0->tree)->isEnabled());
}

BasicTreeUI$TreePageAction::BasicTreeUI$TreePageAction() {
}

$Class* BasicTreeUI$TreePageAction::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreePageAction, name, initialize, &_BasicTreeUI$TreePageAction_ClassInfo_, allocate$BasicTreeUI$TreePageAction);
	return class$;
}

$Class* BasicTreeUI$TreePageAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax