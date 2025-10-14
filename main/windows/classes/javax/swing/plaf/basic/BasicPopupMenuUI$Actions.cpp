#include <javax/swing/plaf/basic/BasicPopupMenuUI$Actions.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef BACKWARD
#undef CANCEL
#undef CHILD
#undef FORWARD
#undef PARENT
#undef RETURN
#undef SELECT_CHILD
#undef SELECT_NEXT
#undef SELECT_PARENT
#undef SELECT_PREVIOUS
#undef TRUE

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPopupMenuUI$Actions_FieldInfo_[] = {
	{"CANCEL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicPopupMenuUI$Actions, CANCEL)},
	{"SELECT_NEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicPopupMenuUI$Actions, SELECT_NEXT)},
	{"SELECT_PREVIOUS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicPopupMenuUI$Actions, SELECT_PREVIOUS)},
	{"SELECT_PARENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicPopupMenuUI$Actions, SELECT_PARENT)},
	{"SELECT_CHILD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicPopupMenuUI$Actions, SELECT_CHILD)},
	{"RETURN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicPopupMenuUI$Actions, RETURN)},
	{"FORWARD", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicPopupMenuUI$Actions, FORWARD)},
	{"BACKWARD", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicPopupMenuUI$Actions, BACKWARD)},
	{"PARENT", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicPopupMenuUI$Actions, PARENT)},
	{"CHILD", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicPopupMenuUI$Actions, CHILD)},
	{}
};

$MethodInfo _BasicPopupMenuUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicPopupMenuUI$Actions::*)($String*)>(&BasicPopupMenuUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"cancel", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicPopupMenuUI$Actions::*)()>(&BasicPopupMenuUI$Actions::cancel))},
	{"doReturn", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicPopupMenuUI$Actions::*)()>(&BasicPopupMenuUI$Actions::doReturn))},
	{"selectItem", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicPopupMenuUI$Actions::*)(bool)>(&BasicPopupMenuUI$Actions::selectItem))},
	{"selectParentChild", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicPopupMenuUI$Actions::*)(bool)>(&BasicPopupMenuUI$Actions::selectParentChild))},
	{"shortenSelectedPath", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicPopupMenuUI$Actions::*)()>(&BasicPopupMenuUI$Actions::shortenSelectedPath))},
	{}
};

$InnerClassInfo _BasicPopupMenuUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicPopupMenuUI$Actions", "javax.swing.plaf.basic.BasicPopupMenuUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicPopupMenuUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicPopupMenuUI$Actions_FieldInfo_,
	_BasicPopupMenuUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicPopupMenuUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicPopupMenuUI"
};

$Object* allocate$BasicPopupMenuUI$Actions($Class* clazz) {
	return $of($alloc(BasicPopupMenuUI$Actions));
}

$String* BasicPopupMenuUI$Actions::CANCEL = nullptr;
$String* BasicPopupMenuUI$Actions::SELECT_NEXT = nullptr;
$String* BasicPopupMenuUI$Actions::SELECT_PREVIOUS = nullptr;
$String* BasicPopupMenuUI$Actions::SELECT_PARENT = nullptr;
$String* BasicPopupMenuUI$Actions::SELECT_CHILD = nullptr;
$String* BasicPopupMenuUI$Actions::RETURN = nullptr;

void BasicPopupMenuUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicPopupMenuUI$Actions::actionPerformed($ActionEvent* e) {
	$var($String, key, getName());
	if (key == BasicPopupMenuUI$Actions::CANCEL) {
		cancel();
	} else if (key == BasicPopupMenuUI$Actions::SELECT_NEXT) {
		selectItem(BasicPopupMenuUI$Actions::FORWARD);
	} else if (key == BasicPopupMenuUI$Actions::SELECT_PREVIOUS) {
		selectItem(BasicPopupMenuUI$Actions::BACKWARD);
	} else if (key == BasicPopupMenuUI$Actions::SELECT_PARENT) {
		selectParentChild(BasicPopupMenuUI$Actions::PARENT);
	} else if (key == BasicPopupMenuUI$Actions::SELECT_CHILD) {
		selectParentChild(BasicPopupMenuUI$Actions::CHILD);
	} else if (key == BasicPopupMenuUI$Actions::RETURN) {
		doReturn();
	}
}

void BasicPopupMenuUI$Actions::doReturn() {
	$var($KeyboardFocusManager, fmgr, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	$var($Component, focusOwner, $nc(fmgr)->getFocusOwner());
	if (focusOwner != nullptr && !($instanceOf($JRootPane, focusOwner))) {
		return;
	}
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, path, $nc(msm)->getSelectedPath());
	$var($MenuElement, lastElement, nullptr);
	if ($nc(path)->length > 0) {
		$assign(lastElement, path->get(path->length - 1));
		if ($instanceOf($JMenu, lastElement)) {
			$var($MenuElementArray, newPath, $new($MenuElementArray, path->length + 1));
			$System::arraycopy(path, 0, newPath, 0, path->length);
			newPath->set(path->length, $($nc(($cast($JMenu, lastElement)))->getPopupMenu()));
			msm->setSelectedPath(newPath);
		} else if ($instanceOf($JMenuItem, lastElement)) {
			$var($JMenuItem, mi, $cast($JMenuItem, lastElement));
			if ($instanceOf($BasicMenuItemUI, $($cast($ButtonUI, $nc(mi)->getUI())))) {
				$nc(($cast($BasicMenuItemUI, $($cast($ButtonUI, mi->getUI())))))->doClick(msm);
			} else {
				msm->clearSelectedPath();
				mi->doClick(0);
			}
		}
	}
}

