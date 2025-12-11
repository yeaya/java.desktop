#include <java/awt/Menu.h>

#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Menu$1.h>
#include <java/awt/Menu$AccessibleAWTMenu.h>
#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>
#include <java/awt/MenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/awt/peer/MenuItemPeer.h>
#include <java/awt/peer/MenuPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor$MenuAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Menu$1 = ::java::awt::Menu$1;
using $Menu$AccessibleAWTMenu = ::java::awt::Menu$AccessibleAWTMenu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuComponent$AccessibleAWTMenuComponent = ::java::awt::MenuComponent$AccessibleAWTMenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $MenuItem$AccessibleAWTMenuItem = ::java::awt::MenuItem$AccessibleAWTMenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $Toolkit = ::java::awt::Toolkit;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
using $MenuPeer = ::java::awt::peer::MenuPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuAccessor = ::sun::awt::AWTAccessor$MenuAccessor;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$CompoundAttribute _Menu_MethodAnnotations_countItems8[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Menu_FieldInfo_[] = {
	{"items", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/MenuItem;>;", $PRIVATE | $FINAL, $field(Menu, items)},
	{"tearOff", "Z", nullptr, $PRIVATE | $FINAL, $field(Menu, tearOff)},
	{"isHelpMenu", "Z", nullptr, $VOLATILE, $field(Menu, isHelpMenu)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Menu, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Menu, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Menu, serialVersionUID)},
	{"menuSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Menu, menuSerializedDataVersion)},
	{}
};

$MethodInfo _Menu_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Menu::*)()>(&Menu::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Menu::*)($String*)>(&Menu::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Menu::*)($String*,bool)>(&Menu::init$)), "java.awt.HeadlessException"},
	{"add", "(Ljava/awt/MenuItem;)Ljava/awt/MenuItem;", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"addSeparator", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"countItems", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Menu_MethodAnnotations_countItems8},
	{"countItemsImpl", "()I", nullptr, $FINAL, $method(static_cast<int32_t(Menu::*)()>(&Menu::countItemsImpl))},
	{"deleteShortcut", "(Ljava/awt/MenuShortcut;)V", nullptr, 0},
	{"getAccessibleChildIndex", "(Ljava/awt/MenuComponent;)I", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getItem", "(I)Ljava/awt/MenuItem;", nullptr, $PUBLIC},
	{"getItemCount", "()I", nullptr, $PUBLIC},
	{"getItemImpl", "(I)Ljava/awt/MenuItem;", nullptr, $FINAL, $method(static_cast<$MenuItem*(Menu::*)(int32_t)>(&Menu::getItemImpl))},
	{"getShortcutMenuItem", "(Ljava/awt/MenuShortcut;)Ljava/awt/MenuItem;", nullptr, 0},
	{"handleShortcut", "(Ljava/awt/event/KeyEvent;)Z", nullptr, 0},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Menu::initIDs))},
	{"insert", "(Ljava/awt/MenuItem;I)V", nullptr, $PUBLIC},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"insertSeparator", "(I)V", nullptr, $PUBLIC},
	{"isTearOff", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*postEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC | $DEPRECATED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Menu::*)($ObjectInputStream*)>(&Menu::readObject)), "java.io.IOException,java.lang.ClassNotFoundException,java.awt.HeadlessException"},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/MenuComponent;)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"shortcuts", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/awt/MenuShortcut;>;", $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Menu::*)($ObjectOutputStream*)>(&Menu::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 23

