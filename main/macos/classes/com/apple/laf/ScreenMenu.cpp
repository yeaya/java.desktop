#include <com/apple/laf/ScreenMenu.h>

#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/ScreenMenu$1.h>
#include <com/apple/laf/ScreenMenu$2.h>
#include <com/apple/laf/ScreenMenu$3.h>
#include <com/apple/laf/ScreenMenu$4.h>
#include <com/apple/laf/ScreenMenuItem.h>
#include <com/apple/laf/ScreenMenuItemCheckbox.h>
#include <com/apple/laf/ScreenMenuPropertyHandler.h>
#include <com/apple/laf/ScreenMenuPropertyListener.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Image.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu$Separator.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/KeyStroke.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CMenu.h>
#include <sun/lwawt/macosx/CMenuItem.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $AquaIcon = ::com::apple::laf::AquaIcon;
using $ScreenMenu$1 = ::com::apple::laf::ScreenMenu$1;
using $ScreenMenu$2 = ::com::apple::laf::ScreenMenu$2;
using $ScreenMenu$3 = ::com::apple::laf::ScreenMenu$3;
using $ScreenMenu$4 = ::com::apple::laf::ScreenMenu$4;
using $ScreenMenuItem = ::com::apple::laf::ScreenMenuItem;
using $ScreenMenuItemCheckbox = ::com::apple::laf::ScreenMenuItemCheckbox;
using $ScreenMenuPropertyHandler = ::com::apple::laf::ScreenMenuPropertyHandler;
using $ScreenMenuPropertyListener = ::com::apple::laf::ScreenMenuPropertyListener;
using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Image = ::java::awt::Image;
using $Menu = ::java::awt::Menu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $Icon = ::javax::swing::Icon;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JPopupMenu$Separator = ::javax::swing::JPopupMenu$Separator;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $JSeparator = ::javax::swing::JSeparator;
using $KeyStroke = ::javax::swing::KeyStroke;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CMenu = ::sun::lwawt::macosx::CMenu;
using $CMenuItem = ::sun::lwawt::macosx::CMenuItem;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ScreenMenu_FieldInfo_[] = {
	{"fModelPtr", "J", nullptr, $PRIVATE | $TRANSIENT, $field(ScreenMenu, fModelPtr)},
	{"fItems", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/awt/Component;Ljava/awt/MenuItem;>;", $PRIVATE | $FINAL, $field(ScreenMenu, fItems)},
	{"fInvoker", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $FINAL, $field(ScreenMenu, fInvoker)},
	{"fLastMouseEventTarget", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(ScreenMenu, fLastMouseEventTarget)},
	{"fLastTargetRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(ScreenMenu, fLastTargetRect)},
	{"fItemBounds", "[Ljava/awt/Rectangle;", nullptr, $PRIVATE | $VOLATILE, $field(ScreenMenu, fItemBounds)},
	{"fPropertyListener", "Lcom/apple/laf/ScreenMenuPropertyListener;", nullptr, $PRIVATE, $field(ScreenMenu, fPropertyListener)},
	{"childHashArray", "[I", nullptr, $PRIVATE, $field(ScreenMenu, childHashArray)},
	{}
};

$MethodInfo _ScreenMenu_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JMenu;)V", nullptr, 0, $method(static_cast<void(ScreenMenu::*)($JMenu*)>(&ScreenMenu::init$))},
	{"addItem", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(ScreenMenu::*)($Component*)>(&ScreenMenu::addItem))},
	{"addMenuListeners", "(Lcom/apple/laf/ScreenMenu;J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(ScreenMenu*,int64_t)>(&ScreenMenu::addMenuListeners))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"getHashCode", "(Ljava/awt/Component;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Component*)>(&ScreenMenu::getHashCode))},
	{"handleItemTargeted", "(IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(ScreenMenu::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&ScreenMenu::handleItemTargeted))},
	{"handleMouseEvent", "(IIIIJ)V", nullptr, $PUBLIC, $method(static_cast<void(ScreenMenu::*)(int32_t,int32_t,int32_t,int32_t,int64_t)>(&ScreenMenu::handleMouseEvent))},
	{"invokeMenuClosing", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScreenMenu::*)()>(&ScreenMenu::invokeMenuClosing))},
	{"invokeOpenLater", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScreenMenu::*)()>(&ScreenMenu::invokeOpenLater))},
	{"needsUpdate", "([Ljava/awt/Component;[I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ComponentArray*,$ints*)>(&ScreenMenu::needsUpdate))},
	{"removeMenuListeners", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&ScreenMenu::removeMenuListeners))},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setAccelerator", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC},
	{"setChildVisible", "(Ljavax/swing/JMenuItem;Z)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setIndeterminate", "(Z)V", nullptr, $PUBLIC},
	{"*setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(ScreenMenu::*)(bool)>(&ScreenMenu::setVisible))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateItems", "()V", nullptr, $PRIVATE, $method(static_cast<void(ScreenMenu::*)()>(&ScreenMenu::updateItems))},
	{}
};

