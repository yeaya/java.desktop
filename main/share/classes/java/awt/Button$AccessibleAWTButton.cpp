#include <java/awt/Button$AccessibleAWTButton.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Button.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Number.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleValue.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef PUSH_BUTTON

using $AWTEvent = ::java::awt::AWTEvent;
using $Button = ::java::awt::Button;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $EventQueue = ::java::awt::EventQueue;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;

namespace java {
	namespace awt {

$FieldInfo _Button$AccessibleAWTButton_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Button;", nullptr, $FINAL | $SYNTHETIC, $field(Button$AccessibleAWTButton, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Button$AccessibleAWTButton, serialVersionUID)},
	{}
};

$MethodInfo _Button$AccessibleAWTButton_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Button;)V", nullptr, $PROTECTED, $method(static_cast<void(Button$AccessibleAWTButton::*)($Button*)>(&Button$AccessibleAWTButton::init$))},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Button$AccessibleAWTButton_InnerClassesInfo_[] = {
	{"java.awt.Button$AccessibleAWTButton", "java.awt.Button", "AccessibleAWTButton", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _Button$AccessibleAWTButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Button$AccessibleAWTButton",
	"java.awt.Component$AccessibleAWTComponent",
	"javax.accessibility.AccessibleAction,javax.accessibility.AccessibleValue",
	_Button$AccessibleAWTButton_FieldInfo_,
	_Button$AccessibleAWTButton_MethodInfo_,
	nullptr,
	nullptr,
	_Button$AccessibleAWTButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Button"
};

$Object* allocate$Button$AccessibleAWTButton($Class* clazz) {
	return $of($alloc(Button$AccessibleAWTButton));
}

int32_t Button$AccessibleAWTButton::hashCode() {
	 return this->$Component$AccessibleAWTComponent::hashCode();
}

bool Button$AccessibleAWTButton::equals(Object$* arg0) {
	 return this->$Component$AccessibleAWTComponent::equals(arg0);
}

$Object* Button$AccessibleAWTButton::clone() {
	 return this->$Component$AccessibleAWTComponent::clone();
}

$String* Button$AccessibleAWTButton::toString() {
	 return this->$Component$AccessibleAWTComponent::toString();
}

void Button$AccessibleAWTButton::finalize() {
	this->$Component$AccessibleAWTComponent::finalize();
}

void Button$AccessibleAWTButton::init$($Button* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
}

$String* Button$AccessibleAWTButton::getAccessibleName() {
	if (this->accessibleName != nullptr) {
		return this->accessibleName;
	} else if (this->this$0->getLabel() == nullptr) {
		return $Component$AccessibleAWTComponent::getAccessibleName();
	} else {
		return this->this$0->getLabel();
	}
}

$AccessibleAction* Button$AccessibleAWTButton::getAccessibleAction() {
	return this;
}

$AccessibleValue* Button$AccessibleAWTButton::getAccessibleValue() {
	return this;
}

int32_t Button$AccessibleAWTButton::getAccessibleActionCount() {
	return 1;
}

$String* Button$AccessibleAWTButton::getAccessibleActionDescription(int32_t i) {
	if (i == 0) {
		return "click"_s;
	} else {
		return nullptr;
	}
}

bool Button$AccessibleAWTButton::doAccessibleAction(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (i == 0) {
		$nc($($Toolkit::getEventQueue()))->postEvent($$new($ActionEvent, this->this$0, $ActionEvent::ACTION_PERFORMED, $(this->this$0->getActionCommand())));
		return true;
	} else {
		return false;
	}
}

$Number* Button$AccessibleAWTButton::getCurrentAccessibleValue() {
	return $Integer::valueOf(0);
}

bool Button$AccessibleAWTButton::setCurrentAccessibleValue($Number* n) {
	return false;
}

$Number* Button$AccessibleAWTButton::getMinimumAccessibleValue() {
	return $Integer::valueOf(0);
}

$Number* Button$AccessibleAWTButton::getMaximumAccessibleValue() {
	return $Integer::valueOf(0);
}

$AccessibleRole* Button$AccessibleAWTButton::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PUSH_BUTTON;
}

Button$AccessibleAWTButton::Button$AccessibleAWTButton() {
}

$Class* Button$AccessibleAWTButton::load$($String* name, bool initialize) {
	$loadClass(Button$AccessibleAWTButton, name, initialize, &_Button$AccessibleAWTButton_ClassInfo_, allocate$Button$AccessibleAWTButton);
	return class$;
}

$Class* Button$AccessibleAWTButton::class$ = nullptr;

	} // awt
} // java