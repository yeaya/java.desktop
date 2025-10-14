#include <javax/swing/JMenu$AccessibleJMenu.h>

#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

#undef MENU

using $ComponentArray = $Array<::java::awt::Component>;
using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace javax {
	namespace swing {

$FieldInfo _JMenu$AccessibleJMenu_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JMenu;", nullptr, $FINAL | $SYNTHETIC, $field(JMenu$AccessibleJMenu, this$0)},
	{}
};

$MethodInfo _JMenu$AccessibleJMenu_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JMenu;)V", nullptr, $PROTECTED, $method(static_cast<void(JMenu$AccessibleJMenu::*)($JMenu*)>(&JMenu$AccessibleJMenu::init$))},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JMenu$AccessibleJMenu_InnerClassesInfo_[] = {
	{"javax.swing.JMenu$AccessibleJMenu", "javax.swing.JMenu", "AccessibleJMenu", $PROTECTED},
	{"javax.swing.JMenuItem$AccessibleJMenuItem", "javax.swing.JMenuItem", "AccessibleJMenuItem", $PROTECTED},
	{}
};

$ClassInfo _JMenu$AccessibleJMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JMenu$AccessibleJMenu",
	"javax.swing.JMenuItem$AccessibleJMenuItem",
	"javax.accessibility.AccessibleSelection",
	_JMenu$AccessibleJMenu_FieldInfo_,
	_JMenu$AccessibleJMenu_MethodInfo_,
	nullptr,
	nullptr,
	_JMenu$AccessibleJMenu_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JMenu"
};

$Object* allocate$JMenu$AccessibleJMenu($Class* clazz) {
	return $of($alloc(JMenu$AccessibleJMenu));
}

int32_t JMenu$AccessibleJMenu::hashCode() {
	 return this->$JMenuItem$AccessibleJMenuItem::hashCode();
}

bool JMenu$AccessibleJMenu::equals(Object$* arg0) {
	 return this->$JMenuItem$AccessibleJMenuItem::equals(arg0);
}

$Object* JMenu$AccessibleJMenu::clone() {
	 return this->$JMenuItem$AccessibleJMenuItem::clone();
}

$String* JMenu$AccessibleJMenu::toString() {
	 return this->$JMenuItem$AccessibleJMenuItem::toString();
}

void JMenu$AccessibleJMenu::finalize() {
	this->$JMenuItem$AccessibleJMenuItem::finalize();
}

void JMenu$AccessibleJMenu::init$($JMenu* this$0) {
	$set(this, this$0, this$0);
	$JMenuItem$AccessibleJMenuItem::init$(this$0);
}

int32_t JMenu$AccessibleJMenu::getAccessibleChildrenCount() {
	$var($ComponentArray, children, this->this$0->getMenuComponents());
	int32_t count = 0;
	{
		$var($ComponentArray, arr$, children);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				if ($instanceOf($Accessible, child)) {
					++count;
				}
			}
		}
	}
	return count;
}

$Accessible* JMenu$AccessibleJMenu::getAccessibleChild(int32_t i) {
	$var($ComponentArray, children, this->this$0->getMenuComponents());
	int32_t count = 0;
	{
		$var($ComponentArray, arr$, children);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				if ($instanceOf($Accessible, child)) {
					if (count == i) {
						if ($instanceOf($JComponent, child)) {
							$var($AccessibleContext, ac, $nc(child)->getAccessibleContext());
							$nc(ac)->setAccessibleParent(this->this$0);
						}
						return $cast($Accessible, child);
					} else {
						++count;
					}
				}
			}
		}
	}
	return nullptr;
}

$AccessibleRole* JMenu$AccessibleJMenu::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::MENU;
}

$AccessibleSelection* JMenu$AccessibleJMenu::getAccessibleSelection() {
	return this;
}

int32_t JMenu$AccessibleJMenu::getAccessibleSelectionCount() {
	$var($MenuElementArray, me, $nc($($MenuSelectionManager::defaultManager()))->getSelectedPath());
	if (me != nullptr) {
		for (int32_t i = 0; i < me->length; ++i) {
			if ($equals(me->get(i), this->this$0)) {
				if (i + 1 < me->length) {
					return 1;
				}
			}
		}
	}
	return 0;
}

$Accessible* JMenu$AccessibleJMenu::getAccessibleSelection(int32_t i) {
	if (i < 0 || i >= this->this$0->getItemCount()) {
		return nullptr;
	}
	$var($MenuElementArray, me, $nc($($MenuSelectionManager::defaultManager()))->getSelectedPath());
	if (me != nullptr) {
		for (int32_t j = 0; j < me->length; ++j) {
			if ($equals(me->get(j), this->this$0)) {
				while (++j < me->length) {
					if ($instanceOf($JMenuItem, me->get(j))) {
						return $cast($Accessible, me->get(j));
					}
				}
			}
		}
	}
	return nullptr;
}

bool JMenu$AccessibleJMenu::isAccessibleChildSelected(int32_t i) {
	$var($MenuElementArray, me, $nc($($MenuSelectionManager::defaultManager()))->getSelectedPath());
	if (me != nullptr) {
		$var($JMenuItem, mi, this->this$0->getItem(i));
		for (int32_t j = 0; j < me->length; ++j) {
			if ($equals(me->get(j), mi)) {
				return true;
			}
		}
	}
	return false;
}

void JMenu$AccessibleJMenu::addAccessibleSelection(int32_t i) {
	if (i < 0 || i >= this->this$0->getItemCount()) {
		return;
	}
	$var($JMenuItem, mi, this->this$0->getItem(i));
	if (mi != nullptr) {
		if ($instanceOf($JMenu, mi)) {
			$var($MenuElementArray, me, this->this$0->buildMenuElementArray($cast($JMenu, mi)));
			$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(me);
		} else {
			$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(nullptr);
		}
	}
}

void JMenu$AccessibleJMenu::removeAccessibleSelection(int32_t i) {
	if (i < 0 || i >= this->this$0->getItemCount()) {
		return;
	}
	$var($JMenuItem, mi, this->this$0->getItem(i));
	if (mi != nullptr && $instanceOf($JMenu, mi)) {
		if (mi->isSelected()) {
			$var($MenuElementArray, old, $nc($($MenuSelectionManager::defaultManager()))->getSelectedPath());
			$var($MenuElementArray, me, $new($MenuElementArray, $nc(old)->length - 2));
			for (int32_t j = 0; j < old->length - 2; ++j) {
				me->set(j, old->get(j));
			}
			$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(me);
		}
	}
}

void JMenu$AccessibleJMenu::clearAccessibleSelection() {
	$var($MenuElementArray, old, $nc($($MenuSelectionManager::defaultManager()))->getSelectedPath());
	if (old != nullptr) {
		for (int32_t j = 0; j < old->length; ++j) {
			if ($equals(old->get(j), this->this$0)) {
				$var($MenuElementArray, me, $new($MenuElementArray, j + 1));
				$System::arraycopy(old, 0, me, 0, j);
				me->set(j, $(this->this$0->getPopupMenu()));
				$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(me);
			}
		}
	}
}

void JMenu$AccessibleJMenu::selectAllAccessibleSelection() {
}

JMenu$AccessibleJMenu::JMenu$AccessibleJMenu() {
}

$Class* JMenu$AccessibleJMenu::load$($String* name, bool initialize) {
	$loadClass(JMenu$AccessibleJMenu, name, initialize, &_JMenu$AccessibleJMenu_ClassInfo_, allocate$JMenu$AccessibleJMenu);
	return class$;
}

$Class* JMenu$AccessibleJMenu::class$ = nullptr;

	} // swing
} // javax