#define _METHOD_INDEX_addMenuListeners 6
#define _METHOD_INDEX_removeMenuListeners 20

$InnerClassInfo _ScreenMenu_InnerClassesInfo_[] = {
	{"com.apple.laf.ScreenMenu$4", nullptr, nullptr, 0},
	{"com.apple.laf.ScreenMenu$3", nullptr, nullptr, 0},
	{"com.apple.laf.ScreenMenu$2", nullptr, nullptr, 0},
	{"com.apple.laf.ScreenMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScreenMenu_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.ScreenMenu",
	"java.awt.Menu",
	"java.awt.event.ContainerListener,java.awt.event.ComponentListener,com.apple.laf.ScreenMenuPropertyHandler",
	_ScreenMenu_FieldInfo_,
	_ScreenMenu_MethodInfo_,
	nullptr,
	nullptr,
	_ScreenMenu_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.ScreenMenu$4,com.apple.laf.ScreenMenu$3,com.apple.laf.ScreenMenu$2,com.apple.laf.ScreenMenu$1"
};

$Object* allocate$ScreenMenu($Class* clazz) {
	return $of($alloc(ScreenMenu));
}

void ScreenMenu::setLabel($String* label) {
	this->$Menu::setLabel(label);
}

void ScreenMenu::setEnabled(bool b) {
	this->$Menu::setEnabled(b);
}

void ScreenMenu::setFont($Font* f) {
	this->$Menu::setFont(f);
}

$String* ScreenMenu::toString() {
	 return this->$Menu::toString();
}

int32_t ScreenMenu::hashCode() {
	 return this->$Menu::hashCode();
}

bool ScreenMenu::equals(Object$* arg0) {
	 return this->$Menu::equals(arg0);
}

$Object* ScreenMenu::clone() {
	 return this->$Menu::clone();
}

void ScreenMenu::finalize() {
	this->$Menu::finalize();
}

int64_t ScreenMenu::addMenuListeners(ScreenMenu* listener, int64_t nativeMenu) {
	$init(ScreenMenu);
	int64_t $ret = 0;
	$prepareNativeStatic(ScreenMenu, addMenuListeners, int64_t, ScreenMenu* listener, int64_t nativeMenu);
	$ret = $invokeNativeStatic(listener, nativeMenu);
	$finishNativeStatic();
	return $ret;
}

void ScreenMenu::removeMenuListeners(int64_t modelPtr) {
	$init(ScreenMenu);
	$prepareNativeStatic(ScreenMenu, removeMenuListeners, void, int64_t modelPtr);
	$invokeNativeStatic(modelPtr);
	$finishNativeStatic();
}

void ScreenMenu::init$($JMenu* invoker) {
	$Menu::init$($($nc(invoker)->getText()));
	$set(this, fInvoker, invoker);
	int32_t count = $nc(this->fInvoker)->getMenuComponentCount();
	if (count < 5) {
		count = 5;
	}
	$set(this, fItems, $new($Hashtable, count));
	setEnabled($nc(this->fInvoker)->isEnabled());
	updateItems();
}

bool ScreenMenu::needsUpdate($ComponentArray* items, $ints* childHashArray) {
	$init(ScreenMenu);
	if (items == nullptr || childHashArray == nullptr) {
		return true;
	}
	if ($nc(childHashArray)->length != $nc(items)->length) {
		return true;
	}
	for (int32_t i = 0; i < $nc(items)->length; ++i) {
		int32_t hashCode = getHashCode(items->get(i));
		if (hashCode != $nc(childHashArray)->get(i)) {
			return true;
		}
	}
	return false;
}

void ScreenMenu::updateItems() {
	int32_t count = $nc(this->fInvoker)->getMenuComponentCount();
	$var($ComponentArray, items, $nc(this->fInvoker)->getMenuComponents());
	if (needsUpdate(items, this->childHashArray)) {
		removeAll();
		$nc(this->fItems)->clear();
		if (count <= 0) {
			return;
		}
		$set(this, childHashArray, $new($ints, count));
		for (int32_t i = 0; i < count; ++i) {
			addItem($nc(items)->get(i));
			$nc(this->childHashArray)->set(i, getHashCode($nc(items)->get(i)));
		}
	}
}

void ScreenMenu::invokeOpenLater() {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, invoker, this->fInvoker);
	if (invoker == nullptr) {
		$nc($System::err)->println("invoker is null!"_s);
		return;
	}
	try {
		$LWCToolkit::invokeAndWait(static_cast<$Runnable*>($$new($ScreenMenu$2, this, invoker)), static_cast<$Component*>(invoker));
	} catch ($Exception& e) {
		$nc($System::err)->println($of(e));
		e->printStackTrace();
	}
}

