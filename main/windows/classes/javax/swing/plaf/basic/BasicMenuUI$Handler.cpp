#include <javax/swing/plaf/basic/BasicMenuUI$Handler.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <javax/swing/event/MenuKeyEvent.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI$Handler.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <jcpp.h>

#undef MNEMONIC_CHANGED_PROPERTY
#undef MOUSE_DRAGGED
#undef MOUSE_RELEASED

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $UIManager = ::javax::swing::UIManager;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;
using $MenuKeyEvent = ::javax::swing::event::MenuKeyEvent;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $BasicMenuItemUI$Handler = ::javax::swing::plaf::basic::BasicMenuItemUI$Handler;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicMenuUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicMenuUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicMenuUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicMenuUI$Handler::*)($BasicMenuUI*)>(&BasicMenuUI$Handler::init$))},
	{"menuDragMouseDragged", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuDragMouseEntered", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuDragMouseExited", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuDragMouseReleased", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuKeyPressed", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{"menuKeyReleased", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{"menuKeyTyped", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicMenuUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuUI$Handler", "javax.swing.plaf.basic.BasicMenuUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicMenuItemUI$Handler", "javax.swing.plaf.basic.BasicMenuItemUI", "Handler", 0},
	{}
};

$ClassInfo _BasicMenuUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuUI$Handler",
	"javax.swing.plaf.basic.BasicMenuItemUI$Handler",
	"javax.swing.event.MenuKeyListener",
	_BasicMenuUI$Handler_FieldInfo_,
	_BasicMenuUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuUI"
};

$Object* allocate$BasicMenuUI$Handler($Class* clazz) {
	return $of($alloc(BasicMenuUI$Handler));
}

int32_t BasicMenuUI$Handler::hashCode() {
	 return this->$BasicMenuItemUI$Handler::hashCode();
}

bool BasicMenuUI$Handler::equals(Object$* arg0) {
	 return this->$BasicMenuItemUI$Handler::equals(arg0);
}

$Object* BasicMenuUI$Handler::clone() {
	 return this->$BasicMenuItemUI$Handler::clone();
}

$String* BasicMenuUI$Handler::toString() {
	 return this->$BasicMenuItemUI$Handler::toString();
}

void BasicMenuUI$Handler::finalize() {
	this->$BasicMenuItemUI$Handler::finalize();
}

void BasicMenuUI$Handler::init$($BasicMenuUI* this$0) {
	$set(this, this$0, this$0);
	$BasicMenuItemUI$Handler::init$(this$0);
}

void BasicMenuUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$init($AbstractButton);
	if ($nc(e)->getPropertyName() == $AbstractButton::MNEMONIC_CHANGED_PROPERTY) {
		this->this$0->updateMnemonicBinding();
	} else {
		if ($nc($(e->getPropertyName()))->equals("ancestor"_s)) {
			this->this$0->updateDefaultBackgroundColor();
		}
		$BasicMenuItemUI$Handler::propertyChange(e);
	}
}

void BasicMenuUI$Handler::mouseClicked($MouseEvent* e) {
}

void BasicMenuUI$Handler::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, menu, $cast($JMenu, this->this$0->menuItem));
	if (!$nc(menu)->isEnabled()) {
		return;
	}
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	if ($nc(menu)->isTopLevelMenu()) {
		bool var$0 = menu->isSelected();
		if (var$0 && $nc($(menu->getPopupMenu()))->isShowing()) {
			$nc(manager)->clearSelectedPath();
		} else {
			$var($Container, cnt, menu->getParent());
			if (cnt != nullptr && $instanceOf($JMenuBar, cnt)) {
				$var($MenuElementArray, me, $new($MenuElementArray, 2));
				me->set(0, $cast($MenuElement, cnt));
				me->set(1, menu);
				$nc(manager)->setSelectedPath(me);
			}
		}
	}
	$var($MenuElementArray, selectedPath, $nc(manager)->getSelectedPath());
	if ($nc(selectedPath)->length > 0 && !$equals(selectedPath->get(selectedPath->length - 1), $nc(menu)->getPopupMenu())) {
		bool var$1 = menu->isTopLevelMenu();
		if (var$1 || menu->getDelay() == 0) {
			$BasicMenuUI::appendPath(selectedPath, $(menu->getPopupMenu()));
		} else {
			this->this$0->setupPostTimer(menu);
		}
	}
}

void BasicMenuUI$Handler::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, menu, $cast($JMenu, this->this$0->menuItem));
	if (!$nc(menu)->isEnabled()) {
		return;
	}
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$nc(manager)->processMouseEvent(e);
	if (!$nc(e)->isConsumed()) {
		manager->clearSelectedPath();
	}
}

