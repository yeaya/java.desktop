#include <java/awt/Checkbox.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Checkbox$AccessibleAWTCheckbox.h>
#include <java/awt/CheckboxGroup.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/peer/CheckboxPeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef ITEM_EVENT_MASK
#undef ITEM_STATE_CHANGED

using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Checkbox$AccessibleAWTCheckbox = ::java::awt::Checkbox$AccessibleAWTCheckbox;
using $CheckboxGroup = ::java::awt::CheckboxGroup;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $Toolkit = ::java::awt::Toolkit;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $CheckboxPeer = ::java::awt::peer::CheckboxPeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$FieldInfo _Checkbox_FieldInfo_[] = {
	{"label", "Ljava/lang/String;", nullptr, 0, $field(Checkbox, label)},
	{"state", "Z", nullptr, 0, $field(Checkbox, state)},
	{"group", "Ljava/awt/CheckboxGroup;", nullptr, 0, $field(Checkbox, group)},
	{"itemListener", "Ljava/awt/event/ItemListener;", nullptr, $TRANSIENT, $field(Checkbox, itemListener)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Checkbox, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Checkbox, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Checkbox, serialVersionUID)},
	{"checkboxSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Checkbox, checkboxSerializedDataVersion)},
	{}
};

$MethodInfo _Checkbox_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Checkbox::*)()>(&Checkbox::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Checkbox::*)($String*)>(&Checkbox::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Checkbox::*)($String*,bool)>(&Checkbox::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;ZLjava/awt/CheckboxGroup;)V", nullptr, $PUBLIC, $method(static_cast<void(Checkbox::*)($String*,bool,$CheckboxGroup*)>(&Checkbox::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;Ljava/awt/CheckboxGroup;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Checkbox::*)($String*,$CheckboxGroup*,bool)>(&Checkbox::init$)), "java.awt.HeadlessException"},
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getCheckboxGroup", "()Ljava/awt/CheckboxGroup;", nullptr, $PUBLIC},
	{"getItemListeners", "()[Ljava/awt/event/ItemListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getState", "()Z", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Checkbox::initIDs))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"processItemEvent", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Checkbox::*)($ObjectInputStream*)>(&Checkbox::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setCheckboxGroup", "(Ljava/awt/CheckboxGroup;)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setState", "(Z)V", nullptr, $PUBLIC},
	{"setStateInternal", "(Z)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Checkbox::*)($ObjectOutputStream*)>(&Checkbox::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 20

$InnerClassInfo _Checkbox_InnerClassesInfo_[] = {
	{"java.awt.Checkbox$AccessibleAWTCheckbox", "java.awt.Checkbox", "AccessibleAWTCheckbox", $PROTECTED},
	{}
};

$ClassInfo _Checkbox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Checkbox",
	"java.awt.Component",
	"java.awt.ItemSelectable,javax.accessibility.Accessible",
	_Checkbox_FieldInfo_,
	_Checkbox_MethodInfo_,
	nullptr,
	nullptr,
	_Checkbox_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Checkbox$AccessibleAWTCheckbox"
};

$Object* allocate$Checkbox($Class* clazz) {
	return $of($alloc(Checkbox));
}

$String* Checkbox::toString() {
	 return this->$Component::toString();
}

int32_t Checkbox::hashCode() {
	 return this->$Component::hashCode();
}

bool Checkbox::equals(Object$* arg0) {
	 return this->$Component::equals(arg0);
}

$Object* Checkbox::clone() {
	 return this->$Component::clone();
}

void Checkbox::finalize() {
	this->$Component::finalize();
}

$String* Checkbox::base = nullptr;
int32_t Checkbox::nameCounter = 0;

void Checkbox::setStateInternal(bool state) {
	this->state = state;
	$var($CheckboxPeer, peer, $cast($CheckboxPeer, this->peer));
	if (peer != nullptr) {
		peer->setState(state);
	}
}

void Checkbox::init$() {
	Checkbox::init$(""_s, false, ($CheckboxGroup*)nullptr);
}

void Checkbox::init$($String* label) {
	Checkbox::init$(label, false, ($CheckboxGroup*)nullptr);
}

void Checkbox::init$($String* label, bool state) {
	Checkbox::init$(label, state, ($CheckboxGroup*)nullptr);
}

void Checkbox::init$($String* label, bool state, $CheckboxGroup* group) {
	$Component::init$();
	this->checkboxSerializedDataVersion = 1;
	$GraphicsEnvironment::checkHeadless();
	$set(this, label, label);
	this->state = state;
	$set(this, group, group);
	if (state && (group != nullptr)) {
		group->setSelectedCheckbox(this);
	}
}

void Checkbox::init$($String* label, $CheckboxGroup* group, bool state) {
	Checkbox::init$(label, state, group);
}

$String* Checkbox::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Checkbox::class$) {
		$var($String, var$0, Checkbox::base);
		return $concat(var$0, $$str(Checkbox::nameCounter++));
	}
}

void Checkbox::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createCheckbox(this));
		}
		$Component::addNotify();
	}
}

$String* Checkbox::getLabel() {
	return this->label;
}