void ScreenMenu::invokeMenuClosing() {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, invoker, this->fInvoker);
	if (invoker == nullptr) {
		return;
	}
	try {
		$LWCToolkit::invokeAndWait(static_cast<$Runnable*>($$new($ScreenMenu$3, this, invoker)), static_cast<$Component*>(invoker));
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

void ScreenMenu::handleItemTargeted(int32_t inWhichItem, int32_t itemRectTop, int32_t itemRectLeft, int32_t itemRectBottom, int32_t itemRectRight) {
	if (this->fItemBounds == nullptr || inWhichItem < 0 || inWhichItem > ($nc(this->fItemBounds)->length - 1)) {
		return;
	}
	$var($Rectangle, itemRect, $new($Rectangle, itemRectLeft, itemRectTop, itemRectRight - itemRectLeft, itemRectBottom - itemRectTop));
	$nc(this->fItemBounds)->set(inWhichItem, itemRect);
}

void ScreenMenu::handleMouseEvent(int32_t kind, int32_t x, int32_t y, int32_t modifiers, int64_t when) {
	if (kind == 0) {
		return;
	}
	if (this->fItemBounds == nullptr) {
		return;
	}
	$SunToolkit::executeOnEventHandlerThread(this->fInvoker, $$new($ScreenMenu$4, this, x, y, when, modifiers, kind));
}

void ScreenMenu::addNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$Menu::addNotify();
		if (this->fModelPtr == 0) {
			$nc($($nc(this->fInvoker)->getPopupMenu()))->addContainerListener(this);
			$nc(this->fInvoker)->addComponentListener(this);
			$set(this, fPropertyListener, $new($ScreenMenuPropertyListener, this));
			$nc(this->fInvoker)->addPropertyChangeListener(this->fPropertyListener);
			$var($Icon, icon, $nc(this->fInvoker)->getIcon());
			if (icon != nullptr) {
				setIcon(icon);
			}
			$var($String, tooltipText, $nc(this->fInvoker)->getToolTipText());
			if (tooltipText != nullptr) {
				setToolTipText(tooltipText);
			}
			$var($Object, peer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this));
			if ($instanceOf($CMenu, peer)) {
				$var($CMenu, menu, $cast($CMenu, peer));
				int64_t nativeMenu = $nc(menu)->getNativeMenu();
				this->fModelPtr = addMenuListeners(this, nativeMenu);
			}
		}
	}
}

void ScreenMenu::removeNotify() {
	$synchronized(getTreeLock()) {
		$Menu::removeNotify();
		$nc(this->fItems)->clear();
		if (this->fModelPtr != 0) {
			removeMenuListeners(this->fModelPtr);
			this->fModelPtr = 0;
			$nc($($nc(this->fInvoker)->getPopupMenu()))->removeContainerListener(this);
			$nc(this->fInvoker)->removeComponentListener(this);
			$nc(this->fInvoker)->removePropertyChangeListener(this->fPropertyListener);
		}
	}
}

void ScreenMenu::componentAdded($ContainerEvent* e) {
	addItem($($nc(e)->getChild()));
}

void ScreenMenu::componentRemoved($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, child, $nc(e)->getChild());
	$var($MenuItem, sm, $cast($MenuItem, $nc(this->fItems)->remove(child)));
	if (sm == nullptr) {
		return;
	}
	remove(static_cast<$MenuComponent*>(sm));
}

void ScreenMenu::componentResized($ComponentEvent* e) {
}

void ScreenMenu::componentMoved($ComponentEvent* e) {
}

void ScreenMenu::componentShown($ComponentEvent* e) {
	setVisible(true);
}

void ScreenMenu::componentHidden($ComponentEvent* e) {
	setVisible(false);
}