void BasicPopupMenuUI$Actions::selectParentChild(bool direction) {
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, path, $nc(msm)->getSelectedPath());
	int32_t len = $nc(path)->length;
	if (direction == BasicPopupMenuUI$Actions::PARENT) {
		int32_t popupIndex = len - 1;
		bool var$1 = len > 2;
		if (var$1) {
			bool var$2 = $instanceOf($JPopupMenu, path->get(popupIndex));
			var$1 = (var$2 || $instanceOf($JPopupMenu, path->get(--popupIndex)));
		}
		bool var$0 = var$1;
		if (var$0 && !$nc(($cast($JMenu, path->get(popupIndex - 1))))->isTopLevelMenu()) {
			$var($MenuElementArray, newPath, $new($MenuElementArray, popupIndex));
			$System::arraycopy(path, 0, newPath, 0, popupIndex);
			msm->setSelectedPath(newPath);
			return;
		}
	} else if (len > 0 && $instanceOf($JMenu, path->get(len - 1)) && !$nc(($cast($JMenu, path->get(len - 1))))->isTopLevelMenu()) {
		$var($JMenu, menu, $cast($JMenu, path->get(len - 1)));
		$var($JPopupMenu, popup, $nc(menu)->getPopupMenu());
		$var($MenuElementArray, subs, $nc(popup)->getSubElements());
		$var($MenuElement, item, $BasicPopupMenuUI::findEnabledChild(subs, -1, true));
		$var($MenuElementArray, newPath, nullptr);
		if (item == nullptr) {
			$assign(newPath, $new($MenuElementArray, len + 1));
		} else {
			$assign(newPath, $new($MenuElementArray, len + 2));
			newPath->set(len + 1, item);
		}
		$System::arraycopy(path, 0, newPath, 0, len);
		$nc(newPath)->set(len, popup);
		msm->setSelectedPath(newPath);
		return;
	}
	if (len > 1 && $instanceOf($JMenuBar, path->get(0))) {
		$var($MenuElement, currentMenu, path->get(1));
		$var($MenuElement, nextMenu, $BasicPopupMenuUI::findEnabledChild($($nc(path->get(0))->getSubElements()), currentMenu, direction));
		if (nextMenu != nullptr && nextMenu != currentMenu) {
			$var($MenuElementArray, newSelection, nullptr);
			if (len == 2) {
				$assign(newSelection, $new($MenuElementArray, 2));
				newSelection->set(0, path->get(0));
				newSelection->set(1, nextMenu);
			} else {
				$assign(newSelection, $new($MenuElementArray, 3));
				newSelection->set(0, path->get(0));
				newSelection->set(1, nextMenu);
				newSelection->set(2, $($nc(($cast($JMenu, nextMenu)))->getPopupMenu()));
			}
			msm->setSelectedPath(newSelection);
		}
	}
}

