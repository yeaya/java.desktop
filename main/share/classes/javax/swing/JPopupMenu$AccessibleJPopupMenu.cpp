#include <javax/swing/JPopupMenu$AccessibleJPopupMenu.h>

#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

#undef ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY
#undef ACCESSIBLE_STATE_PROPERTY
#undef FALSE
#undef POPUP_MENU
#undef TRUE
#undef VISIBLE

using $Component = ::java::awt::Component;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JList = ::javax::swing::JList;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {

$FieldInfo _JPopupMenu$AccessibleJPopupMenu_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(JPopupMenu$AccessibleJPopupMenu, this$0)},
	{}
};

$MethodInfo _JPopupMenu$AccessibleJPopupMenu_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JPopupMenu;)V", nullptr, $PROTECTED, $method(static_cast<void(JPopupMenu$AccessibleJPopupMenu::*)($JPopupMenu*)>(&JPopupMenu$AccessibleJPopupMenu::init$))},
	{"fireActiveDescendant", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPopupMenu$AccessibleJPopupMenu::*)()>(&JPopupMenu$AccessibleJPopupMenu::fireActiveDescendant))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"handlePopupIsVisibleEvent", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(JPopupMenu$AccessibleJPopupMenu::*)(bool)>(&JPopupMenu$AccessibleJPopupMenu::handlePopupIsVisibleEvent))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JPopupMenu$AccessibleJPopupMenu_InnerClassesInfo_[] = {
	{"javax.swing.JPopupMenu$AccessibleJPopupMenu", "javax.swing.JPopupMenu", "AccessibleJPopupMenu", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JPopupMenu$AccessibleJPopupMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JPopupMenu$AccessibleJPopupMenu",
	"javax.swing.JComponent$AccessibleJComponent",
	"java.beans.PropertyChangeListener",
	_JPopupMenu$AccessibleJPopupMenu_FieldInfo_,
	_JPopupMenu$AccessibleJPopupMenu_MethodInfo_,
	nullptr,
	nullptr,
	_JPopupMenu$AccessibleJPopupMenu_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JPopupMenu"
};

$Object* allocate$JPopupMenu$AccessibleJPopupMenu($Class* clazz) {
	return $of($alloc(JPopupMenu$AccessibleJPopupMenu));
}

int32_t JPopupMenu$AccessibleJPopupMenu::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JPopupMenu$AccessibleJPopupMenu::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JPopupMenu$AccessibleJPopupMenu::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JPopupMenu$AccessibleJPopupMenu::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JPopupMenu$AccessibleJPopupMenu::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JPopupMenu$AccessibleJPopupMenu::init$($JPopupMenu* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	this$0->addPropertyChangeListener(this);
}

$AccessibleRole* JPopupMenu$AccessibleJPopupMenu::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::POPUP_MENU;
}

void JPopupMenu$AccessibleJPopupMenu::propertyChange($PropertyChangeEvent* e) {
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == "visible"_s) {
		$init($Boolean);
		bool var$0 = $equals(e->getOldValue(), $Boolean::FALSE);
		if (var$0 && $equals(e->getNewValue(), $Boolean::TRUE)) {
			handlePopupIsVisibleEvent(true);
		} else {
			bool var$2 = $equals(e->getOldValue(), $Boolean::TRUE);
			if (var$2 && $equals(e->getNewValue(), $Boolean::FALSE)) {
				handlePopupIsVisibleEvent(false);
			}
		}
	}
}

void JPopupMenu$AccessibleJPopupMenu::handlePopupIsVisibleEvent(bool visible) {
	if (visible) {
		$init($AccessibleContext);
		$init($AccessibleState);
		firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::VISIBLE);
		fireActiveDescendant();
	} else {
		$init($AccessibleContext);
		$init($AccessibleState);
		firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::VISIBLE, nullptr);
	}
}

void JPopupMenu$AccessibleJPopupMenu::fireActiveDescendant() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($BasicComboPopup, this->this$0)) {
		$var($JList, popupList, $nc(($cast($BasicComboPopup, this->this$0)))->getList());
		if (popupList == nullptr) {
			return;
		}
		$var($AccessibleContext, ac, $nc(popupList)->getAccessibleContext());
		$var($AccessibleSelection, selection, $nc(ac)->getAccessibleSelection());
		if (selection == nullptr) {
			return;
		}
		$var($Accessible, a, $nc(selection)->getAccessibleSelection(0));
		if (a == nullptr) {
			return;
		}
		$var($AccessibleContext, selectedItem, $nc(a)->getAccessibleContext());
		if (selectedItem != nullptr && this->this$0->invoker != nullptr) {
			$var($AccessibleContext, invokerContext, $nc(this->this$0->invoker)->getAccessibleContext());
			if (invokerContext != nullptr) {
				invokerContext->firePropertyChange($AccessibleContext::ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY, nullptr, selectedItem);
			}
		}
	}
}

JPopupMenu$AccessibleJPopupMenu::JPopupMenu$AccessibleJPopupMenu() {
}

$Class* JPopupMenu$AccessibleJPopupMenu::load$($String* name, bool initialize) {
	$loadClass(JPopupMenu$AccessibleJPopupMenu, name, initialize, &_JPopupMenu$AccessibleJPopupMenu_ClassInfo_, allocate$JPopupMenu$AccessibleJPopupMenu);
	return class$;
}

$Class* JPopupMenu$AccessibleJPopupMenu::class$ = nullptr;

	} // swing
} // javax