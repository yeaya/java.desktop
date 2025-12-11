#include <com/apple/laf/ScreenMenuBar.h>

#include <com/apple/laf/ScreenMenu.h>
#include <com/apple/laf/ScreenMenuPropertyHandler.h>
#include <com/apple/laf/ScreenMenuPropertyListener.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/Enumeration.h>
#include <java/util/EventObject.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <sun/awt/AWTAccessor$MenuBarAccessor.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CMenuBar.h>
#include <jcpp.h>

using $ScreenMenu = ::com::apple::laf::ScreenMenu;
using $ScreenMenuPropertyHandler = ::com::apple::laf::ScreenMenuPropertyHandler;
using $ScreenMenuPropertyListener = ::com::apple::laf::ScreenMenuPropertyListener;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuBarAccessor = ::sun::awt::AWTAccessor$MenuBarAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $CMenuBar = ::sun::lwawt::macosx::CMenuBar;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ScreenMenuBar_FieldInfo_[] = {
	{"sJMenuBarHasHelpMenus", "Z", nullptr, $STATIC, $staticField(ScreenMenuBar, sJMenuBarHasHelpMenus)},
	{"fSwingBar", "Ljavax/swing/JMenuBar;", nullptr, 0, $field(ScreenMenuBar, fSwingBar)},
	{"fSubmenus", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/JMenu;Lcom/apple/laf/ScreenMenu;>;", 0, $field(ScreenMenuBar, fSubmenus)},
	{"fPropertyListener", "Lcom/apple/laf/ScreenMenuPropertyListener;", nullptr, 0, $field(ScreenMenuBar, fPropertyListener)},
	{"fAccessibleListener", "Lcom/apple/laf/ScreenMenuPropertyListener;", nullptr, 0, $field(ScreenMenuBar, fAccessibleListener)},
	{}
};

$MethodInfo _ScreenMenuBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, $method(static_cast<void(ScreenMenuBar::*)($JMenuBar*)>(&ScreenMenuBar::init$))},
	{"add", "(Ljava/awt/Menu;I)Ljava/awt/Menu;", nullptr, $PUBLIC},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"addSubmenu", "(Ljavax/swing/JMenu;)Lcom/apple/laf/ScreenMenu;", nullptr, 0},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"removeSubmenu", "(Ljavax/swing/JMenu;)V", nullptr, $PRIVATE, $method(static_cast<void(ScreenMenuBar::*)($JMenu*)>(&ScreenMenuBar::removeSubmenu))},
	{"setAccelerator", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC},
	{"setChildVisible", "(Ljavax/swing/JMenuItem;Z)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setIndeterminate", "(Z)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ScreenMenuBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.ScreenMenuBar",
	"java.awt.MenuBar",
	"java.awt.event.ContainerListener,com.apple.laf.ScreenMenuPropertyHandler,java.awt.event.ComponentListener",
	_ScreenMenuBar_FieldInfo_,
	_ScreenMenuBar_MethodInfo_
};

$Object* allocate$ScreenMenuBar($Class* clazz) {
	return $of($alloc(ScreenMenuBar));
}

void ScreenMenuBar::setFont($Font* f) {
	this->$MenuBar::setFont(f);
}

$String* ScreenMenuBar::toString() {
	 return this->$MenuBar::toString();
}

int32_t ScreenMenuBar::hashCode() {
	 return this->$MenuBar::hashCode();
}

bool ScreenMenuBar::equals(Object$* arg0) {
	 return this->$MenuBar::equals(arg0);
}

$Object* ScreenMenuBar::clone() {
	 return this->$MenuBar::clone();
}

void ScreenMenuBar::finalize() {
	this->$MenuBar::finalize();
}

bool ScreenMenuBar::sJMenuBarHasHelpMenus = false;

