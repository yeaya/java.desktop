#include <javax/swing/JRadioButton$AccessibleJRadioButton.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef RADIO_BUTTON

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToggleButton$AccessibleJToggleButton = ::javax::swing::JToggleButton$AccessibleJToggleButton;

namespace javax {
	namespace swing {

$FieldInfo _JRadioButton$AccessibleJRadioButton_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JRadioButton;", nullptr, $FINAL | $SYNTHETIC, $field(JRadioButton$AccessibleJRadioButton, this$0)},
	{}
};

$MethodInfo _JRadioButton$AccessibleJRadioButton_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JRadioButton;)V", nullptr, $PROTECTED, $method(static_cast<void(JRadioButton$AccessibleJRadioButton::*)($JRadioButton*)>(&JRadioButton$AccessibleJRadioButton::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRadioButton$AccessibleJRadioButton_InnerClassesInfo_[] = {
	{"javax.swing.JRadioButton$AccessibleJRadioButton", "javax.swing.JRadioButton", "AccessibleJRadioButton", $PROTECTED},
	{"javax.swing.JToggleButton$AccessibleJToggleButton", "javax.swing.JToggleButton", "AccessibleJToggleButton", $PROTECTED},
	{}
};

$ClassInfo _JRadioButton$AccessibleJRadioButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JRadioButton$AccessibleJRadioButton",
	"javax.swing.JToggleButton$AccessibleJToggleButton",
	nullptr,
	_JRadioButton$AccessibleJRadioButton_FieldInfo_,
	_JRadioButton$AccessibleJRadioButton_MethodInfo_,
	nullptr,
	nullptr,
	_JRadioButton$AccessibleJRadioButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JRadioButton"
};

$Object* allocate$JRadioButton$AccessibleJRadioButton($Class* clazz) {
	return $of($alloc(JRadioButton$AccessibleJRadioButton));
}

void JRadioButton$AccessibleJRadioButton::init$($JRadioButton* this$0) {
	$set(this, this$0, this$0);
	$JToggleButton$AccessibleJToggleButton::init$(this$0);
}

$AccessibleRole* JRadioButton$AccessibleJRadioButton::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::RADIO_BUTTON;
}

JRadioButton$AccessibleJRadioButton::JRadioButton$AccessibleJRadioButton() {
}

$Class* JRadioButton$AccessibleJRadioButton::load$($String* name, bool initialize) {
	$loadClass(JRadioButton$AccessibleJRadioButton, name, initialize, &_JRadioButton$AccessibleJRadioButton_ClassInfo_, allocate$JRadioButton$AccessibleJRadioButton);
	return class$;
}

$Class* JRadioButton$AccessibleJRadioButton::class$ = nullptr;

	} // swing
} // javax