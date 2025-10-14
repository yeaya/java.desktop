#include <javax/swing/JScrollBar$AccessibleJScrollBar.h>

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
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

#undef BUSY
#undef HORIZONTAL
#undef SCROLL_BAR
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
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JScrollBar = ::javax::swing::JScrollBar;

namespace javax {
	namespace swing {

$FieldInfo _JScrollBar$AccessibleJScrollBar_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JScrollBar;", nullptr, $FINAL | $SYNTHETIC, $field(JScrollBar$AccessibleJScrollBar, this$0)},
	{}
};

$MethodInfo _JScrollBar$AccessibleJScrollBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JScrollBar;)V", nullptr, $PROTECTED, $method(static_cast<void(JScrollBar$AccessibleJScrollBar::*)($JScrollBar*)>(&JScrollBar$AccessibleJScrollBar::init$))},
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

$InnerClassInfo _JScrollBar$AccessibleJScrollBar_InnerClassesInfo_[] = {
	{"javax.swing.JScrollBar$AccessibleJScrollBar", "javax.swing.JScrollBar", "AccessibleJScrollBar", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JScrollBar$AccessibleJScrollBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JScrollBar$AccessibleJScrollBar",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleValue",
	_JScrollBar$AccessibleJScrollBar_FieldInfo_,
	_JScrollBar$AccessibleJScrollBar_MethodInfo_,
	nullptr,
	nullptr,
	_JScrollBar$AccessibleJScrollBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JScrollBar"
};

$Object* allocate$JScrollBar$AccessibleJScrollBar($Class* clazz) {
	return $of($alloc(JScrollBar$AccessibleJScrollBar));
}

int32_t JScrollBar$AccessibleJScrollBar::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JScrollBar$AccessibleJScrollBar::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JScrollBar$AccessibleJScrollBar::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JScrollBar$AccessibleJScrollBar::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JScrollBar$AccessibleJScrollBar::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JScrollBar$AccessibleJScrollBar::init$($JScrollBar* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleStateSet* JScrollBar$AccessibleJScrollBar::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	if (this->this$0->getValueIsAdjusting()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::BUSY);
	}
	if (this->this$0->getOrientation() == 1) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::VERTICAL);
	} else {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::HORIZONTAL);
	}
	return states;
}

$AccessibleRole* JScrollBar$AccessibleJScrollBar::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SCROLL_BAR;
}

$AccessibleValue* JScrollBar$AccessibleJScrollBar::getAccessibleValue() {
	return this;
}

$Number* JScrollBar$AccessibleJScrollBar::getCurrentAccessibleValue() {
	return $Integer::valueOf(this->this$0->getValue());
}

bool JScrollBar$AccessibleJScrollBar::setCurrentAccessibleValue($Number* n) {
	if (n == nullptr) {
		return false;
	}
	this->this$0->setValue($nc(n)->intValue());
	return true;
}

$Number* JScrollBar$AccessibleJScrollBar::getMinimumAccessibleValue() {
	return $Integer::valueOf(this->this$0->getMinimum());
}

$Number* JScrollBar$AccessibleJScrollBar::getMaximumAccessibleValue() {
	int32_t var$0 = $nc(this->this$0->model)->getMaximum();
	return $Integer::valueOf(var$0 - $nc(this->this$0->model)->getExtent());
}

JScrollBar$AccessibleJScrollBar::JScrollBar$AccessibleJScrollBar() {
}

$Class* JScrollBar$AccessibleJScrollBar::load$($String* name, bool initialize) {
	$loadClass(JScrollBar$AccessibleJScrollBar, name, initialize, &_JScrollBar$AccessibleJScrollBar_ClassInfo_, allocate$JScrollBar$AccessibleJScrollBar);
	return class$;
}

$Class* JScrollBar$AccessibleJScrollBar::class$ = nullptr;

	} // swing
} // javax