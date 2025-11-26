#include <javax/swing/JSlider$AccessibleJSlider.h>

#include <java/lang/Number.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

#undef ACCESSIBLE_VALUE_PROPERTY
#undef BUSY
#undef DECREMENT
#undef HORIZONTAL
#undef INCREMENT
#undef SLIDER
#undef VERTICAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JSlider = ::javax::swing::JSlider;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _JSlider$AccessibleJSlider_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JSlider;", nullptr, $FINAL | $SYNTHETIC, $field(JSlider$AccessibleJSlider, this$0)},
	{"oldModelValue", "I", nullptr, $PRIVATE, $field(JSlider$AccessibleJSlider, oldModelValue)},
	{}
};

$MethodInfo _JSlider$AccessibleJSlider_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED, $method(static_cast<void(JSlider$AccessibleJSlider::*)($JSlider*)>(&JSlider$AccessibleJSlider::init$))},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JSlider$AccessibleJSlider_InnerClassesInfo_[] = {
	{"javax.swing.JSlider$AccessibleJSlider", "javax.swing.JSlider", "AccessibleJSlider", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JSlider$AccessibleJSlider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSlider$AccessibleJSlider",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleValue,javax.swing.event.ChangeListener,javax.accessibility.AccessibleAction",
	_JSlider$AccessibleJSlider_FieldInfo_,
	_JSlider$AccessibleJSlider_MethodInfo_,
	nullptr,
	nullptr,
	_JSlider$AccessibleJSlider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSlider"
};

$Object* allocate$JSlider$AccessibleJSlider($Class* clazz) {
	return $of($alloc(JSlider$AccessibleJSlider));
}

int32_t JSlider$AccessibleJSlider::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JSlider$AccessibleJSlider::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JSlider$AccessibleJSlider::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JSlider$AccessibleJSlider::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JSlider$AccessibleJSlider::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JSlider$AccessibleJSlider::init$($JSlider* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	this->oldModelValue = $nc($(this$0->getModel()))->getValue();
	this$0->addChangeListener(this);
}

$AccessibleStateSet* JSlider$AccessibleJSlider::getAccessibleStateSet() {
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

void JSlider$AccessibleJSlider::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t newModelValue = $nc($(this->this$0->getModel()))->getValue();
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
	$var($Object, var$1, $of($Integer::valueOf(this->oldModelValue)));
	firePropertyChange(var$0, var$1, $($Integer::valueOf(newModelValue)));
	this->oldModelValue = newModelValue;
}

$AccessibleRole* JSlider$AccessibleJSlider::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SLIDER;
}

$AccessibleValue* JSlider$AccessibleJSlider::getAccessibleValue() {
	return this;
}

$Number* JSlider$AccessibleJSlider::getCurrentAccessibleValue() {
	return $Integer::valueOf(this->this$0->getValue());
}

bool JSlider$AccessibleJSlider::setCurrentAccessibleValue($Number* n) {
	if (n == nullptr) {
		return false;
	}
	this->this$0->setValue($nc(n)->intValue());
	return true;
}

$Number* JSlider$AccessibleJSlider::getMinimumAccessibleValue() {
	return $Integer::valueOf(this->this$0->getMinimum());
}

$Number* JSlider$AccessibleJSlider::getMaximumAccessibleValue() {
	$var($BoundedRangeModel, model, this->this$0->getModel());
	int32_t var$0 = $nc(model)->getMaximum();
	return $Integer::valueOf(var$0 - model->getExtent());
}

$AccessibleAction* JSlider$AccessibleJSlider::getAccessibleAction() {
	return this;
}

int32_t JSlider$AccessibleJSlider::getAccessibleActionCount() {
	return 2;
}

$String* JSlider$AccessibleJSlider::getAccessibleActionDescription(int32_t i) {
	if (i == 0) {
		$init($AccessibleAction);
		return $AccessibleAction::INCREMENT;
	} else if (i == 1) {
		$init($AccessibleAction);
		return $AccessibleAction::DECREMENT;
	}
	return nullptr;
}

bool JSlider$AccessibleJSlider::doAccessibleAction(int32_t i) {
	if (i < 0 || i > 1) {
		return false;
	}
	int32_t delta = ((i > 0) ? -1 : 1);
	this->this$0->setValue(this->oldModelValue + delta);
	return true;
}

JSlider$AccessibleJSlider::JSlider$AccessibleJSlider() {
}

$Class* JSlider$AccessibleJSlider::load$($String* name, bool initialize) {
	$loadClass(JSlider$AccessibleJSlider, name, initialize, &_JSlider$AccessibleJSlider_ClassInfo_, allocate$JSlider$AccessibleJSlider);
	return class$;
}

$Class* JSlider$AccessibleJSlider::class$ = nullptr;

	} // swing
} // javax