void BasicPopupMenuUI$Actions::selectItem(bool direction) {
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, path, $nc(msm)->getSelectedPath());
	if ($nc(path)->length == 0) {
		return;
	}
	int32_t len = $nc(path)->length;
	if (len == 1 && $instanceOf($JPopupMenu, path->get(0))) {
		$var($JPopupMenu, popup, $cast($JPopupMenu, path->get(0)));
		$var($MenuElementArray, newPath, $new($MenuElementArray, 2));
		newPath->set(0, popup);
		newPath->set(1, $($BasicPopupMenuUI::findEnabledChild($($nc(popup)->getSubElements()), -1, direction)));
		msm->setSelectedPath(newPath);
	} else if (len == 2 && $instanceOf($JMenuBar, path->get(0)) && $instanceOf($JMenu, path->get(1))) {
		$var($JPopupMenu, popup, $nc(($cast($JMenu, path->get(1))))->getPopupMenu());
		$var($MenuElement, next, $BasicPopupMenuUI::findEnabledChild($($nc(popup)->getSubElements()), -1, BasicPopupMenuUI$Actions::FORWARD));
		$var($MenuElementArray, newPath, nullptr);
		if (next != nullptr) {
			$assign(newPath, $new($MenuElementArray, 4));
			newPath->set(3, next);
		} else {
			$assign(newPath, $new($MenuElementArray, 3));
		}
		$System::arraycopy(path, 0, newPath, 0, 2);
		$nc(newPath)->set(2, popup);
		msm->setSelectedPath(newPath);
	} else if ($instanceOf($JPopupMenu, path->get(len - 1)) && $instanceOf($JMenu, path->get(len - 2))) {
		$var($JMenu, menu, $cast($JMenu, path->get(len - 2)));
		$var($JPopupMenu, popup, $nc(menu)->getPopupMenu());
		$var($MenuElement, next, $BasicPopupMenuUI::findEnabledChild($($nc(popup)->getSubElements()), -1, direction));
		if (next != nullptr) {
			$var($MenuElementArray, newPath, $new($MenuElementArray, len + 1));
			$System::arraycopy(path, 0, newPath, 0, len);
			newPath->set(len, next);
			msm->setSelectedPath(newPath);
		} else if (len > 2 && $instanceOf($JPopupMenu, path->get(len - 3))) {
			$assign(popup, $cast($JPopupMenu, path->get(len - 3)));
			$assign(next, $BasicPopupMenuUI::findEnabledChild($($nc(popup)->getSubElements()), static_cast<$MenuElement*>(menu), direction));
			if (next != nullptr && !$equals(next, menu)) {
				$var($MenuElementArray, newPath, $new($MenuElementArray, len - 1));
				$System::arraycopy(path, 0, newPath, 0, len - 2);
				newPath->set(len - 2, next);
				msm->setSelectedPath(newPath);
			}
		}
	} else {
		$var($MenuElementArray, subs, $nc(path->get(len - 2))->getSubElements());
		$var($MenuElement, nextChild, $BasicPopupMenuUI::findEnabledChild(subs, path->get(len - 1), direction));
		if (nextChild == nullptr) {
			$assign(nextChild, $BasicPopupMenuUI::findEnabledChild(subs, -1, direction));
		}
		if (nextChild != nullptr) {
			path->set(len - 1, nextChild);
			msm->setSelectedPath(path);
		}
	}
}

void BasicPopupMenuUI$Actions::cancel() {
	$var($JPopupMenu, lastPopup, $BasicPopupMenuUI::getLastPopup());
	if (lastPopup != nullptr) {
		$init($Boolean);
		lastPopup->putClientProperty("JPopupMenu.firePopupMenuCanceled"_s, $Boolean::TRUE);
	}
	$var($String, mode, $UIManager::getString("Menu.cancelMode"_s));
	if ("hideMenuTree"_s->equals(mode)) {
		$nc($($MenuSelectionManager::defaultManager()))->clearSelectedPath();
	} else {
		shortenSelectedPath();
	}
}

void BasicPopupMenuUI$Actions::shortenSelectedPath() {
	$var($MenuElementArray, path, $nc($($MenuSelectionManager::defaultManager()))->getSelectedPath());
	if ($nc(path)->length <= 2) {
		$nc($($MenuSelectionManager::defaultManager()))->clearSelectedPath();
		return;
	}
	int32_t value = 2;
	$var($MenuElement, lastElement, $nc(path)->get(path->length - 1));
	$var($JPopupMenu, lastPopup, $BasicPopupMenuUI::getLastPopup());
	if ($equals(lastElement, lastPopup)) {
		$var($MenuElement, previousElement, path->get(path->length - 2));
		if ($instanceOf($JMenu, previousElement)) {
			$var($JMenu, lastMenu, $cast($JMenu, previousElement));
			bool var$0 = $nc(lastMenu)->isEnabled();
			if (var$0 && $nc(lastPopup)->getComponentCount() > 0) {
				value = 1;
			} else {
				value = 3;
			}
		}
	}
	if (path->length - value <= 2 && !$UIManager::getBoolean("Menu.preserveTopLevelSelection"_s)) {
		value = path->length;
	}
	$var($MenuElementArray, newPath, $new($MenuElementArray, path->length - value));
	$System::arraycopy(path, 0, newPath, 0, path->length - value);
	$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(newPath);
}

BasicPopupMenuUI$Actions::BasicPopupMenuUI$Actions() {
}

void clinit$BasicPopupMenuUI$Actions($Class* class$) {
	$assignStatic(BasicPopupMenuUI$Actions::CANCEL, "cancel"_s);
	$assignStatic(BasicPopupMenuUI$Actions::SELECT_NEXT, "selectNext"_s);
	$assignStatic(BasicPopupMenuUI$Actions::SELECT_PREVIOUS, "selectPrevious"_s);
	$assignStatic(BasicPopupMenuUI$Actions::SELECT_PARENT, "selectParent"_s);
	$assignStatic(BasicPopupMenuUI$Actions::SELECT_CHILD, "selectChild"_s);
	$assignStatic(BasicPopupMenuUI$Actions::RETURN, "return"_s);
}

$Class* BasicPopupMenuUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuUI$Actions, name, initialize, &_BasicPopupMenuUI$Actions_ClassInfo_, clinit$BasicPopupMenuUI$Actions, allocate$BasicPopupMenuUI$Actions);
	return class$;
}

$Class* BasicPopupMenuUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax