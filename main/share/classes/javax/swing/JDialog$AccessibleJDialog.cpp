#include <javax/swing/JDialog$AccessibleJDialog.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog$AccessibleAWTDialog.h>
#include <java/awt/Dialog.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

#undef ACTIVE
#undef MODAL
#undef RESIZABLE

using $Dialog = ::java::awt::Dialog;
using $Dialog$AccessibleAWTDialog = ::java::awt::Dialog$AccessibleAWTDialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JDialog = ::javax::swing::JDialog;

namespace javax {
	namespace swing {

$FieldInfo _JDialog$AccessibleJDialog_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(JDialog$AccessibleJDialog, this$0)},
	{}
};

$MethodInfo _JDialog$AccessibleJDialog_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PROTECTED, $method(static_cast<void(JDialog$AccessibleJDialog::*)($JDialog*)>(&JDialog$AccessibleJDialog::init$))},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JDialog$AccessibleJDialog_InnerClassesInfo_[] = {
	{"javax.swing.JDialog$AccessibleJDialog", "javax.swing.JDialog", "AccessibleJDialog", $PROTECTED},
	{"java.awt.Dialog$AccessibleAWTDialog", "java.awt.Dialog", "AccessibleAWTDialog", $PROTECTED},
	{}
};

$ClassInfo _JDialog$AccessibleJDialog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JDialog$AccessibleJDialog",
	"java.awt.Dialog$AccessibleAWTDialog",
	nullptr,
	_JDialog$AccessibleJDialog_FieldInfo_,
	_JDialog$AccessibleJDialog_MethodInfo_,
	nullptr,
	nullptr,
	_JDialog$AccessibleJDialog_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JDialog"
};

$Object* allocate$JDialog$AccessibleJDialog($Class* clazz) {
	return $of($alloc(JDialog$AccessibleJDialog));
}

void JDialog$AccessibleJDialog::init$($JDialog* this$0) {
	$set(this, this$0, this$0);
	$Dialog$AccessibleAWTDialog::init$(this$0);
}

$String* JDialog$AccessibleJDialog::getAccessibleName() {
	if (this->accessibleName != nullptr) {
		return this->accessibleName;
	} else if (this->this$0->getTitle() == nullptr) {
		return $Dialog$AccessibleAWTDialog::getAccessibleName();
	} else {
		return this->this$0->getTitle();
	}
}

$AccessibleStateSet* JDialog$AccessibleJDialog::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Dialog$AccessibleAWTDialog::getAccessibleStateSet());
	if (this->this$0->isResizable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::RESIZABLE);
	}
	if (this->this$0->getFocusOwner() != nullptr) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	if (this->this$0->isModal()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::MODAL);
	}
	return states;
}

JDialog$AccessibleJDialog::JDialog$AccessibleJDialog() {
}

$Class* JDialog$AccessibleJDialog::load$($String* name, bool initialize) {
	$loadClass(JDialog$AccessibleJDialog, name, initialize, &_JDialog$AccessibleJDialog_ClassInfo_, allocate$JDialog$AccessibleJDialog);
	return class$;
}

$Class* JDialog$AccessibleJDialog::class$ = nullptr;

	} // swing
} // javax