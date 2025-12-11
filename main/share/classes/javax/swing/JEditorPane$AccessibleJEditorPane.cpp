#include <javax/swing/JEditorPane$AccessibleJEditorPane.h>

#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ACCESSIBLE_DESCRIPTION_PROPERTY
#undef MULTI_LINE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$AccessibleJEditorPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$AccessibleJEditorPane, this$0)},
	{}
};

$MethodInfo _JEditorPane$AccessibleJEditorPane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane;)V", nullptr, $PROTECTED, $method(static_cast<void(JEditorPane$AccessibleJEditorPane::*)($JEditorPane*)>(&JEditorPane$AccessibleJEditorPane::init$))},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JEditorPane$AccessibleJEditorPane_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$AccessibleJEditorPane", "javax.swing.JEditorPane", "AccessibleJEditorPane", $PROTECTED},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
	{}
};

$ClassInfo _JEditorPane$AccessibleJEditorPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JEditorPane$AccessibleJEditorPane",
	"javax.swing.text.JTextComponent$AccessibleJTextComponent",
	nullptr,
	_JEditorPane$AccessibleJEditorPane_FieldInfo_,
	_JEditorPane$AccessibleJEditorPane_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPane$AccessibleJEditorPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$AccessibleJEditorPane($Class* clazz) {
	return $of($alloc(JEditorPane$AccessibleJEditorPane));
}

void JEditorPane$AccessibleJEditorPane::init$($JEditorPane* this$0) {
	$set(this, this$0, this$0);
	$JTextComponent$AccessibleJTextComponent::init$(this$0);
}

$String* JEditorPane$AccessibleJEditorPane::getAccessibleDescription() {
	$var($String, description, this->accessibleDescription);
	if (description == nullptr) {
		$init($AccessibleContext);
		$assign(description, $cast($String, this->this$0->getClientProperty($AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY)));
	}
	if (description == nullptr) {
		$assign(description, this->this$0->getContentType());
	}
	return description;
}

$AccessibleStateSet* JEditorPane$AccessibleJEditorPane::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JTextComponent$AccessibleJTextComponent::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::MULTI_LINE);
	return states;
}

JEditorPane$AccessibleJEditorPane::JEditorPane$AccessibleJEditorPane() {
}

$Class* JEditorPane$AccessibleJEditorPane::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$AccessibleJEditorPane, name, initialize, &_JEditorPane$AccessibleJEditorPane_ClassInfo_, allocate$JEditorPane$AccessibleJEditorPane);
	return class$;
}

$Class* JEditorPane$AccessibleJEditorPane::class$ = nullptr;

	} // swing
} // javax