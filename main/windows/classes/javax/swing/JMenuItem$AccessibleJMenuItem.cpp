#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>

#include <java/awt/Component.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef ARMED
#undef CHECKED
#undef FOCUSED
#undef MENU_ITEM
#undef PRESSED

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _JMenuItem$AccessibleJMenuItem_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(JMenuItem$AccessibleJMenuItem, this$0)},
	{"isArmed", "Z", nullptr, $PRIVATE, $field(JMenuItem$AccessibleJMenuItem, isArmed)},
	{"hasFocus", "Z", nullptr, $PRIVATE, $field(JMenuItem$AccessibleJMenuItem, hasFocus)},
	{"isPressed", "Z", nullptr, $PRIVATE, $field(JMenuItem$AccessibleJMenuItem, isPressed)},
	{"isSelected", "Z", nullptr, $PRIVATE, $field(JMenuItem$AccessibleJMenuItem, isSelected)},
	{}
};

$MethodInfo _JMenuItem$AccessibleJMenuItem_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JMenuItem;)V", nullptr, 0, $method(static_cast<void(JMenuItem$AccessibleJMenuItem::*)($JMenuItem*)>(&JMenuItem$AccessibleJMenuItem::init$))},
	{"fireAccessibilityFocusedEvent", "(Ljavax/swing/JMenuItem;)V", nullptr, $PRIVATE, $method(static_cast<void(JMenuItem$AccessibleJMenuItem::*)($JMenuItem*)>(&JMenuItem$AccessibleJMenuItem::fireAccessibilityFocusedEvent))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JMenuItem$AccessibleJMenuItem_InnerClassesInfo_[] = {
	{"javax.swing.JMenuItem$AccessibleJMenuItem", "javax.swing.JMenuItem", "AccessibleJMenuItem", $PROTECTED},
	{"javax.swing.AbstractButton$AccessibleAbstractButton", "javax.swing.AbstractButton", "AccessibleAbstractButton", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _JMenuItem$AccessibleJMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JMenuItem$AccessibleJMenuItem",
	"javax.swing.AbstractButton$AccessibleAbstractButton",
	"javax.swing.event.ChangeListener",
	_JMenuItem$AccessibleJMenuItem_FieldInfo_,
	_JMenuItem$AccessibleJMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_JMenuItem$AccessibleJMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JMenuItem"
};

$Object* allocate$JMenuItem$AccessibleJMenuItem($Class* clazz) {
	return $of($alloc(JMenuItem$AccessibleJMenuItem));
}

int32_t JMenuItem$AccessibleJMenuItem::hashCode() {
	 return this->$AbstractButton$AccessibleAbstractButton::hashCode();
}

bool JMenuItem$AccessibleJMenuItem::equals(Object$* arg0) {
	 return this->$AbstractButton$AccessibleAbstractButton::equals(arg0);
}

$Object* JMenuItem$AccessibleJMenuItem::clone() {
	 return this->$AbstractButton$AccessibleAbstractButton::clone();
}

$String* JMenuItem$AccessibleJMenuItem::toString() {
	 return this->$AbstractButton$AccessibleAbstractButton::toString();
}

void JMenuItem$AccessibleJMenuItem::finalize() {
	this->$AbstractButton$AccessibleAbstractButton::finalize();
}

void JMenuItem$AccessibleJMenuItem::init$($JMenuItem* this$0) {
	$set(this, this$0, this$0);
	$AbstractButton$AccessibleAbstractButton::init$(this$0);
	this->isArmed = false;
	this->hasFocus = false;
	this->isPressed = false;
	this->isSelected = false;
	this$0->addChangeListener(this);
}

$AccessibleRole* JMenuItem$AccessibleJMenuItem::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::MENU_ITEM;
}

void JMenuItem$AccessibleJMenuItem::fireAccessibilityFocusedEvent($JMenuItem* toCheck) {
	$useLocalCurrentObjectStackCache();
	$var($MenuElementArray, path, $nc($($MenuSelectionManager::defaultManager()))->getSelectedPath());
	if ($nc(path)->length > 0) {
		$var($Object, menuItem, path->get(path->length - 1));
		if ($equals(toCheck, menuItem)) {
			$init($AccessibleContext);
			$init($AccessibleState);
			firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::FOCUSED);
		}
	}
}

void JMenuItem$AccessibleJMenuItem::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY);
	$var($Object, var$1, $of($Boolean::valueOf(false)));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
	if ($nc($(this->this$0->getModel()))->isArmed()) {
		if (!this->isArmed) {
			this->isArmed = true;
			$init($AccessibleState);
			firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::ARMED);
			fireAccessibilityFocusedEvent(this->this$0);
		}
	} else if (this->isArmed) {
		this->isArmed = false;
		$init($AccessibleState);
		firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::ARMED, nullptr);
	}
	if (this->this$0->isFocusOwner()) {
		if (!this->hasFocus) {
			this->hasFocus = true;
			$init($AccessibleState);
			firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::FOCUSED);
		}
	} else if (this->hasFocus) {
		this->hasFocus = false;
		$init($AccessibleState);
		firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::FOCUSED, nullptr);
	}
	if ($nc($(this->this$0->getModel()))->isPressed()) {
		if (!this->isPressed) {
			this->isPressed = true;
			$init($AccessibleState);
			firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::PRESSED);
		}
	} else if (this->isPressed) {
		this->isPressed = false;
		$init($AccessibleState);
		firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::PRESSED, nullptr);
	}
	if ($nc($(this->this$0->getModel()))->isSelected()) {
		if (!this->isSelected) {
			this->isSelected = true;
			$init($AccessibleState);
			firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::CHECKED);
			fireAccessibilityFocusedEvent(this->this$0);
		}
	} else if (this->isSelected) {
		this->isSelected = false;
		$init($AccessibleState);
		firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::CHECKED, nullptr);
	}
}

JMenuItem$AccessibleJMenuItem::JMenuItem$AccessibleJMenuItem() {
}

$Class* JMenuItem$AccessibleJMenuItem::load$($String* name, bool initialize) {
	$loadClass(JMenuItem$AccessibleJMenuItem, name, initialize, &_JMenuItem$AccessibleJMenuItem_ClassInfo_, allocate$JMenuItem$AccessibleJMenuItem);
	return class$;
}

$Class* JMenuItem$AccessibleJMenuItem::class$ = nullptr;

	} // swing
} // javax