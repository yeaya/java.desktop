#include <java/awt/Checkbox$AccessibleAWTCheckbox.h>

#include <java/awt/Checkbox.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/lang/Number.h>
#include <java/util/EventObject.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleValue.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef CHECKED
#undef CHECK_BOX

using $Checkbox = ::java::awt::Checkbox;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $EventObject = ::java::util::EventObject;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;

namespace java {
	namespace awt {

$FieldInfo _Checkbox$AccessibleAWTCheckbox_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Checkbox;", nullptr, $FINAL | $SYNTHETIC, $field(Checkbox$AccessibleAWTCheckbox, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Checkbox$AccessibleAWTCheckbox, serialVersionUID)},
	{}
};

$MethodInfo _Checkbox$AccessibleAWTCheckbox_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Checkbox;)V", nullptr, $PUBLIC, $method(static_cast<void(Checkbox$AccessibleAWTCheckbox::*)($Checkbox*)>(&Checkbox$AccessibleAWTCheckbox::init$))},
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
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Checkbox$AccessibleAWTCheckbox_InnerClassesInfo_[] = {
	{"java.awt.Checkbox$AccessibleAWTCheckbox", "java.awt.Checkbox", "AccessibleAWTCheckbox", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _Checkbox$AccessibleAWTCheckbox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Checkbox$AccessibleAWTCheckbox",
	"java.awt.Component$AccessibleAWTComponent",
	"java.awt.event.ItemListener,javax.accessibility.AccessibleAction,javax.accessibility.AccessibleValue",
	_Checkbox$AccessibleAWTCheckbox_FieldInfo_,
	_Checkbox$AccessibleAWTCheckbox_MethodInfo_,
	nullptr,
	nullptr,
	_Checkbox$AccessibleAWTCheckbox_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Checkbox"
};

$Object* allocate$Checkbox$AccessibleAWTCheckbox($Class* clazz) {
	return $of($alloc(Checkbox$AccessibleAWTCheckbox));
}

int32_t Checkbox$AccessibleAWTCheckbox::hashCode() {
	 return this->$Component$AccessibleAWTComponent::hashCode();
}

bool Checkbox$AccessibleAWTCheckbox::equals(Object$* arg0) {
	 return this->$Component$AccessibleAWTComponent::equals(arg0);
}

$Object* Checkbox$AccessibleAWTCheckbox::clone() {
	 return this->$Component$AccessibleAWTComponent::clone();
}

$String* Checkbox$AccessibleAWTCheckbox::toString() {
	 return this->$Component$AccessibleAWTComponent::toString();
}

void Checkbox$AccessibleAWTCheckbox::finalize() {
	this->$Component$AccessibleAWTComponent::finalize();
}

void Checkbox$AccessibleAWTCheckbox::init$($Checkbox* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
	this$0->addItemListener(this);
}

void Checkbox$AccessibleAWTCheckbox::itemStateChanged($ItemEvent* e) {
	$var($Checkbox, cb, $cast($Checkbox, $nc(e)->getSource()));
	if (this->this$0->accessibleContext != nullptr) {
		if ($nc(cb)->getState()) {
			$init($AccessibleContext);
			$init($AccessibleState);
			$nc(this->this$0->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::CHECKED);
		} else {
			$init($AccessibleContext);
			$init($AccessibleState);
			$nc(this->this$0->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::CHECKED, nullptr);
		}
	}
}

$AccessibleAction* Checkbox$AccessibleAWTCheckbox::getAccessibleAction() {
	return this;
}

$AccessibleValue* Checkbox$AccessibleAWTCheckbox::getAccessibleValue() {
	return this;
}

int32_t Checkbox$AccessibleAWTCheckbox::getAccessibleActionCount() {
	return 0;
}

$String* Checkbox$AccessibleAWTCheckbox::getAccessibleActionDescription(int32_t i) {
	return nullptr;
}

bool Checkbox$AccessibleAWTCheckbox::doAccessibleAction(int32_t i) {
	return false;
}

$Number* Checkbox$AccessibleAWTCheckbox::getCurrentAccessibleValue() {
	return nullptr;
}

bool Checkbox$AccessibleAWTCheckbox::setCurrentAccessibleValue($Number* n) {
	return false;
}

$Number* Checkbox$AccessibleAWTCheckbox::getMinimumAccessibleValue() {
	return nullptr;
}

$Number* Checkbox$AccessibleAWTCheckbox::getMaximumAccessibleValue() {
	return nullptr;
}

$AccessibleRole* Checkbox$AccessibleAWTCheckbox::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::CHECK_BOX;
}

$AccessibleStateSet* Checkbox$AccessibleAWTCheckbox::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Component$AccessibleAWTComponent::getAccessibleStateSet());
	if (this->this$0->getState()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::CHECKED);
	}
	return states;
}

Checkbox$AccessibleAWTCheckbox::Checkbox$AccessibleAWTCheckbox() {
}

$Class* Checkbox$AccessibleAWTCheckbox::load$($String* name, bool initialize) {
	$loadClass(Checkbox$AccessibleAWTCheckbox, name, initialize, &_Checkbox$AccessibleAWTCheckbox_ClassInfo_, allocate$Checkbox$AccessibleAWTCheckbox);
	return class$;
}

$Class* Checkbox$AccessibleAWTCheckbox::class$ = nullptr;

	} // awt
} // java