void ScreenMenu::setVisible(bool b) {
	$useLocalCurrentObjectStackCache();
	$var($MenuContainer, parent, getParent());
	if (parent != nullptr) {
		if ($instanceOf(ScreenMenu, parent)) {
			$var(ScreenMenu, sm, $cast(ScreenMenu, parent));
			sm->setChildVisible(this->fInvoker, b);
		}
	}
}

void ScreenMenu::setChildVisible($JMenuItem* child, bool b) {
	$nc(this->fItems)->remove(child);
	updateItems();
}

void ScreenMenu::setAccelerator($KeyStroke* ks) {
}

void ScreenMenu::setIndeterminate(bool indeterminate) {
}

void ScreenMenu::setToolTipText($String* text) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this));
	if (!($instanceOf($CMenuItem, peer))) {
		return;
	}
	$var($CMenuItem, cmi, $cast($CMenuItem, peer));
	$nc(cmi)->setToolTipText(text);
}

void ScreenMenu::setIcon($Icon* i) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this));
	if (!($instanceOf($CMenuItem, peer))) {
		return;
	}
	$var($CMenuItem, cmi, $cast($CMenuItem, peer));
	$var($Image, img, nullptr);
	if (i != nullptr) {
		bool var$0 = i->getIconWidth() > 0;
		if (var$0 && i->getIconHeight() > 0) {
			$assign(img, $AquaIcon::getImageForIcon(i));
		}
	}
	$nc(cmi)->setImage(img);
}

int32_t ScreenMenu::getHashCode($Component* m) {
	$init(ScreenMenu);
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = $nc($of(m))->hashCode();
	if ($instanceOf($JMenuItem, m)) {
		$var($JMenuItem, mi, $cast($JMenuItem, m));
		$var($String, text, mi->getText());
		if (text != nullptr) {
			hashCode ^= text->hashCode();
		}
		$var($Icon, icon, mi->getIcon());
		if (icon != nullptr) {
			hashCode ^= $of(icon)->hashCode();
		}
		$var($Icon, disabledIcon, mi->getDisabledIcon());
		if (disabledIcon != nullptr) {
			hashCode ^= $of(disabledIcon)->hashCode();
		}
		$var($Action, action, mi->getAction());
		if (action != nullptr) {
			hashCode ^= $of(action)->hashCode();
		}
		$var($KeyStroke, ks, mi->getAccelerator());
		if (ks != nullptr) {
			hashCode ^= ks->hashCode();
		}
		hashCode ^= $nc($($Boolean::valueOf(mi->isVisible())))->hashCode();
		hashCode ^= $nc($($Boolean::valueOf(mi->isEnabled())))->hashCode();
		hashCode ^= $nc($($Boolean::valueOf(mi->isSelected())))->hashCode();
	} else if ($instanceOf($JSeparator, m)) {
		hashCode ^= "-"_s->hashCode();
	}
	return hashCode;
}

void ScreenMenu::addItem($Component* m) {
	if (!$nc(m)->isVisible()) {
		return;
	}
	$var($MenuItem, sm, $cast($MenuItem, $nc(this->fItems)->get(m)));
	if (sm == nullptr) {
		if ($instanceOf($JMenu, m)) {
			$assign(sm, $new(ScreenMenu, $cast($JMenu, m)));
		} else if ($instanceOf($JCheckBoxMenuItem, m)) {
			$assign(sm, $new($ScreenMenuItemCheckbox, $cast($JCheckBoxMenuItem, m)));
		} else if ($instanceOf($JRadioButtonMenuItem, m)) {
			$assign(sm, $new($ScreenMenuItemCheckbox, $cast($JRadioButtonMenuItem, m)));
		} else if ($instanceOf($JMenuItem, m)) {
			$assign(sm, $new($ScreenMenuItem, $cast($JMenuItem, m)));
		} else if ($instanceOf($JPopupMenu$Separator, m) || $instanceOf($JSeparator, m)) {
			$assign(sm, $new($MenuItem, "-"_s));
		}
		if (sm != nullptr) {
			$nc(this->fItems)->put(m, sm);
		}
	}
	if (sm != nullptr) {
		add(sm);
	}
}

void clinit$ScreenMenu($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ScreenMenu$1)));
	}
}

ScreenMenu::ScreenMenu() {
}

$Class* ScreenMenu::load$($String* name, bool initialize) {
	$loadClass(ScreenMenu, name, initialize, &_ScreenMenu_ClassInfo_, clinit$ScreenMenu, allocate$ScreenMenu);
	return class$;
}

$Class* ScreenMenu::class$ = nullptr;

		} // laf
	} // apple
} // com