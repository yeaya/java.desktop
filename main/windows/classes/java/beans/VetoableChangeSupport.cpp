#include <java/beans/VetoableChangeSupport.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/VetoableChangeListenerProxy.h>
#include <java/beans/VetoableChangeSupport$VetoableChangeListenerMap.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef TYPE

using $VetoableChangeListenerArray = $Array<::java::beans::VetoableChangeListener>;
using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerMap = ::java::beans::ChangeListenerMap;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $VetoableChangeListenerProxy = ::java::beans::VetoableChangeListenerProxy;
using $VetoableChangeSupport$VetoableChangeListenerMap = ::java::beans::VetoableChangeSupport$VetoableChangeListenerMap;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $EventListener = ::java::util::EventListener;
using $EventListenerProxy = ::java::util::EventListenerProxy;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

$FieldInfo _VetoableChangeSupport_FieldInfo_[] = {
	{"map", "Ljava/beans/VetoableChangeSupport$VetoableChangeListenerMap;", nullptr, $PRIVATE, $field(VetoableChangeSupport, map)},
	{"source", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(VetoableChangeSupport, source)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VetoableChangeSupport, serialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VetoableChangeSupport, serialVersionUID)},
	{}
};

$MethodInfo _VetoableChangeSupport_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(VetoableChangeSupport::*)(Object$*)>(&VetoableChangeSupport::init$))},
	{"addVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"fireVetoableChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{"fireVetoableChange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{"fireVetoableChange", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{"fireVetoableChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{"getVetoableChangeListeners", "()[Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC},
	{"getVetoableChangeListeners", "(Ljava/lang/String;)[Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC},
	{"hasListeners", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(VetoableChangeSupport::*)($ObjectInputStream*)>(&VetoableChangeSupport::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(VetoableChangeSupport::*)($ObjectOutputStream*)>(&VetoableChangeSupport::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _VetoableChangeSupport_InnerClassesInfo_[] = {
	{"java.beans.VetoableChangeSupport$VetoableChangeListenerMap", "java.beans.VetoableChangeSupport", "VetoableChangeListenerMap", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _VetoableChangeSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.VetoableChangeSupport",
	"java.lang.Object",
	"java.io.Serializable",
	_VetoableChangeSupport_FieldInfo_,
	_VetoableChangeSupport_MethodInfo_,
	nullptr,
	nullptr,
	_VetoableChangeSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.VetoableChangeSupport$VetoableChangeListenerMap"
};

$Object* allocate$VetoableChangeSupport($Class* clazz) {
	return $of($alloc(VetoableChangeSupport));
}


$ObjectStreamFieldArray* VetoableChangeSupport::serialPersistentFields = nullptr;

void VetoableChangeSupport::init$(Object$* sourceBean) {
	$set(this, map, $new($VetoableChangeSupport$VetoableChangeListenerMap));
	if (sourceBean == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, source, sourceBean);
}

void VetoableChangeSupport::addVetoableChangeListener($VetoableChangeListener* listener) {
	if (listener == nullptr) {
		return;
	}
	if ($instanceOf($VetoableChangeListenerProxy, listener)) {
		$var($VetoableChangeListenerProxy, proxy, $cast($VetoableChangeListenerProxy, listener));
		$var($String, var$0, $nc(proxy)->getPropertyName());
		addVetoableChangeListener(var$0, $cast($VetoableChangeListener, $(proxy->getListener())));
	} else {
		$nc(this->map)->add(nullptr, listener);
	}
}

void VetoableChangeSupport::removeVetoableChangeListener($VetoableChangeListener* listener) {
	if (listener == nullptr) {
		return;
	}
	if ($instanceOf($VetoableChangeListenerProxy, listener)) {
		$var($VetoableChangeListenerProxy, proxy, $cast($VetoableChangeListenerProxy, listener));
		$var($String, var$0, $nc(proxy)->getPropertyName());
		removeVetoableChangeListener(var$0, $cast($VetoableChangeListener, $(proxy->getListener())));
	} else {
		$nc(this->map)->remove(nullptr, listener);
	}
}

$VetoableChangeListenerArray* VetoableChangeSupport::getVetoableChangeListeners() {
	return $fcast($VetoableChangeListenerArray, $nc(this->map)->getListeners());
}

void VetoableChangeSupport::addVetoableChangeListener($String* propertyName, $VetoableChangeListener* listener$renamed) {
	$var($VetoableChangeListener, listener, listener$renamed);
	if (listener == nullptr || propertyName == nullptr) {
		return;
	}
	$assign(listener, $nc(this->map)->extract(listener));
	if (listener != nullptr) {
		$nc(this->map)->add(propertyName, listener);
	}
}

void VetoableChangeSupport::removeVetoableChangeListener($String* propertyName, $VetoableChangeListener* listener$renamed) {
	$var($VetoableChangeListener, listener, listener$renamed);
	if (listener == nullptr || propertyName == nullptr) {
		return;
	}
	$assign(listener, $nc(this->map)->extract(listener));
	if (listener != nullptr) {
		$nc(this->map)->remove(propertyName, listener);
	}
}

$VetoableChangeListenerArray* VetoableChangeSupport::getVetoableChangeListeners($String* propertyName) {
	return $fcast($VetoableChangeListenerArray, $nc(this->map)->getListeners(propertyName));
}

void VetoableChangeSupport::fireVetoableChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (oldValue == nullptr || newValue == nullptr || !$nc($of(oldValue))->equals(newValue)) {
		fireVetoableChange($$new($PropertyChangeEvent, this->source, propertyName, oldValue, newValue));
	}
}

void VetoableChangeSupport::fireVetoableChange($String* propertyName, int32_t oldValue, int32_t newValue) {
	if (oldValue != newValue) {
		$var($String, var$0, propertyName);
		$var($Object, var$1, $of($Integer::valueOf(oldValue)));
		fireVetoableChange(var$0, var$1, $($of($Integer::valueOf(newValue))));
	}
}

void VetoableChangeSupport::fireVetoableChange($String* propertyName, bool oldValue, bool newValue) {
	if (oldValue != newValue) {
		$var($String, var$0, propertyName);
		$var($Object, var$1, $of($Boolean::valueOf(oldValue)));
		fireVetoableChange(var$0, var$1, $($of($Boolean::valueOf(newValue))));
	}
}

void VetoableChangeSupport::fireVetoableChange($PropertyChangeEvent* event$renamed) {
	$var($PropertyChangeEvent, event, event$renamed);
	$var($Object, oldValue, $nc(event)->getOldValue());
	$var($Object, newValue, event->getNewValue());
	if (oldValue == nullptr || newValue == nullptr || !$nc($of(oldValue))->equals(newValue)) {
		$var($String, name, event->getPropertyName());
		$var($VetoableChangeListenerArray, common, $fcast($VetoableChangeListenerArray, $nc(this->map)->get(nullptr)));
		$var($VetoableChangeListenerArray, named, (name != nullptr) ? $fcast($VetoableChangeListenerArray, $nc(this->map)->get(name)) : ($VetoableChangeListenerArray*)nullptr);
		$var($VetoableChangeListenerArray, listeners, nullptr);
		if (common == nullptr) {
			$assign(listeners, named);
		} else if (named == nullptr) {
			$assign(listeners, common);
		} else {
			$assign(listeners, $new($VetoableChangeListenerArray, $nc(common)->length + $nc(named)->length));
			$System::arraycopy(common, 0, listeners, 0, common->length);
			$System::arraycopy(named, 0, listeners, common->length, named->length);
		}
		if (listeners != nullptr) {
			int32_t current = 0;
			try {
				while (current < listeners->length) {
					$nc(listeners->get(current))->vetoableChange(event);
					++current;
				}
			} catch ($PropertyVetoException&) {
				$var($PropertyVetoException, veto, $catch());
				$assign(event, $new($PropertyChangeEvent, this->source, name, newValue, oldValue));
				for (int32_t i = 0; i < current; ++i) {
					try {
						$nc(listeners->get(i))->vetoableChange(event);
					} catch ($PropertyVetoException&) {
						$catch();
					}
				}
				$throw(veto);
			}
		}
	}
}

bool VetoableChangeSupport::hasListeners($String* propertyName) {
	return $nc(this->map)->hasListeners(propertyName);
}

void VetoableChangeSupport::writeObject($ObjectOutputStream* s) {
	$var($Hashtable, children, nullptr);
	$var($VetoableChangeListenerArray, listeners, nullptr);
	$synchronized(this->map) {
		{
			$var($Iterator, i$, $nc($($nc(this->map)->getEntries()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, property, $cast($String, $nc(entry)->getKey()));
					if (property == nullptr) {
						$assign(listeners, $cast($VetoableChangeListenerArray, entry->getValue()));
					} else {
						if (children == nullptr) {
							$assign(children, $new($Hashtable));
						}
						$var(VetoableChangeSupport, vcs, $new(VetoableChangeSupport, this->source));
						$nc(vcs->map)->set(nullptr, $fcast($EventListenerArray, $cast($VetoableChangeListenerArray, $(entry->getValue()))));
						$nc(children)->put(property, vcs);
					}
				}
			}
		}
	}
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("children"_s, $of(children));
	fields->put("source"_s, this->source);
	fields->put("vetoableChangeSupportSerializedDataVersion"_s, 2);
	s->writeFields();
	if (listeners != nullptr) {
		{
			$var($VetoableChangeListenerArray, arr$, listeners);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($VetoableChangeListener, l, arr$->get(i$));
				{
					if ($instanceOf($Serializable, l)) {
						s->writeObject(l);
					}
				}
			}
		}
	}
	s->writeObject(nullptr);
}

void VetoableChangeSupport::readObject($ObjectInputStream* s) {
	$set(this, map, $new($VetoableChangeSupport$VetoableChangeListenerMap));
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Hashtable, children, $cast($Hashtable, $nc(fields)->get("children"_s, ($Object*)nullptr)));
	$set(this, source, fields->get("source"_s, ($Object*)nullptr));
	fields->get("vetoableChangeSupportSerializedDataVersion"_s, 2);
	$var($Object, listenerOrNull, nullptr);
	while (nullptr != ($assign(listenerOrNull, s->readObject()))) {
		$nc(this->map)->add(nullptr, $cast($VetoableChangeListener, listenerOrNull));
	}
	if (children != nullptr) {
		{
			$var($Iterator, i$, $nc($(children->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					{
						$var($VetoableChangeListenerArray, arr$, $nc(($cast(VetoableChangeSupport, $($nc(entry)->getValue()))))->getVetoableChangeListeners());
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($VetoableChangeListener, listener, arr$->get(i$));
							{
								$nc(this->map)->add($cast($String, $(entry->getKey())), listener);
							}
						}
					}
				}
			}
		}
	}
}

void clinit$VetoableChangeSupport($Class* class$) {
		$load($Hashtable);
		$load($Object);
		$init($Integer);
	$assignStatic(VetoableChangeSupport::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "children"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "source"_s, $Object::class$),
		$$new($ObjectStreamField, "vetoableChangeSupportSerializedDataVersion"_s, $Integer::TYPE)
	}));
}

VetoableChangeSupport::VetoableChangeSupport() {
}

$Class* VetoableChangeSupport::load$($String* name, bool initialize) {
	$loadClass(VetoableChangeSupport, name, initialize, &_VetoableChangeSupport_ClassInfo_, clinit$VetoableChangeSupport, allocate$VetoableChangeSupport);
	return class$;
}

$Class* VetoableChangeSupport::class$ = nullptr;

	} // beans
} // java