$InnerClassInfo _Menu_InnerClassesInfo_[] = {
	{"java.awt.Menu$AccessibleAWTMenu", "java.awt.Menu", "AccessibleAWTMenu", $PROTECTED},
	{"java.awt.Menu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Menu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Menu",
	"java.awt.MenuItem",
	"java.awt.MenuContainer",
	_Menu_FieldInfo_,
	_Menu_MethodInfo_,
	nullptr,
	nullptr,
	_Menu_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Menu$AccessibleAWTMenu,java.awt.Menu$1"
};

$Object* allocate$Menu($Class* clazz) {
	return $of($alloc(Menu));
}

$Font* Menu::getFont() {
	 return this->$MenuItem::getFont();
}

bool Menu::postEvent($Event* evt) {
	 return this->$MenuItem::postEvent(evt);
}

$String* Menu::toString() {
	 return this->$MenuItem::toString();
}

int32_t Menu::hashCode() {
	 return this->$MenuItem::hashCode();
}

bool Menu::equals(Object$* arg0) {
	 return this->$MenuItem::equals(arg0);
}

$Object* Menu::clone() {
	 return this->$MenuItem::clone();
}

void Menu::finalize() {
	this->$MenuItem::finalize();
}

$String* Menu::base = nullptr;
int32_t Menu::nameCounter = 0;

void Menu::init$() {
	Menu::init$(""_s, false);
}

void Menu::init$($String* label) {
	Menu::init$(label, false);
}

void Menu::init$($String* label, bool tearOff) {
	$MenuItem::init$(label);
	$set(this, items, $new($Vector));
	this->menuSerializedDataVersion = 1;
	this->tearOff = tearOff;
}

$String* Menu::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Menu::class$) {
		$var($String, var$0, Menu::base);
		return $concat(var$0, $$str(Menu::nameCounter++));
	}
}

void Menu::addNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createMenu(this));
		}
		int32_t nitems = getItemCount();
		for (int32_t i = 0; i < nitems; ++i) {
			$var($MenuItem, mi, getItem(i));
			$set($nc(mi), parent, this);
			mi->addNotify();
		}
	}
}

void Menu::removeNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		int32_t nitems = getItemCount();
		for (int32_t i = 0; i < nitems; ++i) {
			$nc($(getItem(i)))->removeNotify();
		}
		$MenuItem::removeNotify();
	}
}

bool Menu::isTearOff() {
	return this->tearOff;
}

int32_t Menu::getItemCount() {
	return countItems();
}

int32_t Menu::countItems() {
	return countItemsImpl();
}

int32_t Menu::countItemsImpl() {
	return $nc(this->items)->size();
}

$MenuItem* Menu::getItem(int32_t index) {
	return getItemImpl(index);
}

$MenuItem* Menu::getItemImpl(int32_t index) {
	return $cast($MenuItem, $nc(this->items)->elementAt(index));
}

$MenuItem* Menu::add($MenuItem* mi) {
	$synchronized(getTreeLock()) {
		if ($nc(mi)->parent != nullptr) {
			$nc(mi->parent)->remove(mi);
		}
		$nc(this->items)->addElement(mi);
		$set($nc(mi), parent, this);
		$var($MenuPeer, peer, $cast($MenuPeer, this->peer));
		if (peer != nullptr) {
			mi->addNotify();
			peer->addItem(mi);
		}
		return mi;
	}
}

void Menu::add($String* label) {
	add($$new($MenuItem, label));
}

void Menu::insert($MenuItem* menuitem, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		if (index < 0) {
			$throwNew($IllegalArgumentException, "index less than zero."_s);
		}
		int32_t nitems = getItemCount();
		$var($Vector, tempItems, $new($Vector));
		for (int32_t i = index; i < nitems; ++i) {
			tempItems->addElement($(getItem(index)));
			remove(index);
		}
		add(menuitem);
		for (int32_t i = 0; i < tempItems->size(); ++i) {
			add($cast($MenuItem, $(tempItems->elementAt(i))));
		}
	}
}

void Menu::insert($String* label, int32_t index) {
	insert($$new($MenuItem, label), index);
}

void Menu::addSeparator() {
	add("-"_s);
}

void Menu::insertSeparator(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		if (index < 0) {
			$throwNew($IllegalArgumentException, "index less than zero."_s);
		}
		int32_t nitems = getItemCount();
		$var($Vector, tempItems, $new($Vector));
		for (int32_t i = index; i < nitems; ++i) {
			tempItems->addElement($(getItem(index)));
			remove(index);
		}
		addSeparator();
		for (int32_t i = 0; i < tempItems->size(); ++i) {
			add($cast($MenuItem, $(tempItems->elementAt(i))));
		}
	}
}

void Menu::remove(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($MenuItem, mi, getItem(index));
		$nc(this->items)->removeElementAt(index);
		$var($MenuPeer, peer, $cast($MenuPeer, this->peer));
		if (peer != nullptr) {
			peer->delItem(index);
			$nc(mi)->removeNotify();
		}
		$set($nc(mi), parent, nullptr);
	}
}

void Menu::remove($MenuComponent* item) {
	$synchronized(getTreeLock()) {
		int32_t index = $nc(this->items)->indexOf(item);
		if (index >= 0) {
			remove(index);
		}
	}
}

void Menu::removeAll() {
	$synchronized(getTreeLock()) {
		int32_t nitems = getItemCount();
		for (int32_t i = nitems - 1; i >= 0; --i) {
			remove(i);
		}
	}
}

bool Menu::handleShortcut($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t nitems = getItemCount();
	for (int32_t i = 0; i < nitems; ++i) {
		$var($MenuItem, mi, getItem(i));
		if ($nc(mi)->handleShortcut(e)) {
			return true;
		}
	}
	return false;
}

$MenuItem* Menu::getShortcutMenuItem($MenuShortcut* s) {
	$useLocalCurrentObjectStackCache();
	int32_t nitems = getItemCount();
	for (int32_t i = 0; i < nitems; ++i) {
		$var($MenuItem, mi, $nc($(getItem(i)))->getShortcutMenuItem(s));
		if (mi != nullptr) {
			return mi;
		}
	}
	return nullptr;
}

$Enumeration* Menu::shortcuts() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Vector, shortcuts, $new($Vector));
		int32_t nitems = getItemCount();
		for (int32_t i = 0; i < nitems; ++i) {
			$var($MenuItem, mi, getItem(i));
			if ($instanceOf(Menu, mi)) {
				$var($Enumeration, e, $nc(($cast(Menu, mi)))->shortcuts());
				while ($nc(e)->hasMoreElements()) {
					shortcuts->addElement($cast($MenuShortcut, $(e->nextElement())));
				}
			} else {
				$var($MenuShortcut, ms, $nc(mi)->getShortcut());
				if (ms != nullptr) {
					shortcuts->addElement(ms);
				}
			}
		}
		return shortcuts->elements();
	}
}

void Menu::deleteShortcut($MenuShortcut* s) {
	$useLocalCurrentObjectStackCache();
	int32_t nitems = getItemCount();
	for (int32_t i = 0; i < nitems; ++i) {
		$nc($(getItem(i)))->deleteShortcut(s);
	}
}

void Menu::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
}

void Menu::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	for (int32_t i = 0; i < $nc(this->items)->size(); ++i) {
		$var($MenuItem, item, $cast($MenuItem, $nc(this->items)->elementAt(i)));
		$set($nc(item), parent, this);
	}
}

$String* Menu::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $str({",tearOff="_s, $$str(this->tearOff), ",isHelpMenu="_s, $$str(this->isHelpMenu)}));
	return $str({$($MenuItem::paramString()), str});
}

void Menu::initIDs() {
	$init(Menu);
	$prepareNativeStatic(Menu, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$AccessibleContext* Menu::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Menu$AccessibleAWTMenu, this));
	}
	return this->accessibleContext;
}

int32_t Menu::getAccessibleChildIndex($MenuComponent* child) {
	return $nc(this->items)->indexOf(child);
}

void clinit$Menu($Class* class$) {
	$assignStatic(Menu::base, "menu"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Menu::initIDs();
		}
		$AWTAccessor::setMenuAccessor($$new($Menu$1));
	}
	Menu::nameCounter = 0;
}

Menu::Menu() {
}

$Class* Menu::load$($String* name, bool initialize) {
	$loadClass(Menu, name, initialize, &_Menu_ClassInfo_, clinit$Menu, allocate$Menu);
	return class$;
}

$Class* Menu::class$ = nullptr;

	} // awt
} // java