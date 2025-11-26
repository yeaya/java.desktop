#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Number.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleValue.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef MENU_ITEM

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuComponent$AccessibleAWTMenuComponent = ::java::awt::MenuComponent$AccessibleAWTMenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;

namespace java {
	namespace awt {

$FieldInfo _MenuItem$AccessibleAWTMenuItem_FieldInfo_[] = {
	{"this$0", "Ljava/awt/MenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(MenuItem$AccessibleAWTMenuItem, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuItem$AccessibleAWTMenuItem, serialVersionUID)},
	{}
};

$MethodInfo _MenuItem$AccessibleAWTMenuItem_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/MenuItem;)V", nullptr, $PROTECTED, $method(static_cast<void(MenuItem$AccessibleAWTMenuItem::*)($MenuItem*)>(&MenuItem$AccessibleAWTMenuItem::init$))},
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

$InnerClassInfo _MenuItem$AccessibleAWTMenuItem_InnerClassesInfo_[] = {
	{"java.awt.MenuItem$AccessibleAWTMenuItem", "java.awt.MenuItem", "AccessibleAWTMenuItem", $PROTECTED},
	{"java.awt.MenuComponent$AccessibleAWTMenuComponent", "java.awt.MenuComponent", "AccessibleAWTMenuComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _MenuItem$AccessibleAWTMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.MenuItem$AccessibleAWTMenuItem",
	"java.awt.MenuComponent$AccessibleAWTMenuComponent",
	"javax.accessibility.AccessibleAction,javax.accessibility.AccessibleValue",
	_MenuItem$AccessibleAWTMenuItem_FieldInfo_,
	_MenuItem$AccessibleAWTMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_MenuItem$AccessibleAWTMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.MenuItem"
};

$Object* allocate$MenuItem$AccessibleAWTMenuItem($Class* clazz) {
	return $of($alloc(MenuItem$AccessibleAWTMenuItem));
}

int32_t MenuItem$AccessibleAWTMenuItem::hashCode() {
	 return this->$MenuComponent$AccessibleAWTMenuComponent::hashCode();
}

bool MenuItem$AccessibleAWTMenuItem::equals(Object$* arg0) {
	 return this->$MenuComponent$AccessibleAWTMenuComponent::equals(arg0);
}

$Object* MenuItem$AccessibleAWTMenuItem::clone() {
	 return this->$MenuComponent$AccessibleAWTMenuComponent::clone();
}

$String* MenuItem$AccessibleAWTMenuItem::toString() {
	 return this->$MenuComponent$AccessibleAWTMenuComponent::toString();
}

void MenuItem$AccessibleAWTMenuItem::finalize() {
	this->$MenuComponent$AccessibleAWTMenuComponent::finalize();
}

void MenuItem$AccessibleAWTMenuItem::init$($MenuItem* this$0) {
	$set(this, this$0, this$0);
	$MenuComponent$AccessibleAWTMenuComponent::init$(this$0);
}

$String* MenuItem$AccessibleAWTMenuItem::getAccessibleName() {
	if (this->accessibleName != nullptr) {
		return this->accessibleName;
	} else if (this->this$0->getLabel() == nullptr) {
		return $MenuComponent$AccessibleAWTMenuComponent::getAccessibleName();
	} else {
		return this->this$0->getLabel();
	}
}

$AccessibleRole* MenuItem$AccessibleAWTMenuItem::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::MENU_ITEM;
}

$AccessibleAction* MenuItem$AccessibleAWTMenuItem::getAccessibleAction() {
	return this;
}

$AccessibleValue* MenuItem$AccessibleAWTMenuItem::getAccessibleValue() {
	return this;
}

int32_t MenuItem$AccessibleAWTMenuItem::getAccessibleActionCount() {
	return 1;
}

$String* MenuItem$AccessibleAWTMenuItem::getAccessibleActionDescription(int32_t i) {
	if (i == 0) {
		return "click"_s;
	} else {
		return nullptr;
	}
}

bool MenuItem$AccessibleAWTMenuItem::doAccessibleAction(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (i == 0) {
		$var($Object, var$0, $of(this->this$0));
		$var($String, var$1, this->this$0->getActionCommand());
		$nc($($Toolkit::getEventQueue()))->postEvent($$new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, var$1, $EventQueue::getMostRecentEventTime(), 0));
		return true;
	} else {
		return false;
	}
}

$Number* MenuItem$AccessibleAWTMenuItem::getCurrentAccessibleValue() {
	return $Integer::valueOf(0);
}

bool MenuItem$AccessibleAWTMenuItem::setCurrentAccessibleValue($Number* n) {
	return false;
}

$Number* MenuItem$AccessibleAWTMenuItem::getMinimumAccessibleValue() {
	return $Integer::valueOf(0);
}

$Number* MenuItem$AccessibleAWTMenuItem::getMaximumAccessibleValue() {
	return $Integer::valueOf(0);
}

MenuItem$AccessibleAWTMenuItem::MenuItem$AccessibleAWTMenuItem() {
}

$Class* MenuItem$AccessibleAWTMenuItem::load$($String* name, bool initialize) {
	$loadClass(MenuItem$AccessibleAWTMenuItem, name, initialize, &_MenuItem$AccessibleAWTMenuItem_ClassInfo_, allocate$MenuItem$AccessibleAWTMenuItem);
	return class$;
}

$Class* MenuItem$AccessibleAWTMenuItem::class$ = nullptr;

	} // awt
} // java