void BasicMenuUI$Handler::mouseEntered($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, menu, $cast($JMenu, this->this$0->menuItem));
	bool var$0 = !$nc(menu)->isEnabled();
	if (var$0 && !$UIManager::getBoolean("MenuItem.disabledAreNavigable"_s)) {
		return;
	}
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, selectedPath, $nc(manager)->getSelectedPath());
	if (!$nc(menu)->isTopLevelMenu()) {
		if (!($nc(selectedPath)->length > 0 && $equals(selectedPath->get(selectedPath->length - 1), menu->getPopupMenu()))) {
			if (menu->getDelay() == 0) {
				$var($MenuElementArray, var$1, this->this$0->getPath());
				$BasicMenuUI::appendPath(var$1, $(menu->getPopupMenu()));
			} else {
				manager->setSelectedPath($(this->this$0->getPath()));
				this->this$0->setupPostTimer(menu);
			}
		}
	} else if ($nc(selectedPath)->length > 0 && $equals(selectedPath->get(0), menu->getParent())) {
		$var($MenuElementArray, newPath, $new($MenuElementArray, 3));
		newPath->set(0, $cast($MenuElement, $(menu->getParent())));
		newPath->set(1, menu);
		if ($BasicPopupMenuUI::getLastPopup() != nullptr) {
			newPath->set(2, $(menu->getPopupMenu()));
		}
		manager->setSelectedPath(newPath);
	}
}

void BasicMenuUI$Handler::mouseExited($MouseEvent* e) {
}

void BasicMenuUI$Handler::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, menu, $cast($JMenu, this->this$0->menuItem));
	if (!$nc(menu)->isEnabled()) {
		return;
	}
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void BasicMenuUI$Handler::mouseMoved($MouseEvent* e) {
}

void BasicMenuUI$Handler::menuDragMouseEntered($MenuDragMouseEvent* e) {
}

void BasicMenuUI$Handler::menuDragMouseDragged($MenuDragMouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$0->menuItem)->isEnabled() == false) {
		return;
	}
	$var($MenuSelectionManager, manager, $nc(e)->getMenuSelectionManager());
	$var($MenuElementArray, path, e->getPath());
	$var($Point, p, e->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(this->this$0->menuItem)->getWidth() && p->y >= 0;
	if (var$0 && p->y < $nc(this->this$0->menuItem)->getHeight()) {
		$var($JMenu, menu, $cast($JMenu, this->this$0->menuItem));
		$var($MenuElementArray, selectedPath, $nc(manager)->getSelectedPath());
		if (!($nc(selectedPath)->length > 0 && $equals(selectedPath->get(selectedPath->length - 1), $nc(menu)->getPopupMenu()))) {
			bool var$2 = menu->isTopLevelMenu();
			bool var$1 = var$2 || menu->getDelay() == 0;
			if (var$1 || e->getID() == $MouseEvent::MOUSE_DRAGGED) {
				$BasicMenuUI::appendPath(path, $(menu->getPopupMenu()));
			} else {
				manager->setSelectedPath(path);
				this->this$0->setupPostTimer(menu);
			}
		}
	} else if (e->getID() == $MouseEvent::MOUSE_RELEASED) {
		$var($Component, var$3, e->getComponent());
		$var($Component, comp, $nc(manager)->componentForPoint(var$3, $(e->getPoint())));
		if (comp == nullptr) {
			manager->clearSelectedPath();
		}
	}
}

void BasicMenuUI$Handler::menuDragMouseExited($MenuDragMouseEvent* e) {
}

void BasicMenuUI$Handler::menuDragMouseReleased($MenuDragMouseEvent* e) {
}

void BasicMenuUI$Handler::menuKeyTyped($MenuKeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($BasicMenuUI);
	if (!$BasicMenuUI::crossMenuMnemonic && $BasicPopupMenuUI::getLastPopup() != nullptr) {
		return;
	}
	if ($nc($($BasicPopupMenuUI::getPopups()))->size() != 0) {
		return;
	}
	char16_t key = $Character::toLowerCase((char16_t)$nc(this->this$0->menuItem)->getMnemonic());
	$var($MenuElementArray, path, $nc(e)->getPath());
	if (key == $Character::toLowerCase(e->getKeyChar())) {
		$var($JPopupMenu, popupMenu, $nc(($cast($JMenu, this->this$0->menuItem)))->getPopupMenu());
		$var($ArrayList, newList, $new($ArrayList, $(static_cast<$Collection*>($Arrays::asList(path)))));
		newList->add(popupMenu);
		$var($MenuElementArray, subs, $nc(popupMenu)->getSubElements());
		$var($MenuElement, sub, $BasicPopupMenuUI::findEnabledChild(subs, -1, true));
		if (sub != nullptr) {
			newList->add(sub);
		}
		$var($MenuSelectionManager, manager, e->getMenuSelectionManager());
		$var($MenuElementArray, newPath, $new($MenuElementArray, 0));
		$assign(newPath, $fcast($MenuElementArray, newList->toArray(newPath)));
		$nc(manager)->setSelectedPath(newPath);
		e->consume();
	}
}

void BasicMenuUI$Handler::menuKeyPressed($MenuKeyEvent* e) {
}

void BasicMenuUI$Handler::menuKeyReleased($MenuKeyEvent* e) {
}

BasicMenuUI$Handler::BasicMenuUI$Handler() {
}

$Class* BasicMenuUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicMenuUI$Handler, name, initialize, &_BasicMenuUI$Handler_ClassInfo_, allocate$BasicMenuUI$Handler);
	return class$;
}

$Class* BasicMenuUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax