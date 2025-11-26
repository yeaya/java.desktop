#include <java/awt/Scrollbar$AccessibleAWTScrollBar.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Scrollbar.h>
#include <java/lang/Number.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleValue.h>
#include <jcpp.h>

#undef BUSY
#undef HORIZONTAL
#undef SCROLL_BAR
#undef VERTICAL

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Scrollbar = ::java::awt::Scrollbar;
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

namespace java {
	namespace awt {

$FieldInfo _Scrollbar$AccessibleAWTScrollBar_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Scrollbar;", nullptr, $FINAL | $SYNTHETIC, $field(Scrollbar$AccessibleAWTScrollBar, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Scrollbar$AccessibleAWTScrollBar, serialVersionUID)},
	{}
};

$MethodInfo _Scrollbar$AccessibleAWTScrollBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Scrollbar;)V", nullptr, $PROTECTED, $method(static_cast<void(Scrollbar$AccessibleAWTScrollBar::*)($Scrollbar*)>(&Scrollbar$AccessibleAWTScrollBar::init$))},
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

$InnerClassInfo _Scrollbar$AccessibleAWTScrollBar_InnerClassesInfo_[] = {
	{"java.awt.Scrollbar$AccessibleAWTScrollBar", "java.awt.Scrollbar", "AccessibleAWTScrollBar", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _Scrollbar$AccessibleAWTScrollBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Scrollbar$AccessibleAWTScrollBar",
	"java.awt.Component$AccessibleAWTComponent",
	"javax.accessibility.AccessibleValue",
	_Scrollbar$AccessibleAWTScrollBar_FieldInfo_,
	_Scrollbar$AccessibleAWTScrollBar_MethodInfo_,
	nullptr,
	nullptr,
	_Scrollbar$AccessibleAWTScrollBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Scrollbar"
};

$Object* allocate$Scrollbar$AccessibleAWTScrollBar($Class* clazz) {
	return $of($alloc(Scrollbar$AccessibleAWTScrollBar));
}

int32_t Scrollbar$AccessibleAWTScrollBar::hashCode() {
	 return this->$Component$AccessibleAWTComponent::hashCode();
}

bool Scrollbar$AccessibleAWTScrollBar::equals(Object$* arg0) {
	 return this->$Component$AccessibleAWTComponent::equals(arg0);
}

$Object* Scrollbar$AccessibleAWTScrollBar::clone() {
	 return this->$Component$AccessibleAWTComponent::clone();
}

$String* Scrollbar$AccessibleAWTScrollBar::toString() {
	 return this->$Component$AccessibleAWTComponent::toString();
}

void Scrollbar$AccessibleAWTScrollBar::finalize() {
	this->$Component$AccessibleAWTComponent::finalize();
}

void Scrollbar$AccessibleAWTScrollBar::init$($Scrollbar* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
}

$AccessibleStateSet* Scrollbar$AccessibleAWTScrollBar::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Component$AccessibleAWTComponent::getAccessibleStateSet());
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

$AccessibleRole* Scrollbar$AccessibleAWTScrollBar::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SCROLL_BAR;
}

$AccessibleValue* Scrollbar$AccessibleAWTScrollBar::getAccessibleValue() {
	return this;
}

$Number* Scrollbar$AccessibleAWTScrollBar::getCurrentAccessibleValue() {
	return $Integer::valueOf(this->this$0->getValue());
}

bool Scrollbar$AccessibleAWTScrollBar::setCurrentAccessibleValue($Number* n) {
	if ($instanceOf($Integer, n)) {
		this->this$0->setValue($nc(n)->intValue());
		return true;
	} else {
		return false;
	}
}

$Number* Scrollbar$AccessibleAWTScrollBar::getMinimumAccessibleValue() {
	return $Integer::valueOf(this->this$0->getMinimum());
}

$Number* Scrollbar$AccessibleAWTScrollBar::getMaximumAccessibleValue() {
	return $Integer::valueOf(this->this$0->getMaximum());
}

Scrollbar$AccessibleAWTScrollBar::Scrollbar$AccessibleAWTScrollBar() {
}

$Class* Scrollbar$AccessibleAWTScrollBar::load$($String* name, bool initialize) {
	$loadClass(Scrollbar$AccessibleAWTScrollBar, name, initialize, &_Scrollbar$AccessibleAWTScrollBar_ClassInfo_, allocate$Scrollbar$AccessibleAWTScrollBar);
	return class$;
}

$Class* Scrollbar$AccessibleAWTScrollBar::class$ = nullptr;

	} // awt
} // java