#include <javax/swing/JProgressBar$AccessibleJProgressBar.h>

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
#include <javax/swing/JProgressBar.h>
#include <jcpp.h>

#undef BUSY
#undef HORIZONTAL
#undef PROGRESS_BAR
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
using $JProgressBar = ::javax::swing::JProgressBar;

namespace javax {
	namespace swing {

$FieldInfo _JProgressBar$AccessibleJProgressBar_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JProgressBar;", nullptr, $FINAL | $SYNTHETIC, $field(JProgressBar$AccessibleJProgressBar, this$0)},
	{}
};

$MethodInfo _JProgressBar$AccessibleJProgressBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JProgressBar;)V", nullptr, $PROTECTED, $method(static_cast<void(JProgressBar$AccessibleJProgressBar::*)($JProgressBar*)>(&JProgressBar$AccessibleJProgressBar::init$))},
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

$InnerClassInfo _JProgressBar$AccessibleJProgressBar_InnerClassesInfo_[] = {
	{"javax.swing.JProgressBar$AccessibleJProgressBar", "javax.swing.JProgressBar", "AccessibleJProgressBar", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JProgressBar$AccessibleJProgressBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JProgressBar$AccessibleJProgressBar",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleValue",
	_JProgressBar$AccessibleJProgressBar_FieldInfo_,
	_JProgressBar$AccessibleJProgressBar_MethodInfo_,
	nullptr,
	nullptr,
	_JProgressBar$AccessibleJProgressBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JProgressBar"
};

$Object* allocate$JProgressBar$AccessibleJProgressBar($Class* clazz) {
	return $of($alloc(JProgressBar$AccessibleJProgressBar));
}

int32_t JProgressBar$AccessibleJProgressBar::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JProgressBar$AccessibleJProgressBar::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JProgressBar$AccessibleJProgressBar::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JProgressBar$AccessibleJProgressBar::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JProgressBar$AccessibleJProgressBar::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JProgressBar$AccessibleJProgressBar::init$($JProgressBar* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleStateSet* JProgressBar$AccessibleJProgressBar::getAccessibleStateSet() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleStateSet, states, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	if ($nc($(this->this$0->getModel()))->getValueIsAdjusting()) {
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

$AccessibleRole* JProgressBar$AccessibleJProgressBar::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PROGRESS_BAR;
}

$AccessibleValue* JProgressBar$AccessibleJProgressBar::getAccessibleValue() {
	return this;
}

$Number* JProgressBar$AccessibleJProgressBar::getCurrentAccessibleValue() {
	return $Integer::valueOf(this->this$0->getValue());
}

bool JProgressBar$AccessibleJProgressBar::setCurrentAccessibleValue($Number* n) {
	if (n == nullptr) {
		return false;
	}
	this->this$0->setValue($nc(n)->intValue());
	return true;
}

$Number* JProgressBar$AccessibleJProgressBar::getMinimumAccessibleValue() {
	return $Integer::valueOf(this->this$0->getMinimum());
}

$Number* JProgressBar$AccessibleJProgressBar::getMaximumAccessibleValue() {
	int32_t var$0 = $nc(this->this$0->model)->getMaximum();
	return $Integer::valueOf(var$0 - $nc(this->this$0->model)->getExtent());
}

JProgressBar$AccessibleJProgressBar::JProgressBar$AccessibleJProgressBar() {
}

$Class* JProgressBar$AccessibleJProgressBar::load$($String* name, bool initialize) {
	$loadClass(JProgressBar$AccessibleJProgressBar, name, initialize, &_JProgressBar$AccessibleJProgressBar_ClassInfo_, allocate$JProgressBar$AccessibleJProgressBar);
	return class$;
}

$Class* JProgressBar$AccessibleJProgressBar::class$ = nullptr;

	} // swing
} // javax