void ScreenMenuBar::init$($JMenuBar* swingBar) {
	$MenuBar::init$();
	$set(this, fSwingBar, swingBar);
	$set(this, fSubmenus, $new($Hashtable, $nc(this->fSwingBar)->getMenuCount()));
}

void ScreenMenuBar::addNotify() {
	$useLocalCurrentObjectStackCache();
	$MenuBar::addNotify();
	$nc(this->fSwingBar)->addContainerListener(this);
	$set(this, fPropertyListener, $new($ScreenMenuPropertyListener, this));
	$nc(this->fSwingBar)->addPropertyChangeListener(this->fPropertyListener);
	$set(this, fAccessibleListener, $new($ScreenMenuPropertyListener, this));
	$nc($($nc(this->fSwingBar)->getAccessibleContext()))->addPropertyChangeListener(this->fAccessibleListener);
	int32_t count = $nc(this->fSwingBar)->getMenuCount();
	for (int32_t i = 0; i < count; ++i) {
		$var($JMenu, m, $nc(this->fSwingBar)->getMenu(i));
		if (m != nullptr) {
			addSubmenu(m);
		}
	}
	$var($Enumeration, e, $nc(this->fSubmenus)->keys());
	while ($nc(e)->hasMoreElements()) {
		$var($JMenu, m, $cast($JMenu, e->nextElement()));
		if ($nc(this->fSwingBar)->getComponentIndex(m) == -1) {
			removeSubmenu(m);
		}
	}
}

void ScreenMenuBar::removeNotify() {
	$useLocalCurrentObjectStackCache();
	if (this->fSwingBar != nullptr) {
		$nc(this->fSwingBar)->removePropertyChangeListener(this->fPropertyListener);
		$nc($($nc(this->fSwingBar)->getAccessibleContext()))->removePropertyChangeListener(this->fAccessibleListener);
		$nc(this->fSwingBar)->removeContainerListener(this);
	}
	$set(this, fPropertyListener, nullptr);
	$set(this, fAccessibleListener, nullptr);
	if (this->fSubmenus != nullptr) {
		$var($Enumeration, e, $nc(this->fSubmenus)->keys());
		while ($nc(e)->hasMoreElements()) {
			$var($JMenu, m, $cast($JMenu, e->nextElement()));
			$nc(m)->removeComponentListener(this);
		}
	}
	$MenuBar::removeNotify();
}

void ScreenMenuBar::componentAdded($ContainerEvent* e) {
	$var($Component, child, $nc(e)->getChild());
	if (!($instanceOf($JMenu, child))) {
		return;
	}
	addSubmenu($cast($JMenu, child));
}

void ScreenMenuBar::componentRemoved($ContainerEvent* e) {
	$var($Component, child, $nc(e)->getChild());
	if (!($instanceOf($JMenu, child))) {
		return;
	}
	removeSubmenu($cast($JMenu, child));
}

void ScreenMenuBar::componentResized($ComponentEvent* e) {
}

void ScreenMenuBar::componentMoved($ComponentEvent* e) {
}

void ScreenMenuBar::componentShown($ComponentEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	if (!($instanceOf($JMenuItem, source))) {
		return;
	}
	setChildVisible($cast($JMenuItem, source), true);
}

void ScreenMenuBar::componentHidden($ComponentEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	if (!($instanceOf($JMenuItem, source))) {
		return;
	}
	setChildVisible($cast($JMenuItem, source), false);
}

void ScreenMenuBar::setChildVisible($JMenuItem* child, bool b) {
	if ($instanceOf($JMenu, child)) {
		if (b) {
			addSubmenu($cast($JMenu, child));
		} else {
			$var($ScreenMenu, sm, $cast($ScreenMenu, $nc(this->fSubmenus)->get(child)));
			if (sm != nullptr) {
				remove(static_cast<$MenuComponent*>(sm));
			}
		}
	}
}

void ScreenMenuBar::removeAll() {
	$synchronized(getTreeLock()) {
		int32_t nitems = getMenuCount();
		for (int32_t i = nitems - 1; i >= 0; --i) {
			remove(i);
		}
	}
}

