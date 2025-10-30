#include <java/awt/Dialog$AccessibleAWTDialog.h>

#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Window.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef ACTIVE
#undef DIALOG
#undef MODAL
#undef RESIZABLE

using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Window = ::java::awt::Window;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

$FieldInfo _Dialog$AccessibleAWTDialog_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Dialog;", nullptr, $FINAL | $SYNTHETIC, $field(Dialog$AccessibleAWTDialog, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Dialog$AccessibleAWTDialog, serialVersionUID)},
	{}
};

$MethodInfo _Dialog$AccessibleAWTDialog_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Dialog;)V", nullptr, $PROTECTED, $method(static_cast<void(Dialog$AccessibleAWTDialog::*)($Dialog*)>(&Dialog$AccessibleAWTDialog::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Dialog$AccessibleAWTDialog_InnerClassesInfo_[] = {
	{"java.awt.Dialog$AccessibleAWTDialog", "java.awt.Dialog", "AccessibleAWTDialog", $PROTECTED},
	{"java.awt.Window$AccessibleAWTWindow", "java.awt.Window", "AccessibleAWTWindow", $PROTECTED},
	{}
};

$ClassInfo _Dialog$AccessibleAWTDialog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Dialog$AccessibleAWTDialog",
	"java.awt.Window$AccessibleAWTWindow",
	nullptr,
	_Dialog$AccessibleAWTDialog_FieldInfo_,
	_Dialog$AccessibleAWTDialog_MethodInfo_,
	nullptr,
	nullptr,
	_Dialog$AccessibleAWTDialog_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Dialog"
};

$Object* allocate$Dialog$AccessibleAWTDialog($Class* clazz) {
	return $of($alloc(Dialog$AccessibleAWTDialog));
}

void Dialog$AccessibleAWTDialog::init$($Dialog* this$0) {
	$set(this, this$0, this$0);
	$Window$AccessibleAWTWindow::init$(this$0);
}

$AccessibleRole* Dialog$AccessibleAWTDialog::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::DIALOG;
}

$AccessibleStateSet* Dialog$AccessibleAWTDialog::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Window$AccessibleAWTWindow::getAccessibleStateSet());
	if (this->this$0->getFocusOwner() != nullptr) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	if (this->this$0->isModal()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::MODAL);
	}
	if (this->this$0->isResizable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::RESIZABLE);
	}
	return states;
}

Dialog$AccessibleAWTDialog::Dialog$AccessibleAWTDialog() {
}

$Class* Dialog$AccessibleAWTDialog::load$($String* name, bool initialize) {
	$loadClass(Dialog$AccessibleAWTDialog, name, initialize, &_Dialog$AccessibleAWTDialog_ClassInfo_, allocate$Dialog$AccessibleAWTDialog);
	return class$;
}

$Class* Dialog$AccessibleAWTDialog::class$ = nullptr;

	} // awt
} // java