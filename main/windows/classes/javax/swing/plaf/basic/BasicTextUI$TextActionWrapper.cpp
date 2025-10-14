#include <javax/swing/plaf/basic/BasicTextUI$TextActionWrapper.h>

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
#include <javax/swing/Action.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef NAME

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTextUI$TextActionWrapper_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTextUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTextUI$TextActionWrapper, this$0)},
	{"action", "Ljavax/swing/text/TextAction;", nullptr, 0, $field(BasicTextUI$TextActionWrapper, action)},
	{}
};

$MethodInfo _BasicTextUI$TextActionWrapper_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTextUI;Ljavax/swing/text/TextAction;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTextUI$TextActionWrapper::*)($BasicTextUI*,$TextAction*)>(&BasicTextUI$TextActionWrapper::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI$TextActionWrapper_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$TextActionWrapper", "javax.swing.plaf.basic.BasicTextUI", "TextActionWrapper", 0},
	{}
};

$ClassInfo _BasicTextUI$TextActionWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$TextActionWrapper",
	"javax.swing.text.TextAction",
	nullptr,
	_BasicTextUI$TextActionWrapper_FieldInfo_,
	_BasicTextUI$TextActionWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$TextActionWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$TextActionWrapper($Class* clazz) {
	return $of($alloc(BasicTextUI$TextActionWrapper));
}

void BasicTextUI$TextActionWrapper::init$($BasicTextUI* this$0, $TextAction* action) {
	$set(this, this$0, this$0);
	$init($Action);
	$TextAction::init$($cast($String, $($nc(action)->getValue($Action::NAME))));
	$set(this, action, nullptr);
	$set(this, action, action);
}

void BasicTextUI$TextActionWrapper::actionPerformed($ActionEvent* e) {
	$nc(this->action)->actionPerformed(e);
}

bool BasicTextUI$TextActionWrapper::isEnabled() {
	return (this->this$0->editor == nullptr || $nc(this->this$0->editor)->isEditable()) ? $nc(this->action)->isEnabled() : false;
}

BasicTextUI$TextActionWrapper::BasicTextUI$TextActionWrapper() {
}

$Class* BasicTextUI$TextActionWrapper::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$TextActionWrapper, name, initialize, &_BasicTextUI$TextActionWrapper_ClassInfo_, allocate$BasicTextUI$TextActionWrapper);
	return class$;
}

$Class* BasicTextUI$TextActionWrapper::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax