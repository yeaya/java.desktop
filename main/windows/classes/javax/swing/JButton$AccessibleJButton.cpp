#include <javax/swing/JButton$AccessibleJButton.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

#undef PUSH_BUTTON

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $JButton = ::javax::swing::JButton;

namespace javax {
	namespace swing {

$FieldInfo _JButton$AccessibleJButton_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(JButton$AccessibleJButton, this$0)},
	{}
};

$MethodInfo _JButton$AccessibleJButton_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JButton;)V", nullptr, $PROTECTED, $method(static_cast<void(JButton$AccessibleJButton::*)($JButton*)>(&JButton$AccessibleJButton::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JButton$AccessibleJButton_InnerClassesInfo_[] = {
	{"javax.swing.JButton$AccessibleJButton", "javax.swing.JButton", "AccessibleJButton", $PROTECTED},
	{"javax.swing.AbstractButton$AccessibleAbstractButton", "javax.swing.AbstractButton", "AccessibleAbstractButton", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _JButton$AccessibleJButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JButton$AccessibleJButton",
	"javax.swing.AbstractButton$AccessibleAbstractButton",
	nullptr,
	_JButton$AccessibleJButton_FieldInfo_,
	_JButton$AccessibleJButton_MethodInfo_,
	nullptr,
	nullptr,
	_JButton$AccessibleJButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JButton"
};

$Object* allocate$JButton$AccessibleJButton($Class* clazz) {
	return $of($alloc(JButton$AccessibleJButton));
}

void JButton$AccessibleJButton::init$($JButton* this$0) {
	$set(this, this$0, this$0);
	$AbstractButton$AccessibleAbstractButton::init$(this$0);
}

$AccessibleRole* JButton$AccessibleJButton::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PUSH_BUTTON;
}

JButton$AccessibleJButton::JButton$AccessibleJButton() {
}

$Class* JButton$AccessibleJButton::load$($String* name, bool initialize) {
	$loadClass(JButton$AccessibleJButton, name, initialize, &_JButton$AccessibleJButton_ClassInfo_, allocate$JButton$AccessibleJButton);
	return class$;
}

$Class* JButton$AccessibleJButton::class$ = nullptr;

	} // swing
} // javax