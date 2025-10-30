#include <java/awt/CheckboxMenuItem.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/CheckboxMenuItem$1.h>
#include <java/awt/CheckboxMenuItem$AccessibleAWTCheckboxMenuItem.h>
#include <java/awt/EventQueue.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/peer/CheckboxMenuItemPeer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/awt/peer/MenuItemPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor$CheckboxMenuItemAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_EVENT_MASK
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $CheckboxMenuItem$1 = ::java::awt::CheckboxMenuItem$1;
using $CheckboxMenuItem$AccessibleAWTCheckboxMenuItem = ::java::awt::CheckboxMenuItem$AccessibleAWTCheckboxMenuItem;
using $EventQueue = ::java::awt::EventQueue;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuComponent$AccessibleAWTMenuComponent = ::java::awt::MenuComponent$AccessibleAWTMenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $MenuItem$AccessibleAWTMenuItem = ::java::awt::MenuItem$AccessibleAWTMenuItem;
using $Toolkit = ::java::awt::Toolkit;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $CheckboxMenuItemPeer = ::java::awt::peer::CheckboxMenuItemPeer;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$CheckboxMenuItemAccessor = ::sun::awt::AWTAccessor$CheckboxMenuItemAccessor;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$FieldInfo _CheckboxMenuItem_FieldInfo_[] = {
	{"state", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CheckboxMenuItem, state)},
	{"itemListener", "Ljava/awt/event/ItemListener;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(CheckboxMenuItem, itemListener)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CheckboxMenuItem, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(CheckboxMenuItem, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CheckboxMenuItem, serialVersionUID)},
	{"checkboxMenuItemSerializedDataVersion", "I", nullptr, $PRIVATE, $field(CheckboxMenuItem, checkboxMenuItemSerializedDataVersion)},
	{}
};

$MethodInfo _CheckboxMenuItem_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckboxMenuItem::*)()>(&CheckboxMenuItem::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CheckboxMenuItem::*)($String*)>(&CheckboxMenuItem::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(CheckboxMenuItem::*)($String*,bool)>(&CheckboxMenuItem::init$)), "java.awt.HeadlessException"},
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"doMenuEvent", "(JI)V", nullptr, 0},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getItemListeners", "()[Ljava/awt/event/ItemListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getState", "()Z", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&CheckboxMenuItem::initIDs))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"processItemEvent", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckboxMenuItem::*)($ObjectInputStream*)>(&CheckboxMenuItem::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setState", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckboxMenuItem::*)($ObjectOutputStream*)>(&CheckboxMenuItem::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 17

$InnerClassInfo _CheckboxMenuItem_InnerClassesInfo_[] = {
	{"java.awt.CheckboxMenuItem$AccessibleAWTCheckboxMenuItem", "java.awt.CheckboxMenuItem", "AccessibleAWTCheckboxMenuItem", $PROTECTED},
	{"java.awt.CheckboxMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CheckboxMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.CheckboxMenuItem",
	"java.awt.MenuItem",
	"java.awt.ItemSelectable",
	_CheckboxMenuItem_FieldInfo_,
	_CheckboxMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_CheckboxMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.CheckboxMenuItem$AccessibleAWTCheckboxMenuItem,java.awt.CheckboxMenuItem$1"
};

$Object* allocate$CheckboxMenuItem($Class* clazz) {
	return $of($alloc(CheckboxMenuItem));
}

$String* CheckboxMenuItem::toString() {
	 return this->$MenuItem::toString();
}

int32_t CheckboxMenuItem::hashCode() {
	 return this->$MenuItem::hashCode();
}

bool CheckboxMenuItem::equals(Object$* arg0) {
	 return this->$MenuItem::equals(arg0);
}

$Object* CheckboxMenuItem::clone() {
	 return this->$MenuItem::clone();
}

void CheckboxMenuItem::finalize() {
	this->$MenuItem::finalize();
}

$String* CheckboxMenuItem::base = nullptr;
int32_t CheckboxMenuItem::nameCounter = 0;

void CheckboxMenuItem::init$() {
	CheckboxMenuItem::init$(""_s, false);
}

void CheckboxMenuItem::init$($String* label) {
	CheckboxMenuItem::init$(label, false);
}

void CheckboxMenuItem::init$($String* label, bool state) {
	$MenuItem::init$(label);
	this->checkboxMenuItemSerializedDataVersion = 1;
	this->state = state;
}

$String* CheckboxMenuItem::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(CheckboxMenuItem::class$) {
		$var($String, var$0, CheckboxMenuItem::base);
		return $concat(var$0, $$str(CheckboxMenuItem::nameCounter++));
	}
}

void CheckboxMenuItem::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createCheckboxMenuItem(this));
		}
		$MenuItem::addNotify();
	}
}

