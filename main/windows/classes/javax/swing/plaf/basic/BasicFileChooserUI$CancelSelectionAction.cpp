#include <javax/swing/plaf/basic/BasicFileChooserUI$CancelSelectionAction.h>

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
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$CancelSelectionAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$CancelSelectionAction, this$0)},
	{}
};

$MethodInfo _BasicFileChooserUI$CancelSelectionAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicFileChooserUI$CancelSelectionAction::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$CancelSelectionAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$CancelSelectionAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$CancelSelectionAction", "javax.swing.plaf.basic.BasicFileChooserUI", "CancelSelectionAction", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$CancelSelectionAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$CancelSelectionAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicFileChooserUI$CancelSelectionAction_FieldInfo_,
	_BasicFileChooserUI$CancelSelectionAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$CancelSelectionAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$CancelSelectionAction($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$CancelSelectionAction));
}

void BasicFileChooserUI$CancelSelectionAction::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicFileChooserUI$CancelSelectionAction::actionPerformed($ActionEvent* e) {
	$nc($(this->this$0->getFileChooser()))->cancelSelection();
}

BasicFileChooserUI$CancelSelectionAction::BasicFileChooserUI$CancelSelectionAction() {
}

$Class* BasicFileChooserUI$CancelSelectionAction::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$CancelSelectionAction, name, initialize, &_BasicFileChooserUI$CancelSelectionAction_ClassInfo_, allocate$BasicFileChooserUI$CancelSelectionAction);
	return class$;
}

$Class* BasicFileChooserUI$CancelSelectionAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax