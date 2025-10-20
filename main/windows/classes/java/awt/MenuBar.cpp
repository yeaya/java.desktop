#include <java/awt/MenuBar.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar$1.h>
#include <java/awt/MenuBar$AccessibleAWTMenuBar.h>
#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/peer/MenuBarPeer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor$MenuBarAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef KEY_PRESSED
#undef KEY_RELEASED

using $AWTEvent = ::java::awt::AWTEvent;
using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Menu = ::java::awt::Menu;
using $MenuBar$1 = ::java::awt::MenuBar$1;
using $MenuBar$AccessibleAWTMenuBar = ::java::awt::MenuBar$AccessibleAWTMenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuComponent$AccessibleAWTMenuComponent = ::java::awt::MenuComponent$AccessibleAWTMenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MenuBarPeer = ::java::awt::peer::MenuBarPeer;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuBarAccessor = ::sun::awt::AWTAccessor$MenuBarAccessor;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$CompoundAttribute _MenuBar_MethodAnnotations_countMenus4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _MenuBar_FieldInfo_[] = {
	{"menus", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/Menu;>;", $PRIVATE | $FINAL, $field(MenuBar, menus)},
	{"helpMenu", "Ljava/awt/Menu;", nullptr, $PRIVATE | $VOLATILE, $field(MenuBar, helpMenu)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MenuBar, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(MenuBar, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuBar, serialVersionUID)},
	{"menuBarSerializedDataVersion", "I", nullptr, $PRIVATE, $field(MenuBar, menuBarSerializedDataVersion)},
	{}
};

$MethodInfo _MenuBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MenuBar::*)()>(&MenuBar::init$)), "java.awt.HeadlessException"},
	{"add", "(Ljava/awt/Menu;)Ljava/awt/Menu;", nullptr, $PUBLIC},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"countMenus", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _MenuBar_MethodAnnotations_countMenus4},
	{"deleteShortcut", "(Ljava/awt/MenuShortcut;)V", nullptr, $PUBLIC},
	{"getAccessibleChildIndex", "(Ljava/awt/MenuComponent;)I", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getHelpMenu", "()Ljava/awt/Menu;", nullptr, $PUBLIC},
	{"getMenu", "(I)Ljava/awt/Menu;", nullptr, $PUBLIC},
	{"getMenuCount", "()I", nullptr, $PUBLIC},
	{"getMenuCountImpl", "()I", nullptr, $FINAL, $method(static_cast<int32_t(MenuBar::*)()>(&MenuBar::getMenuCountImpl))},
	{"getMenuImpl", "(I)Ljava/awt/Menu;", nullptr, $FINAL, $method(static_cast<$Menu*(MenuBar::*)(int32_t)>(&MenuBar::getMenuImpl))},
	{"getShortcutMenuItem", "(Ljava/awt/MenuShortcut;)Ljava/awt/MenuItem;", nullptr, $PUBLIC},
	{"handleShortcut", "(Ljava/awt/event/KeyEvent;)Z", nullptr, 0},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&MenuBar::initIDs))},
	{"*postEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC | $DEPRECATED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuBar::*)($ObjectInputStream*)>(&MenuBar::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/MenuComponent;)V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setHelpMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC},
	{"shortcuts", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/awt/MenuShortcut;>;", $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuBar::*)($ObjectOutputStream*)>(&MenuBar::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 20

$InnerClassInfo _MenuBar_InnerClassesInfo_[] = {
	{"java.awt.MenuBar$AccessibleAWTMenuBar", "java.awt.MenuBar", "AccessibleAWTMenuBar", $PROTECTED},
	{"java.awt.MenuBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MenuBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.MenuBar",
	"java.awt.MenuComponent",
	"java.awt.MenuContainer,javax.accessibility.Accessible",
	_MenuBar_FieldInfo_,
	_MenuBar_MethodInfo_,
	nullptr,
	nullptr,
	_MenuBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.MenuBar$AccessibleAWTMenuBar,java.awt.MenuBar$1"
};

$Object* allocate$MenuBar($Class* clazz) {
	return $of($alloc(MenuBar));
}

$Font* MenuBar::getFont() {
	 return this->$MenuComponent::getFont();
}

bool MenuBar::postEvent($Event* evt) {
	 return this->$MenuComponent::postEvent(evt);
}

$String* MenuBar::toString() {
	 return this->$MenuComponent::toString();
}

int32_t MenuBar::hashCode() {
	 return this->$MenuComponent::hashCode();
}

bool MenuBar::equals(Object$* arg0) {
	 return this->$MenuComponent::equals(arg0);
}

$Object* MenuBar::clone() {
	 return this->$MenuComponent::clone();
}

void MenuBar::finalize() {
	this->$MenuComponent::finalize();
}

$String* MenuBar::base = nullptr;
int32_t MenuBar::nameCounter = 0;

void MenuBar::init$() {
	$MenuComponent::init$();
	$set(this, menus, $new($Vector));
	this->menuBarSerializedDataVersion = 1;
}

$String* MenuBar::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(MenuBar::class$) {
		$var($String, var$0, MenuBar::base);
		return $concat(var$0, $$str(MenuBar::nameCounter++));
	}
}

void MenuBar::addNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createMenuBar(this));
		}
		int32_t nmenus = getMenuCount();
		for (int32_t i = 0; i < nmenus; ++i) {
			$nc($(getMenu(i)))->addNotify();
		}
	}
}

void MenuBar::removeNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		int32_t nmenus = getMenuCount();
		for (int32_t i = 0; i < nmenus; ++i) {
			$nc($(getMenu(i)))->removeNotify();
		}
		$MenuComponent::removeNotify();
	}
}

$Menu* MenuBar::getHelpMenu() {
	return this->helpMenu;
}

void MenuBar::setHelpMenu($Menu* m) {
	$synchronized(getTreeLock()) {
		if (this->helpMenu == m) {
			return;
		}
		if (this->helpMenu != nullptr) {
			remove(static_cast<$MenuComponent*>(this->helpMenu));
		}
		$set(this, helpMenu, m);
		if (m != nullptr) {
			if (!$equals(m->parent, this)) {
				add(m);
			}
			m->isHelpMenu = true;
			$set(m, parent, this);
			$var($MenuBarPeer, peer, $cast($MenuBarPeer, this->peer));
			if (peer != nullptr) {
				if (m->peer == nullptr) {
					m->addNotify();
				}
				peer->addHelpMenu(m);
			}
		}
	}
}

$Menu* MenuBar::add($Menu* m) {
	$synchronized(getTreeLock()) {
		if ($nc(m)->parent != nullptr) {
			$nc(m->parent)->remove(m);
		}
		$set($nc(m), parent, this);
		$var($MenuBarPeer, peer, $cast($MenuBarPeer, this->peer));
		if (peer != nullptr) {
			if (m->peer == nullptr) {
				m->addNotify();
			}
			$nc(this->menus)->addElement(m);
			peer->addMenu(m);
		} else {
			$nc(this->menus)->addElement(m);
		}
		return m;
	}
}

void MenuBar::remove(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($Menu, m, getMenu(index));
		$nc(this->menus)->removeElementAt(index);
		$var($MenuBarPeer, peer, $cast($MenuBarPeer, this->peer));
		if (peer != nullptr) {
			peer->delMenu(index);
			$nc(m)->removeNotify();
		}
		$set($nc(m), parent, nullptr);
		if (this->helpMenu == m) {
			$set(this, helpMenu, nullptr);
			m->isHelpMenu = false;
		}
	}
}

void MenuBar::remove($MenuComponent* m) {
	$synchronized(getTreeLock()) {
		int32_t index = $nc(this->menus)->indexOf(m);
		if (index >= 0) {
			remove(index);
		}
	}
}

int32_t MenuBar::getMenuCount() {
	return countMenus();
}

int32_t MenuBar::countMenus() {
	return getMenuCountImpl();
}

int32_t MenuBar::getMenuCountImpl() {
	return $nc(this->menus)->size();
}

$Menu* MenuBar::getMenu(int32_t i) {
	return getMenuImpl(i);
}

$Menu* MenuBar::getMenuImpl(int32_t i) {
	return $cast($Menu, $nc(this->menus)->elementAt(i));
}

$Enumeration* MenuBar::shortcuts() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Vector, shortcuts, $new($Vector));
		int32_t nmenus = getMenuCount();
		for (int32_t i = 0; i < nmenus; ++i) {
			$var($Enumeration, e, $nc($(getMenu(i)))->shortcuts());
			while ($nc(e)->hasMoreElements()) {
				shortcuts->addElement($cast($MenuShortcut, $(e->nextElement())));
			}
		}
		return shortcuts->elements();
	}
}

$MenuItem* MenuBar::getShortcutMenuItem($MenuShortcut* s) {
	$useLocalCurrentObjectStackCache();
	int32_t nmenus = getMenuCount();
	for (int32_t i = 0; i < nmenus; ++i) {
		$var($MenuItem, mi, $nc($(getMenu(i)))->getShortcutMenuItem(s));
		if (mi != nullptr) {
			return mi;
		}
	}
	return nullptr;
}

bool MenuBar::handleShortcut($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t id = $nc(e)->getID();
	if (id != $KeyEvent::KEY_PRESSED && id != $KeyEvent::KEY_RELEASED) {
		return false;
	}
	int32_t accelKey = $nc($($Toolkit::getDefaultToolkit()))->getMenuShortcutKeyMaskEx();
	if (((int32_t)(e->getModifiersEx() & (uint32_t)accelKey)) == 0) {
		return false;
	}
	int32_t nmenus = getMenuCount();
	for (int32_t i = 0; i < nmenus; ++i) {
		$var($Menu, m, getMenu(i));
		if ($nc(m)->handleShortcut(e)) {
			return true;
		}
	}
	return false;
}

void MenuBar::deleteShortcut($MenuShortcut* s) {
	$useLocalCurrentObjectStackCache();
	int32_t nmenus = getMenuCount();
	for (int32_t i = 0; i < nmenus; ++i) {
		$nc($(getMenu(i)))->deleteShortcut(s);
	}
}

void MenuBar::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
}

void MenuBar::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	for (int32_t i = 0; i < $nc(this->menus)->size(); ++i) {
		$var($Menu, m, $cast($Menu, $nc(this->menus)->elementAt(i)));
		$set($nc(m), parent, this);
	}
}

void MenuBar::initIDs() {
	$init(MenuBar);
	$prepareNativeStatic(MenuBar, initIDs, void);
	$invokeNativeStatic(MenuBar, initIDs);
	$finishNativeStatic();
}

$AccessibleContext* MenuBar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($MenuBar$AccessibleAWTMenuBar, this));
	}
	return this->accessibleContext;
}

int32_t MenuBar::getAccessibleChildIndex($MenuComponent* child) {
	return $nc(this->menus)->indexOf(child);
}

void clinit$MenuBar($Class* class$) {
	$assignStatic(MenuBar::base, "menubar"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			MenuBar::initIDs();
		}
		$AWTAccessor::setMenuBarAccessor($$new($MenuBar$1));
	}
	MenuBar::nameCounter = 0;
}

MenuBar::MenuBar() {
}

$Class* MenuBar::load$($String* name, bool initialize) {
	$loadClass(MenuBar, name, initialize, &_MenuBar_ClassInfo_, clinit$MenuBar, allocate$MenuBar);
	return class$;
}

$Class* MenuBar::class$ = nullptr;

	} // awt
} // java