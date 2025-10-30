#include <javax/swing/plaf/basic/BasicMenuUI$Actions.h>

#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef SELECT

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuUI$Actions_FieldInfo_[] = {
	{"SELECT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicMenuUI$Actions, SELECT)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE, $field(BasicMenuUI$Actions, menu)},
	{"force", "Z", nullptr, $PRIVATE, $field(BasicMenuUI$Actions, force)},
	{}
};

$MethodInfo _BasicMenuUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/swing/JMenu;Z)V", nullptr, 0, $method(static_cast<void(BasicMenuUI$Actions::*)($String*,$JMenu*,bool)>(&BasicMenuUI$Actions::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"getMenu", "(Ljava/awt/event/ActionEvent;)Ljavax/swing/JMenu;", nullptr, $PRIVATE, $method(static_cast<$JMenu*(BasicMenuUI$Actions::*)($ActionEvent*)>(&BasicMenuUI$Actions::getMenu))},
	{}
};

$InnerClassInfo _BasicMenuUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuUI$Actions", "javax.swing.plaf.basic.BasicMenuUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicMenuUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicMenuUI$Actions_FieldInfo_,
	_BasicMenuUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuUI"
};

$Object* allocate$BasicMenuUI$Actions($Class* clazz) {
	return $of($alloc(BasicMenuUI$Actions));
}

$String* BasicMenuUI$Actions::SELECT = nullptr;

void BasicMenuUI$Actions::init$($String* key, $JMenu* menu, bool shouldForce) {
	$UIAction::init$(key);
	this->force = false;
	$set(this, menu, menu);
	this->force = shouldForce;
}

$JMenu* BasicMenuUI$Actions::getMenu($ActionEvent* e) {
	if ($instanceOf($JMenu, $($nc(e)->getSource()))) {
		return $cast($JMenu, e->getSource());
	}
	return this->menu;
}

void BasicMenuUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, menu, getMenu(e));
	$init($BasicMenuUI);
	if (!$BasicMenuUI::crossMenuMnemonic) {
		$var($JPopupMenu, pm, $BasicPopupMenuUI::getLastPopup());
		if (pm != nullptr && !$equals(pm, $nc(menu)->getParent())) {
			return;
		}
	}
	$var($MenuSelectionManager, defaultManager, $MenuSelectionManager::defaultManager());
	if (this->force) {
		$var($Container, cnt, $nc(menu)->getParent());
		if (cnt != nullptr && $instanceOf($JMenuBar, cnt)) {
			$var($MenuElementArray, me, nullptr);
			$var($MenuElementArray, subElements, nullptr);
			$assign(subElements, $nc($(menu->getPopupMenu()))->getSubElements());
			if ($nc(subElements)->length > 0) {
				$assign(me, $new($MenuElementArray, 4));
				me->set(0, $cast($MenuElement, cnt));
				me->set(1, menu);
				me->set(2, $(menu->getPopupMenu()));
				me->set(3, subElements->get(0));
			} else {
				$assign(me, $new($MenuElementArray, 3));
				me->set(0, $cast($MenuElement, cnt));
				me->set(1, menu);
				me->set(2, $(menu->getPopupMenu()));
			}
			$nc(defaultManager)->setSelectedPath(me);
		}
	} else {
		$var($MenuElementArray, path, $nc(defaultManager)->getSelectedPath());
		if ($nc(path)->length > 0 && $equals(path->get(path->length - 1), menu)) {
			$BasicMenuUI::appendPath(path, $($nc(menu)->getPopupMenu()));
		}
	}
}

bool BasicMenuUI$Actions::accept(Object$* c) {
	if ($instanceOf($JMenu, c)) {
		return $nc(($cast($JMenu, c)))->isEnabled();
	}
	return true;
}

BasicMenuUI$Actions::BasicMenuUI$Actions() {
}

void clinit$BasicMenuUI$Actions($Class* class$) {
	$assignStatic(BasicMenuUI$Actions::SELECT, "selectMenu"_s);
}

$Class* BasicMenuUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicMenuUI$Actions, name, initialize, &_BasicMenuUI$Actions_ClassInfo_, clinit$BasicMenuUI$Actions, allocate$BasicMenuUI$Actions);
	return class$;
}

$Class* BasicMenuUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax