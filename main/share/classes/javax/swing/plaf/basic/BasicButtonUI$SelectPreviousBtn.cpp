#include <javax/swing/plaf/basic/BasicButtonUI$SelectPreviousBtn.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicButtonUI$SelectPreviousBtn_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicButtonUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicButtonUI$SelectPreviousBtn, this$0)},
	{}
};

$MethodInfo _BasicButtonUI$SelectPreviousBtn_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicButtonUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicButtonUI$SelectPreviousBtn::*)($BasicButtonUI*)>(&BasicButtonUI$SelectPreviousBtn::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicButtonUI$SelectPreviousBtn_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicButtonUI$SelectPreviousBtn", "javax.swing.plaf.basic.BasicButtonUI", "SelectPreviousBtn", $PRIVATE},
	{}
};

$ClassInfo _BasicButtonUI$SelectPreviousBtn_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicButtonUI$SelectPreviousBtn",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicButtonUI$SelectPreviousBtn_FieldInfo_,
	_BasicButtonUI$SelectPreviousBtn_MethodInfo_,
	nullptr,
	nullptr,
	_BasicButtonUI$SelectPreviousBtn_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicButtonUI"
};

$Object* allocate$BasicButtonUI$SelectPreviousBtn($Class* clazz) {
	return $of($alloc(BasicButtonUI$SelectPreviousBtn));
}

void BasicButtonUI$SelectPreviousBtn::init$($BasicButtonUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("Previous"_s);
}

void BasicButtonUI$SelectPreviousBtn::actionPerformed($ActionEvent* e) {
	this->this$0->selectToggleButton(e, false);
}

BasicButtonUI$SelectPreviousBtn::BasicButtonUI$SelectPreviousBtn() {
}

$Class* BasicButtonUI$SelectPreviousBtn::load$($String* name, bool initialize) {
	$loadClass(BasicButtonUI$SelectPreviousBtn, name, initialize, &_BasicButtonUI$SelectPreviousBtn_ClassInfo_, allocate$BasicButtonUI$SelectPreviousBtn);
	return class$;
}

$Class* BasicButtonUI$SelectPreviousBtn::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax