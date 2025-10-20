#include <java/awt/Choice.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Choice$AccessibleAWTChoice.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/peer/ChoicePeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef ITEM_EVENT_MASK
#undef ITEM_STATE_CHANGED

using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Choice$AccessibleAWTChoice = ::java::awt::Choice$AccessibleAWTChoice;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $Toolkit = ::java::awt::Toolkit;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $ChoicePeer = ::java::awt::peer::ChoicePeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $EventListener = ::java::util::EventListener;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$CompoundAttribute _Choice_MethodAnnotations_countItems6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Choice_FieldInfo_[] = {
	{"pItems", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", 0, $field(Choice, pItems)},
	{"selectedIndex", "I", nullptr, 0, $field(Choice, selectedIndex)},
	{"itemListener", "Ljava/awt/event/ItemListener;", nullptr, $TRANSIENT, $field(Choice, itemListener)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Choice, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Choice, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Choice, serialVersionUID)},
	{"choiceSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Choice, choiceSerializedDataVersion)},
	{}
};

$MethodInfo _Choice_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Choice::*)()>(&Choice::init$)), "java.awt.HeadlessException"},
	{"add", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addItem", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"countItems", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Choice_MethodAnnotations_countItems6},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getItem", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getItemCount", "()I", nullptr, $PUBLIC},
	{"getItemImpl", "(I)Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(Choice::*)(int32_t)>(&Choice::getItemImpl))},
	{"getItemListeners", "()[Ljava/awt/event/ItemListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getSelectedIndex", "()I", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Choice::initIDs))},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"insertNoInvalidate", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Choice::*)($String*,int32_t)>(&Choice::insertNoInvalidate))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"processItemEvent", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Choice::*)($ObjectInputStream*)>(&Choice::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeNoInvalidate", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Choice::*)(int32_t)>(&Choice::removeNoInvalidate))},
	{"select", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"select", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Choice::*)($ObjectOutputStream*)>(&Choice::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 21

$InnerClassInfo _Choice_InnerClassesInfo_[] = {
	{"java.awt.Choice$AccessibleAWTChoice", "java.awt.Choice", "AccessibleAWTChoice", $PROTECTED},
	{}
};

$ClassInfo _Choice_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Choice",
	"java.awt.Component",
	"java.awt.ItemSelectable,javax.accessibility.Accessible",
	_Choice_FieldInfo_,
	_Choice_MethodInfo_,
	nullptr,
	nullptr,
	_Choice_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Choice$AccessibleAWTChoice"
};

$Object* allocate$Choice($Class* clazz) {
	return $of($alloc(Choice));
}

$String* Choice::toString() {
	 return this->$Component::toString();
}

int32_t Choice::hashCode() {
	 return this->$Component::hashCode();
}

bool Choice::equals(Object$* arg0) {
	 return this->$Component::equals(arg0);
}

$Object* Choice::clone() {
	 return this->$Component::clone();
}

void Choice::finalize() {
	this->$Component::finalize();
}

$String* Choice::base = nullptr;
int32_t Choice::nameCounter = 0;

void Choice::init$() {
	$Component::init$();
	this->selectedIndex = -1;
	this->choiceSerializedDataVersion = 1;
	$GraphicsEnvironment::checkHeadless();
	$set(this, pItems, $new($Vector));
}

$String* Choice::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Choice::class$) {
		$var($String, var$0, Choice::base);
		return $concat(var$0, $$str(Choice::nameCounter++));
	}
}

void Choice::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createChoice(this));
		}
		$Component::addNotify();
	}
}

int32_t Choice::getItemCount() {
	return countItems();
}

int32_t Choice::countItems() {
	return $nc(this->pItems)->size();
}

$String* Choice::getItem(int32_t index) {
	return getItemImpl(index);
}

$String* Choice::getItemImpl(int32_t index) {
	return $cast($String, $nc(this->pItems)->elementAt(index));
}

void Choice::add($String* item) {
	addItem(item);
}

void Choice::addItem($String* item) {
	$synchronized(this) {
		insertNoInvalidate(item, $nc(this->pItems)->size());
	}
	invalidateIfValid();
}

void Choice::insertNoInvalidate($String* item, int32_t index) {
	if (item == nullptr) {
		$throwNew($NullPointerException, "cannot add null item to Choice"_s);
	}
	$nc(this->pItems)->insertElementAt(item, index);
	$var($ChoicePeer, peer, $cast($ChoicePeer, this->peer));
	if (peer != nullptr) {
		peer->add(item, index);
	}
	if (this->selectedIndex < 0 || this->selectedIndex >= index) {
		select(0);
	}
}

void Choice::insert($String* item, int32_t index) {
	$synchronized(this) {
		if (index < 0) {
			$throwNew($IllegalArgumentException, "index less than zero."_s);
		}
		index = $Math::min(index, $nc(this->pItems)->size());
		insertNoInvalidate(item, index);
	}
	invalidateIfValid();
}

void Choice::remove($String* item) {
	$synchronized(this) {
		int32_t index = $nc(this->pItems)->indexOf(item);
		if (index < 0) {
			$throwNew($IllegalArgumentException, $$str({"item "_s, item, " not found in choice"_s}));
		} else {
			removeNoInvalidate(index);
		}
	}
	invalidateIfValid();
}

void Choice::remove(int32_t position) {
	$synchronized(this) {
		removeNoInvalidate(position);
	}
	invalidateIfValid();
}

void Choice::removeNoInvalidate(int32_t position) {
	$nc(this->pItems)->removeElementAt(position);
	$var($ChoicePeer, peer, $cast($ChoicePeer, this->peer));
	if (peer != nullptr) {
		peer->remove(position);
	}
	if ($nc(this->pItems)->size() == 0) {
		this->selectedIndex = -1;
	} else if (this->selectedIndex == position) {
		select(0);
	} else if (this->selectedIndex > position) {
		select(this->selectedIndex - 1);
	}
}

void Choice::removeAll() {
	$synchronized(this) {
		if (this->peer != nullptr) {
			$nc(($cast($ChoicePeer, this->peer)))->removeAll();
		}
		$nc(this->pItems)->removeAllElements();
		this->selectedIndex = -1;
	}
	invalidateIfValid();
}

$String* Choice::getSelectedItem() {
	$synchronized(this) {
		return (this->selectedIndex >= 0) ? getItem(this->selectedIndex) : ($String*)nullptr;
	}
}

$ObjectArray* Choice::getSelectedObjects() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->selectedIndex >= 0) {
			$var($ObjectArray, items, $new($ObjectArray, 1));
			items->set(0, $(getItem(this->selectedIndex)));
			return items;
		}
		return nullptr;
	}
}

int32_t Choice::getSelectedIndex() {
	return this->selectedIndex;
}

void Choice::select(int32_t pos) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ((pos >= $nc(this->pItems)->size()) || (pos < 0)) {
			$throwNew($IllegalArgumentException, $$str({"illegal Choice item position: "_s, $$str(pos)}));
		}
		if ($nc(this->pItems)->size() > 0) {
			this->selectedIndex = pos;
			$var($ChoicePeer, peer, $cast($ChoicePeer, this->peer));
			if (peer != nullptr) {
				peer->select(pos);
			}
		}
	}
}

void Choice::select($String* str) {
	$synchronized(this) {
		int32_t index = $nc(this->pItems)->indexOf(str);
		if (index >= 0) {
			select(index);
		}
	}
}

void Choice::addItemListener($ItemListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, itemListener, $AWTEventMulticaster::add(this->itemListener, l));
		this->newEventsOnly = true;
	}
}

void Choice::removeItemListener($ItemListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, itemListener, $AWTEventMulticaster::remove(this->itemListener, l));
	}
}

$ItemListenerArray* Choice::getItemListeners() {
	$synchronized(this) {
		$load($ItemListener);
		return $fcast($ItemListenerArray, getListeners($ItemListener::class$));
	}
}

$EventListenerArray* Choice::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($ItemListener);
	if (listenerType == $ItemListener::class$) {
		$assign(l, this->itemListener);
	} else {
		return $Component::getListeners(listenerType);
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool Choice::eventEnabled($AWTEvent* e) {
	if ($nc(e)->id == $ItemEvent::ITEM_STATE_CHANGED) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ITEM_EVENT_MASK)) != 0 || this->itemListener != nullptr) {
			return true;
		}
		return false;
	}
	return $Component::eventEnabled(e);
}

void Choice::processEvent($AWTEvent* e) {
	if ($instanceOf($ItemEvent, e)) {
		processItemEvent($cast($ItemEvent, e));
		return;
	}
	$Component::processEvent(e);
}

void Choice::processItemEvent($ItemEvent* e) {
	$var($ItemListener, listener, this->itemListener);
	if (listener != nullptr) {
		listener->itemStateChanged(e);
	}
}

$String* Choice::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($Component::paramString()), ",current="_s}));
	return $concat(var$0, $(getSelectedItem()));
}

void Choice::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$init($Component);
	$AWTEventMulticaster::save(s, $Component::itemListenerK, this->itemListener);
	s->writeObject(nullptr);
}

void Choice::readObject($ObjectInputStream* s) {
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

void Choice::initIDs() {
	$init(Choice);
	$prepareNativeStatic(Choice, initIDs, void);
	$invokeNativeStatic(Choice, initIDs);
	$finishNativeStatic();
}

$AccessibleContext* Choice::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Choice$AccessibleAWTChoice, this));
	}
	return this->accessibleContext;
}

void clinit$Choice($Class* class$) {
	$assignStatic(Choice::base, "choice"_s);
	Choice::nameCounter = 0;
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Choice::initIDs();
		}
	}
}

Choice::Choice() {
}

$Class* Choice::load$($String* name, bool initialize) {
	$loadClass(Choice, name, initialize, &_Choice_ClassInfo_, clinit$Choice, allocate$Choice);
	return class$;
}

$Class* Choice::class$ = nullptr;

	} // awt
} // java