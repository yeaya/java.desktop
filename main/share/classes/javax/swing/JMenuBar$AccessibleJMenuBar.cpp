#include <javax/swing/JMenuBar$AccessibleJMenuBar.h>

#include <java/awt/Component.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SingleSelectionModel.h>
#include <jcpp.h>

#undef MENU_BAR

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SingleSelectionModel = ::javax::swing::SingleSelectionModel;

namespace javax {
	namespace swing {

$FieldInfo _JMenuBar$AccessibleJMenuBar_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JMenuBar;", nullptr, $FINAL | $SYNTHETIC, $field(JMenuBar$AccessibleJMenuBar, this$0)},
	{}
};

$MethodInfo _JMenuBar$AccessibleJMenuBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JMenuBar;)V", nullptr, $PROTECTED, $method(static_cast<void(JMenuBar$AccessibleJMenuBar::*)($JMenuBar*)>(&JMenuBar$AccessibleJMenuBar::init$))},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JMenuBar$AccessibleJMenuBar_InnerClassesInfo_[] = {
	{"javax.swing.JMenuBar$AccessibleJMenuBar", "javax.swing.JMenuBar", "AccessibleJMenuBar", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JMenuBar$AccessibleJMenuBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JMenuBar$AccessibleJMenuBar",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleSelection",
	_JMenuBar$AccessibleJMenuBar_FieldInfo_,
	_JMenuBar$AccessibleJMenuBar_MethodInfo_,
	nullptr,
	nullptr,
	_JMenuBar$AccessibleJMenuBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JMenuBar"
};

$Object* allocate$JMenuBar$AccessibleJMenuBar($Class* clazz) {
	return $of($alloc(JMenuBar$AccessibleJMenuBar));
}

int32_t JMenuBar$AccessibleJMenuBar::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JMenuBar$AccessibleJMenuBar::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JMenuBar$AccessibleJMenuBar::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JMenuBar$AccessibleJMenuBar::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JMenuBar$AccessibleJMenuBar::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JMenuBar$AccessibleJMenuBar::init$($JMenuBar* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleStateSet* JMenuBar$AccessibleJMenuBar::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	return states;
}

$AccessibleRole* JMenuBar$AccessibleJMenuBar::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::MENU_BAR;
}

$AccessibleSelection* JMenuBar$AccessibleJMenuBar::getAccessibleSelection() {
	return this;
}

int32_t JMenuBar$AccessibleJMenuBar::getAccessibleSelectionCount() {
	if (this->this$0->isSelected()) {
		return 1;
	} else {
		return 0;
	}
}

$Accessible* JMenuBar$AccessibleJMenuBar::getAccessibleSelection(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->isSelected()) {
		if (i != 0) {
			return nullptr;
		}
		int32_t j = $nc($(this->this$0->getSelectionModel()))->getSelectedIndex();
		if ($instanceOf($Accessible, $(this->this$0->getComponentAtIndex(j)))) {
			return $cast($Accessible, this->this$0->getComponentAtIndex(j));
		}
	}
	return nullptr;
}

bool JMenuBar$AccessibleJMenuBar::isAccessibleChildSelected(int32_t i) {
	return (i == $nc($(this->this$0->getSelectionModel()))->getSelectedIndex());
}

void JMenuBar$AccessibleJMenuBar::addAccessibleSelection(int32_t i) {
	$useLocalCurrentObjectStackCache();
	int32_t j = $nc($(this->this$0->getSelectionModel()))->getSelectedIndex();
	if (i == j) {
		return;
	}
	if (j >= 0 && j < this->this$0->getMenuCount()) {
		$var($JMenu, menu, this->this$0->getMenu(j));
		if (menu != nullptr) {
			$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(nullptr);
		}
	}
	$nc($(this->this$0->getSelectionModel()))->setSelectedIndex(i);
	$var($JMenu, menu, this->this$0->getMenu(i));
	if (menu != nullptr) {
		$var($MenuElementArray, me, $new($MenuElementArray, 3));
		me->set(0, this->this$0);
		me->set(1, menu);
		me->set(2, $(menu->getPopupMenu()));
		$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(me);
	}
}

void JMenuBar$AccessibleJMenuBar::removeAccessibleSelection(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (i >= 0 && i < this->this$0->getMenuCount()) {
		$var($JMenu, menu, this->this$0->getMenu(i));
		if (menu != nullptr) {
			$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(nullptr);
		}
		$nc($(this->this$0->getSelectionModel()))->setSelectedIndex(-1);
	}
}

void JMenuBar$AccessibleJMenuBar::clearAccessibleSelection() {
	$useLocalCurrentObjectStackCache();
	int32_t i = $nc($(this->this$0->getSelectionModel()))->getSelectedIndex();
	if (i >= 0 && i < this->this$0->getMenuCount()) {
		$var($JMenu, menu, this->this$0->getMenu(i));
		if (menu != nullptr) {
			$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(nullptr);
		}
	}
	$nc($(this->this$0->getSelectionModel()))->setSelectedIndex(-1);
}

void JMenuBar$AccessibleJMenuBar::selectAllAccessibleSelection() {
}

JMenuBar$AccessibleJMenuBar::JMenuBar$AccessibleJMenuBar() {
}

$Class* JMenuBar$AccessibleJMenuBar::load$($String* name, bool initialize) {
	$loadClass(JMenuBar$AccessibleJMenuBar, name, initialize, &_JMenuBar$AccessibleJMenuBar_ClassInfo_, allocate$JMenuBar$AccessibleJMenuBar);
	return class$;
}

$Class* JMenuBar$AccessibleJMenuBar::class$ = nullptr;

	} // swing
} // javax