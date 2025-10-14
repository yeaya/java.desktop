#include <javax/swing/JCheckBox$AccessibleJCheckBox.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef CHECK_BOX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToggleButton$AccessibleJToggleButton = ::javax::swing::JToggleButton$AccessibleJToggleButton;

namespace javax {
	namespace swing {

$FieldInfo _JCheckBox$AccessibleJCheckBox_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JCheckBox;", nullptr, $FINAL | $SYNTHETIC, $field(JCheckBox$AccessibleJCheckBox, this$0)},
	{}
};

$MethodInfo _JCheckBox$AccessibleJCheckBox_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JCheckBox;)V", nullptr, $PROTECTED, $method(static_cast<void(JCheckBox$AccessibleJCheckBox::*)($JCheckBox*)>(&JCheckBox$AccessibleJCheckBox::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCheckBox$AccessibleJCheckBox_InnerClassesInfo_[] = {
	{"javax.swing.JCheckBox$AccessibleJCheckBox", "javax.swing.JCheckBox", "AccessibleJCheckBox", $PROTECTED},
	{"javax.swing.JToggleButton$AccessibleJToggleButton", "javax.swing.JToggleButton", "AccessibleJToggleButton", $PROTECTED},
	{}
};

$ClassInfo _JCheckBox$AccessibleJCheckBox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JCheckBox$AccessibleJCheckBox",
	"javax.swing.JToggleButton$AccessibleJToggleButton",
	nullptr,
	_JCheckBox$AccessibleJCheckBox_FieldInfo_,
	_JCheckBox$AccessibleJCheckBox_MethodInfo_,
	nullptr,
	nullptr,
	_JCheckBox$AccessibleJCheckBox_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JCheckBox"
};

$Object* allocate$JCheckBox$AccessibleJCheckBox($Class* clazz) {
	return $of($alloc(JCheckBox$AccessibleJCheckBox));
}

void JCheckBox$AccessibleJCheckBox::init$($JCheckBox* this$0) {
	$set(this, this$0, this$0);
	$JToggleButton$AccessibleJToggleButton::init$(this$0);
}

$AccessibleRole* JCheckBox$AccessibleJCheckBox::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::CHECK_BOX;
}

JCheckBox$AccessibleJCheckBox::JCheckBox$AccessibleJCheckBox() {
}

$Class* JCheckBox$AccessibleJCheckBox::load$($String* name, bool initialize) {
	$loadClass(JCheckBox$AccessibleJCheckBox, name, initialize, &_JCheckBox$AccessibleJCheckBox_ClassInfo_, allocate$JCheckBox$AccessibleJCheckBox);
	return class$;
}

$Class* JCheckBox$AccessibleJCheckBox::class$ = nullptr;

	} // swing
} // javax