bool CheckboxMenuItem::getState() {
	return this->state;
}

void CheckboxMenuItem::setState(bool b) {
	$synchronized(this) {
		this->state = b;
		$var($CheckboxMenuItemPeer, peer, $cast($CheckboxMenuItemPeer, this->peer));
		if (peer != nullptr) {
			peer->setState(b);
		}
	}
}

$ObjectArray* CheckboxMenuItem::getSelectedObjects() {
	$synchronized(this) {
		if (this->state) {
			$var($ObjectArray, items, $new($ObjectArray, 1));
			items->set(0, this->label);
			return items;
		}
		return nullptr;
	}
}

void CheckboxMenuItem::addItemListener($ItemListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, itemListener, $AWTEventMulticaster::add(this->itemListener, l));
		this->newEventsOnly = true;
	}
}

void CheckboxMenuItem::removeItemListener($ItemListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, itemListener, $AWTEventMulticaster::remove(this->itemListener, l));
	}
}

$ItemListenerArray* CheckboxMenuItem::getItemListeners() {
	$synchronized(this) {
		$load($ItemListener);
		return $fcast($ItemListenerArray, getListeners($ItemListener::class$));
	}
}

$EventListenerArray* CheckboxMenuItem::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($ItemListener);
	if (listenerType == $ItemListener::class$) {
		$assign(l, this->itemListener);
	} else {
		return $MenuItem::getListeners(listenerType);
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool CheckboxMenuItem::eventEnabled($AWTEvent* e) {
	if ($nc(e)->id == $ItemEvent::ITEM_STATE_CHANGED) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ITEM_EVENT_MASK)) != 0 || this->itemListener != nullptr) {
			return true;
		}
		return false;
	}
	return $MenuItem::eventEnabled(e);
}

void CheckboxMenuItem::processEvent($AWTEvent* e) {
	if ($instanceOf($ItemEvent, e)) {
		processItemEvent($cast($ItemEvent, e));
		return;
	}
	$MenuItem::processEvent(e);
}

void CheckboxMenuItem::processItemEvent($ItemEvent* e) {
	$var($ItemListener, listener, this->itemListener);
	if (listener != nullptr) {
		listener->itemStateChanged(e);
	}
}

void CheckboxMenuItem::doMenuEvent(int64_t when, int32_t modifiers) {
	$useLocalCurrentObjectStackCache();
	setState(!this->state);
	$nc($($Toolkit::getEventQueue()))->postEvent($$new($ItemEvent, this, $ItemEvent::ITEM_STATE_CHANGED, $(getLabel()), this->state ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
}

$String* CheckboxMenuItem::paramString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($MenuItem::paramString()), ",state="_s, $$str(this->state)});
}

void CheckboxMenuItem::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$init($MenuComponent);
	$AWTEventMulticaster::save(s, $MenuComponent::itemListenerK, this->itemListener);
	s->writeObject(nullptr);
}

void CheckboxMenuItem::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		$init($MenuComponent);
		if ($MenuComponent::itemListenerK == key) {
			addItemListener(($cast($ItemListener, $(s->readObject()))));
		} else {
			s->readObject();
		}
	}
}

void CheckboxMenuItem::initIDs() {
	$init(CheckboxMenuItem);
	$prepareNativeStatic(CheckboxMenuItem, initIDs, void);
	$invokeNativeStatic(CheckboxMenuItem, initIDs);
	$finishNativeStatic();
}

$AccessibleContext* CheckboxMenuItem::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($CheckboxMenuItem$AccessibleAWTCheckboxMenuItem, this));
	}
	return this->accessibleContext;
}

void clinit$CheckboxMenuItem($Class* class$) {
	$assignStatic(CheckboxMenuItem::base, "chkmenuitem"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			CheckboxMenuItem::initIDs();
		}
		$AWTAccessor::setCheckboxMenuItemAccessor($$new($CheckboxMenuItem$1));
	}
	CheckboxMenuItem::nameCounter = 0;
}

CheckboxMenuItem::CheckboxMenuItem() {
}

$Class* CheckboxMenuItem::load$($String* name, bool initialize) {
	$loadClass(CheckboxMenuItem, name, initialize, &_CheckboxMenuItem_ClassInfo_, clinit$CheckboxMenuItem, allocate$CheckboxMenuItem);
	return class$;
}

$Class* CheckboxMenuItem::class$ = nullptr;

	} // awt
} // java