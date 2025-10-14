#include <javax/swing/JSplitPane$AccessibleJSplitPane.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef SPLIT_PANE
#undef VERTICAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;

namespace javax {
	namespace swing {

$FieldInfo _JSplitPane$AccessibleJSplitPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JSplitPane;", nullptr, $FINAL | $SYNTHETIC, $field(JSplitPane$AccessibleJSplitPane, this$0)},
	{}
};

$MethodInfo _JSplitPane$AccessibleJSplitPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JSplitPane;)V", nullptr, $PROTECTED, $method(static_cast<void(JSplitPane$AccessibleJSplitPane::*)($JSplitPane*)>(&JSplitPane$AccessibleJSplitPane::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JSplitPane$AccessibleJSplitPane_InnerClassesInfo_[] = {
	{"javax.swing.JSplitPane$AccessibleJSplitPane", "javax.swing.JSplitPane", "AccessibleJSplitPane", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JSplitPane$AccessibleJSplitPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSplitPane$AccessibleJSplitPane",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleValue",
	_JSplitPane$AccessibleJSplitPane_FieldInfo_,
	_JSplitPane$AccessibleJSplitPane_MethodInfo_,
	nullptr,
	nullptr,
	_JSplitPane$AccessibleJSplitPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSplitPane"
};

$Object* allocate$JSplitPane$AccessibleJSplitPane($Class* clazz) {
	return $of($alloc(JSplitPane$AccessibleJSplitPane));
}

int32_t JSplitPane$AccessibleJSplitPane::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JSplitPane$AccessibleJSplitPane::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JSplitPane$AccessibleJSplitPane::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JSplitPane$AccessibleJSplitPane::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JSplitPane$AccessibleJSplitPane::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JSplitPane$AccessibleJSplitPane::init$($JSplitPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleStateSet* JSplitPane$AccessibleJSplitPane::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	if (this->this$0->getOrientation() == 0) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::VERTICAL);
	} else {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::HORIZONTAL);
	}
	return states;
}

$AccessibleValue* JSplitPane$AccessibleJSplitPane::getAccessibleValue() {
	return this;
}

$Number* JSplitPane$AccessibleJSplitPane::getCurrentAccessibleValue() {
	return $Integer::valueOf(this->this$0->getDividerLocation());
}

bool JSplitPane$AccessibleJSplitPane::setCurrentAccessibleValue($Number* n) {
	if (n == nullptr) {
		return false;
	}
	this->this$0->setDividerLocation($nc(n)->intValue());
	return true;
}

$Number* JSplitPane$AccessibleJSplitPane::getMinimumAccessibleValue() {
	return $Integer::valueOf($nc($($cast($SplitPaneUI, this->this$0->getUI())))->getMinimumDividerLocation(this->this$0));
}

$Number* JSplitPane$AccessibleJSplitPane::getMaximumAccessibleValue() {
	return $Integer::valueOf($nc($($cast($SplitPaneUI, this->this$0->getUI())))->getMaximumDividerLocation(this->this$0));
}

$AccessibleRole* JSplitPane$AccessibleJSplitPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SPLIT_PANE;
}

JSplitPane$AccessibleJSplitPane::JSplitPane$AccessibleJSplitPane() {
}

$Class* JSplitPane$AccessibleJSplitPane::load$($String* name, bool initialize) {
	$loadClass(JSplitPane$AccessibleJSplitPane, name, initialize, &_JSplitPane$AccessibleJSplitPane_ClassInfo_, allocate$JSplitPane$AccessibleJSplitPane);
	return class$;
}

$Class* JSplitPane$AccessibleJSplitPane::class$ = nullptr;

	} // swing
} // javax