void ScreenMenuBar::setIcon($Icon* i) {
}

void ScreenMenuBar::setLabel($String* s) {
}

void ScreenMenuBar::setEnabled(bool b) {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->fSwingBar)->getMenuCount();
	for (int32_t i = 0; i < count; ++i) {
		$nc($($nc(this->fSwingBar)->getMenu(i)))->setEnabled(b);
	}
}

void ScreenMenuBar::setAccelerator($KeyStroke* ks) {
}

void ScreenMenuBar::setToolTipText($String* tooltip) {
}

void ScreenMenuBar::setIndeterminate(bool indeterminate) {
}

$ScreenMenu* ScreenMenuBar::addSubmenu($JMenu* m) {
	$useLocalCurrentObjectStackCache();
	$var($ScreenMenu, sm, $cast($ScreenMenu, $nc(this->fSubmenus)->get(m)));
	if (sm == nullptr) {
		$assign(sm, $new($ScreenMenu, m));
		$nc(m)->addComponentListener(this);
		$nc(this->fSubmenus)->put(m, sm);
	}
	$nc(sm)->setEnabled($nc(m)->isEnabled());
	bool var$0 = $nc(m)->isVisible();
	if (var$0 && sm->getParent() == nullptr) {
		int32_t newIndex = 0;
		int32_t currVisibleIndex = 0;
		$var($JMenu, menu, nullptr);
		int32_t menuCount = $nc(this->fSwingBar)->getMenuCount();
		for (int32_t i = 0; i < menuCount; ++i) {
			$assign(menu, $nc(this->fSwingBar)->getMenu(i));
			if (menu == m) {
				newIndex = currVisibleIndex;
				break;
			}
			if (menu != nullptr && menu->isVisible()) {
				++currVisibleIndex;
			}
		}
		add(sm, newIndex);
	}
	return sm;
}

void ScreenMenuBar::removeSubmenu($JMenu* menu) {
	$var($ScreenMenu, screenMenu, $cast($ScreenMenu, $nc(this->fSubmenus)->get(menu)));
	if (screenMenu == nullptr) {
		return;
	}
	$nc(menu)->removeComponentListener(this);
	remove(static_cast<$MenuComponent*>(screenMenu));
	$nc(this->fSubmenus)->remove(menu);
}

$Menu* ScreenMenuBar::add($Menu* m, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		if ($nc(m)->getParent() != nullptr) {
			$nc($(m->getParent()))->remove(m);
		}
		$var($Vector, menus, $nc($($AWTAccessor::getMenuBarAccessor()))->getMenus(this));
		$nc(menus)->insertElementAt(m, index);
		$var($AWTAccessor$MenuComponentAccessor, acc, $AWTAccessor::getMenuComponentAccessor());
		$nc(acc)->setParent(m, this);
		$var($CMenuBar, peer, $cast($CMenuBar, acc->getPeer(this)));
		if (peer == nullptr) {
			return m;
		}
		$nc(peer)->setNextInsertionIndex(index);
		$var($CMenuBar, mPeer, $cast($CMenuBar, acc->getPeer(m)));
		if (mPeer == nullptr) {
			$nc(m)->addNotify();
		}
		peer->setNextInsertionIndex(-1);
		return m;
	}
}

void clinit$ScreenMenuBar($Class* class$) {
	ScreenMenuBar::sJMenuBarHasHelpMenus = false;
}

ScreenMenuBar::ScreenMenuBar() {
}

$Class* ScreenMenuBar::load$($String* name, bool initialize) {
	$loadClass(ScreenMenuBar, name, initialize, &_ScreenMenuBar_ClassInfo_, clinit$ScreenMenuBar, allocate$ScreenMenuBar);
	return class$;
}

$Class* ScreenMenuBar::class$ = nullptr;

		} // laf
	} // apple
} // com