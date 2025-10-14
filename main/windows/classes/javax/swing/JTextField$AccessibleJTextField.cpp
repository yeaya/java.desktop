#include <javax/swing/JTextField$AccessibleJTextField.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef SINGLE_LINE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;

namespace javax {
	namespace swing {

$FieldInfo _JTextField$AccessibleJTextField_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTextField;", nullptr, $FINAL | $SYNTHETIC, $field(JTextField$AccessibleJTextField, this$0)},
	{}
};

$MethodInfo _JTextField$AccessibleJTextField_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTextField;)V", nullptr, $PROTECTED, $method(static_cast<void(JTextField$AccessibleJTextField::*)($JTextField*)>(&JTextField$AccessibleJTextField::init$))},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextField$AccessibleJTextField_InnerClassesInfo_[] = {
	{"javax.swing.JTextField$AccessibleJTextField", "javax.swing.JTextField", "AccessibleJTextField", $PROTECTED},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
	{}
};

$ClassInfo _JTextField$AccessibleJTextField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTextField$AccessibleJTextField",
	"javax.swing.text.JTextComponent$AccessibleJTextComponent",
	nullptr,
	_JTextField$AccessibleJTextField_FieldInfo_,
	_JTextField$AccessibleJTextField_MethodInfo_,
	nullptr,
	nullptr,
	_JTextField$AccessibleJTextField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTextField"
};

$Object* allocate$JTextField$AccessibleJTextField($Class* clazz) {
	return $of($alloc(JTextField$AccessibleJTextField));
}

void JTextField$AccessibleJTextField::init$($JTextField* this$0) {
	$set(this, this$0, this$0);
	$JTextComponent$AccessibleJTextComponent::init$(this$0);
}

$AccessibleStateSet* JTextField$AccessibleJTextField::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JTextComponent$AccessibleJTextComponent::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::SINGLE_LINE);
	return states;
}

JTextField$AccessibleJTextField::JTextField$AccessibleJTextField() {
}

$Class* JTextField$AccessibleJTextField::load$($String* name, bool initialize) {
	$loadClass(JTextField$AccessibleJTextField, name, initialize, &_JTextField$AccessibleJTextField_ClassInfo_, allocate$JTextField$AccessibleJTextField);
	return class$;
}

$Class* JTextField$AccessibleJTextField::class$ = nullptr;

	} // swing
} // javax