void Checkbox::setLabel($String* label) {
	bool testvalid = false;
	$synchronized(this) {
		if (label != this->label && (this->label == nullptr || !$nc(this->label)->equals(label))) {
			$set(this, label, label);
			$var($CheckboxPeer, peer, $cast($CheckboxPeer, this->peer));
			if (peer != nullptr) {
				peer->setLabel(label);
			}
			testvalid = true;
		}
	}
	if (testvalid) {
		invalidateIfValid();
	}
}

bool Checkbox::getState() {
	return this->state;
}

void Checkbox::setState(bool state) {
	$var($CheckboxGroup, group, this->group);
	if (group != nullptr) {
		if (state) {
			group->setSelectedCheckbox(this);
		} else if (group->getSelectedCheckbox() == this) {
			state = true;
		}
	}
	setStateInternal(state);
}

$ObjectArray* Checkbox::getSelectedObjects() {
	if (this->state) {
		$var($ObjectArray, items, $new($ObjectArray, 1));
		items->set(0, this->label);
		return items;
	}
	return nullptr;
}

$CheckboxGroup* Checkbox::getCheckboxGroup() {
	return this->group;
}

void Checkbox::setCheckboxGroup($CheckboxGroup* g) {
	$useLocalCurrentObjectStackCache();
	$var($CheckboxGroup, oldGroup, nullptr);
	bool oldState = false;
	if (this->group == g) {
		return;
	}
	$synchronized(this) {
		$assign(oldGroup, this->group);
		oldState = getState();
		$set(this, group, g);
		$var($CheckboxPeer, peer, $cast($CheckboxPeer, this->peer));
		if (peer != nullptr) {
			peer->setCheckboxGroup(g);
		}
		if (this->group != nullptr && getState()) {
			if ($nc(this->group)->getSelectedCheckbox() != nullptr) {
				setState(false);
			} else {
				$nc(this->group)->setSelectedCheckbox(this);
			}
		}
	}
	if (oldGroup != nullptr && oldState) {
		oldGroup->setSelectedCheckbox(nullptr);
	}
}

void Checkbox::addItemListener($ItemListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, itemListener, $AWTEventMulticaster::add(this->itemListener, l));
		this->newEventsOnly = true;
	}
}

void Checkbox::removeItemListener($ItemListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, itemListener, $AWTEventMulticaster::remove(this->itemListener, l));
	}
}

$ItemListenerArray* Checkbox::getItemListeners() {
	$synchronized(this) {
		$load($ItemListener);
		return $fcast($ItemListenerArray, getListeners($ItemListener::class$));
	}
}

$EventListenerArray* Checkbox::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($ItemListener);
	if (listenerType == $ItemListener::class$) {
		$assign(l, this->itemListener);
	} else {
		return $Component::getListeners(listenerType);
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool Checkbox::eventEnabled($AWTEvent* e) {
	if ($nc(e)->id == $ItemEvent::ITEM_STATE_CHANGED) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ITEM_EVENT_MASK)) != 0 || this->itemListener != nullptr) {
			return true;
		}
		return false;
	}
	return $Component::eventEnabled(e);
}

void Checkbox::processEvent($AWTEvent* e) {
	if ($instanceOf($ItemEvent, e)) {
		processItemEvent($cast($ItemEvent, e));
		return;
	}
	$Component::processEvent(e);
}

void Checkbox::processItemEvent($ItemEvent* e) {
	$var($ItemListener, listener, this->itemListener);
	if (listener != nullptr) {
		listener->itemStateChanged(e);
	}
}

$String* Checkbox::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $Component::paramString());
	$var($String, label, this->label);
	if (label != nullptr) {
		$plusAssign(str, $$str({",label="_s, label}));
	}
	return $str({str, ",state="_s, $$str(this->state)});
}

void Checkbox::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$init($Component);
	$AWTEventMulticaster::save(s, $Component::itemListenerK, this->itemListener);
	s->writeObject(nullptr);
}

void Checkbox::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$GraphicsEnvironment::checkHeadless();
	$nc(s)->defaultReadObject();
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		$init($Component);
		if ($Component::itemListenerK == key) {
			addItemListener(($cast($ItemListener, $(s->readObject()))));
		} else {
			s->readObject();
		}
	}
}

void Checkbox::initIDs() {
	$init(Checkbox);
	$prepareNativeStatic(Checkbox, initIDs, void);
	$invokeNativeStatic(Checkbox, initIDs);
	$finishNativeStatic();
}

$AccessibleContext* Checkbox::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Checkbox$AccessibleAWTCheckbox, this));
	}
	return this->accessibleContext;
}

void clinit$Checkbox($Class* class$) {
	$assignStatic(Checkbox::base, "checkbox"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Checkbox::initIDs();
		}
	}
	Checkbox::nameCounter = 0;
}

Checkbox::Checkbox() {
}

$Class* Checkbox::load$($String* name, bool initialize) {
	$loadClass(Checkbox, name, initialize, &_Checkbox_ClassInfo_, clinit$Checkbox, allocate$Checkbox);
	return class$;
}

$Class* Checkbox::class$ = nullptr;

	} // awt
} // java