#include <javax/swing/plaf/basic/BasicButtonUI$SelectNextBtn.h>

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

$FieldInfo _BasicButtonUI$SelectNextBtn_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicButtonUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicButtonUI$SelectNextBtn, this$0)},
	{}
};

$MethodInfo _BasicButtonUI$SelectNextBtn_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicButtonUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicButtonUI$SelectNextBtn::*)($BasicButtonUI*)>(&BasicButtonUI$SelectNextBtn::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicButtonUI$SelectNextBtn_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicButtonUI$SelectNextBtn", "javax.swing.plaf.basic.BasicButtonUI", "SelectNextBtn", $PRIVATE},
	{}
};

$ClassInfo _BasicButtonUI$SelectNextBtn_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicButtonUI$SelectNextBtn",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicButtonUI$SelectNextBtn_FieldInfo_,
	_BasicButtonUI$SelectNextBtn_MethodInfo_,
	nullptr,
	nullptr,
	_BasicButtonUI$SelectNextBtn_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicButtonUI"
};

$Object* allocate$BasicButtonUI$SelectNextBtn($Class* clazz) {
	return $of($alloc(BasicButtonUI$SelectNextBtn));
}

void BasicButtonUI$SelectNextBtn::init$($BasicButtonUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("Next"_s);
}

void BasicButtonUI$SelectNextBtn::actionPerformed($ActionEvent* e) {
	this->this$0->selectToggleButton(e, true);
}

BasicButtonUI$SelectNextBtn::BasicButtonUI$SelectNextBtn() {
}

$Class* BasicButtonUI$SelectNextBtn::load$($String* name, bool initialize) {
	$loadClass(BasicButtonUI$SelectNextBtn, name, initialize, &_BasicButtonUI$SelectNextBtn_ClassInfo_, allocate$BasicButtonUI$SelectNextBtn);
	return class$;
}

$Class* BasicButtonUI$SelectNextBtn::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax