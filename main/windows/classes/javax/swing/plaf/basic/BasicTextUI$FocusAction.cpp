#include <javax/swing/plaf/basic/BasicTextUI$FocusAction.h>

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
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComponent = ::javax::swing::JComponent;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTextUI$FocusAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTextUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTextUI$FocusAction, this$0)},
	{}
};

$MethodInfo _BasicTextUI$FocusAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTextUI;)V", nullptr, 0, $method(static_cast<void(BasicTextUI$FocusAction::*)($BasicTextUI*)>(&BasicTextUI$FocusAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI$FocusAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$FocusAction", "javax.swing.plaf.basic.BasicTextUI", "FocusAction", 0},
	{}
};

$ClassInfo _BasicTextUI$FocusAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$FocusAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicTextUI$FocusAction_FieldInfo_,
	_BasicTextUI$FocusAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$FocusAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$FocusAction($Class* clazz) {
	return $of($alloc(BasicTextUI$FocusAction));
}

void BasicTextUI$FocusAction::init$($BasicTextUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicTextUI$FocusAction::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->editor)->requestFocus();
}

bool BasicTextUI$FocusAction::isEnabled() {
	return $nc(this->this$0->editor)->isEditable();
}

BasicTextUI$FocusAction::BasicTextUI$FocusAction() {
}

$Class* BasicTextUI$FocusAction::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$FocusAction, name, initialize, &_BasicTextUI$FocusAction_ClassInfo_, allocate$BasicTextUI$FocusAction);
	return class$;
}

$Class* BasicTextUI$FocusAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax