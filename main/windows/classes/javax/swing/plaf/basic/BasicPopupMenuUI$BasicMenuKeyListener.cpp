#include <javax/swing/plaf/basic/BasicPopupMenuUI$BasicMenuKeyListener.h>

#include <java/awt/Component.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/event/MenuKeyEvent.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
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
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $MenuKeyEvent = ::javax::swing::event::MenuKeyEvent;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPopupMenuUI$BasicMenuKeyListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicPopupMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$BasicMenuKeyListener, this$0)},
	{"menuToOpen", "Ljavax/swing/MenuElement;", nullptr, 0, $field(BasicPopupMenuUI$BasicMenuKeyListener, menuToOpen)},
	{}
};

$MethodInfo _BasicPopupMenuUI$BasicMenuKeyListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicPopupMenuUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicPopupMenuUI$BasicMenuKeyListener::*)($BasicPopupMenuUI*)>(&BasicPopupMenuUI$BasicMenuKeyListener::init$))},
	{"lower", "(C)C", nullptr, $PRIVATE, $method(static_cast<char16_t(BasicPopupMenuUI$BasicMenuKeyListener::*)(char16_t)>(&BasicPopupMenuUI$BasicMenuKeyListener::lower))},
	{"lower", "(I)C", nullptr, $PRIVATE, $method(static_cast<char16_t(BasicPopupMenuUI$BasicMenuKeyListener::*)(int32_t)>(&BasicPopupMenuUI$BasicMenuKeyListener::lower))},
	{"menuKeyPressed", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{"menuKeyReleased", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{"menuKeyTyped", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicPopupMenuUI$BasicMenuKeyListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicPopupMenuUI$BasicMenuKeyListener", "javax.swing.plaf.basic.BasicPopupMenuUI", "BasicMenuKeyListener", $PRIVATE},
	{}
};

$ClassInfo _BasicPopupMenuUI$BasicMenuKeyListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuUI$BasicMenuKeyListener",
	"java.lang.Object",
	"javax.swing.event.MenuKeyListener",
	_BasicPopupMenuUI$BasicMenuKeyListener_FieldInfo_,
	_BasicPopupMenuUI$BasicMenuKeyListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicPopupMenuUI$BasicMenuKeyListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicPopupMenuUI"
};

$Object* allocate$BasicPopupMenuUI$BasicMenuKeyListener($Class* clazz) {
	return $of($alloc(BasicPopupMenuUI$BasicMenuKeyListener));
}

void BasicPopupMenuUI$BasicMenuKeyListener::init$($BasicPopupMenuUI* this$0) {
	$set(this, this$0, this$0);
	$set(this, menuToOpen, nullptr);
}

void BasicPopupMenuUI$BasicMenuKeyListener::menuKeyTyped($MenuKeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->menuToOpen != nullptr) {
		$var($JPopupMenu, subpopup, $nc(($cast($JMenu, this->menuToOpen)))->getPopupMenu());
		$var($MenuElement, subitem, $BasicPopupMenuUI::findEnabledChild($($nc(subpopup)->getSubElements()), -1, true));
		$var($ArrayList, lst, $new($ArrayList, $(static_cast<$Collection*>($Arrays::asList($($nc(e)->getPath()))))));
		lst->add(this->menuToOpen);
		lst->add(subpopup);
		if (subitem != nullptr) {
			lst->add(subitem);
		}
		$var($MenuElementArray, newPath, $new($MenuElementArray, 0));
		$assign(newPath, $fcast($MenuElementArray, lst->toArray(newPath)));
		$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(newPath);
		$nc(e)->consume();
	}
	$set(this, menuToOpen, nullptr);
}

void BasicPopupMenuUI$BasicMenuKeyListener::menuKeyPressed($MenuKeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	char16_t keyChar = $nc(e)->getKeyChar();
	if (!$Character::isLetterOrDigit(keyChar)) {
		return;
	}
	$var($MenuSelectionManager, manager, e->getMenuSelectionManager());
	$var($MenuElementArray, path, e->getPath());
	$var($MenuElementArray, items, $nc(this->this$0->popupMenu)->getSubElements());
	int32_t currentIndex = -1;
	int32_t matches = 0;
	int32_t firstMatch = -1;
	$var($ints, indexes, nullptr);
	for (int32_t j = 0; j < $nc(items)->length; ++j) {
		if (!($instanceOf($JMenuItem, items->get(j)))) {
			continue;
		}
		$var($JMenuItem, item, $cast($JMenuItem, items->get(j)));
		int32_t mnemonic = $nc(item)->getMnemonic();
		bool var$1 = item->isEnabled();
		bool var$0 = var$1 && item->isVisible();
		if (var$0) {
			char16_t var$2 = lower(keyChar);
			var$0 = var$2 == lower(mnemonic);
		}
		if (var$0) {
			if (matches == 0) {
				firstMatch = j;
				++matches;
			} else {
				if (indexes == nullptr) {
					$assign(indexes, $new($ints, items->length));
					indexes->set(0, firstMatch);
				}
				$nc(indexes)->set(matches++, j);
			}
		}
		bool var$3 = item->isArmed();
		if (var$3 || item->isSelected()) {
			currentIndex = matches - 1;
		}
	}
	if (matches == 0) {
	} else if (matches == 1) {
		$var($JMenuItem, item, $cast($JMenuItem, $nc(items)->get(firstMatch)));
		if ($instanceOf($JMenu, item)) {
			$set(this, menuToOpen, item);
		} else if ($nc(item)->isEnabled()) {
			$nc(manager)->clearSelectedPath();
			item->doClick();
		}
		e->consume();
	} else {
		$var($MenuElement, newItem, nullptr);
		$assign(newItem, $nc(items)->get($nc(indexes)->get($mod((currentIndex + 1), matches))));
		$var($MenuElementArray, newPath, $new($MenuElementArray, $nc(path)->length + 1));
		$System::arraycopy(path, 0, newPath, 0, path->length);
		newPath->set(path->length, newItem);
		$nc(manager)->setSelectedPath(newPath);
		e->consume();
	}
}

void BasicPopupMenuUI$BasicMenuKeyListener::menuKeyReleased($MenuKeyEvent* e) {
}

char16_t BasicPopupMenuUI$BasicMenuKeyListener::lower(char16_t keyChar) {
	return $Character::toLowerCase(keyChar);
}

char16_t BasicPopupMenuUI$BasicMenuKeyListener::lower(int32_t mnemonic) {
	return $Character::toLowerCase((char16_t)mnemonic);
}

BasicPopupMenuUI$BasicMenuKeyListener::BasicPopupMenuUI$BasicMenuKeyListener() {
}

$Class* BasicPopupMenuUI$BasicMenuKeyListener::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuUI$BasicMenuKeyListener, name, initialize, &_BasicPopupMenuUI$BasicMenuKeyListener_ClassInfo_, allocate$BasicPopupMenuUI$BasicMenuKeyListener);
	return class$;
}

$Class* BasicPopupMenuUI$BasicMenuKeyListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax