#include <java/beans/PropertyChangeSupport.h>

#include <java/beans/IndexedPropertyChangeEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeListenerProxy.h>
#include <java/beans/PropertyChangeSupport$PropertyChangeListenerMap.h>
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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef TYPE

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerMap = ::java::beans::ChangeListenerMap;
using $IndexedPropertyChangeEvent = ::java::beans::IndexedPropertyChangeEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeListenerProxy = ::java::beans::PropertyChangeListenerProxy;
using $PropertyChangeSupport$PropertyChangeListenerMap = ::java::beans::PropertyChangeSupport$PropertyChangeListenerMap;
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

$FieldInfo _PropertyChangeSupport_FieldInfo_[] = {
	{"map", "Ljava/beans/PropertyChangeSupport$PropertyChangeListenerMap;", nullptr, $PRIVATE, $field(PropertyChangeSupport, map)},
	{"source", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(PropertyChangeSupport, source)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyChangeSupport, serialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyChangeSupport, serialVersionUID)},
	{}
};

$MethodInfo _PropertyChangeSupport_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(PropertyChangeSupport::*)(Object$*)>(&PropertyChangeSupport::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"fire", "([Ljava/beans/PropertyChangeListener;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($PropertyChangeListenerArray*,$PropertyChangeEvent*)>(&PropertyChangeSupport::fire))},
	{"fireIndexedPropertyChange", "(Ljava/lang/String;ILjava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"fireIndexedPropertyChange", "(Ljava/lang/String;III)V", nullptr, $PUBLIC},
	{"fireIndexedPropertyChange", "(Ljava/lang/String;IZZ)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"hasListeners", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyChangeSupport::*)($ObjectInputStream*)>(&PropertyChangeSupport::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyChangeSupport::*)($ObjectOutputStream*)>(&PropertyChangeSupport::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _PropertyChangeSupport_InnerClassesInfo_[] = {
	{"java.beans.PropertyChangeSupport$PropertyChangeListenerMap", "java.beans.PropertyChangeSupport", "PropertyChangeListenerMap", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PropertyChangeSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.PropertyChangeSupport",
	"java.lang.Object",
	"java.io.Serializable",
	_PropertyChangeSupport_FieldInfo_,
	_PropertyChangeSupport_MethodInfo_,
	nullptr,
	nullptr,
	_PropertyChangeSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.PropertyChangeSupport$PropertyChangeListenerMap"
};

$Object* allocate$PropertyChangeSupport($Class* clazz) {
	return $of($alloc(PropertyChangeSupport));
}


$ObjectStreamFieldArray* PropertyChangeSupport::serialPersistentFields = nullptr;

void PropertyChangeSupport::init$(Object$* sourceBean) {
	$set(this, map, $new($PropertyChangeSupport$PropertyChangeListenerMap));
	if (sourceBean == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, source, sourceBean);
}

void PropertyChangeSupport::addPropertyChangeListener($PropertyChangeListener* listener) {
	if (listener == nullptr) {
		return;
	}
	if ($instanceOf($PropertyChangeListenerProxy, listener)) {
		$var($PropertyChangeListenerProxy, proxy, $cast($PropertyChangeListenerProxy, listener));
		$var($String, var$0, $nc(proxy)->getPropertyName());
		addPropertyChangeListener(var$0, $cast($PropertyChangeListener, $(proxy->getListener())));
	} else {
		$nc(this->map)->add(nullptr, listener);
	}
}

void PropertyChangeSupport::removePropertyChangeListener($PropertyChangeListener* listener) {
	if (listener == nullptr) {
		return;
	}
	if ($instanceOf($PropertyChangeListenerProxy, listener)) {
		$var($PropertyChangeListenerProxy, proxy, $cast($PropertyChangeListenerProxy, listener));
		$var($String, var$0, $nc(proxy)->getPropertyName());
		removePropertyChangeListener(var$0, $cast($PropertyChangeListener, $(proxy->getListener())));
	} else {
		$nc(this->map)->remove(nullptr, listener);
	}
}

$PropertyChangeListenerArray* PropertyChangeSupport::getPropertyChangeListeners() {
	return $fcast($PropertyChangeListenerArray, $nc(this->map)->getListeners());
}

void PropertyChangeSupport::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener$renamed) {
	$var($PropertyChangeListener, listener, listener$renamed);
	if (listener == nullptr || propertyName == nullptr) {
		return;
	}
	$assign(listener, $nc(this->map)->extract(listener));
	if (listener != nullptr) {
		$nc(this->map)->add(propertyName, listener);
	}
}

void PropertyChangeSupport::removePropertyChangeListener($String* propertyName, $PropertyChangeListener* listener$renamed) {
	$var($PropertyChangeListener, listener, listener$renamed);
	if (listener == nullptr || propertyName == nullptr) {
		return;
	}
	$assign(listener, $nc(this->map)->extract(listener));
	if (listener != nullptr) {
		$nc(this->map)->remove(propertyName, listener);
	}
}

$PropertyChangeListenerArray* PropertyChangeSupport::getPropertyChangeListeners($String* propertyName) {
	return $fcast($PropertyChangeListenerArray, $nc(this->map)->getListeners(propertyName));
}

void PropertyChangeSupport::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (oldValue == nullptr || newValue == nullptr || !$nc($of(oldValue))->equals(newValue)) {
		firePropertyChange($$new($PropertyChangeEvent, this->source, propertyName, oldValue, newValue));
	}
}

void PropertyChangeSupport::firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) {
	if (oldValue != newValue) {
		$var($String, var$0, propertyName);
		$var($Object, var$1, $of($Integer::valueOf(oldValue)));
		firePropertyChange(var$0, var$1, $($of($Integer::valueOf(newValue))));
	}
}

void PropertyChangeSupport::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
	if (oldValue != newValue) {
		$var($String, var$0, propertyName);
		$var($Object, var$1, $of($Boolean::valueOf(oldValue)));
		firePropertyChange(var$0, var$1, $($of($Boolean::valueOf(newValue))));
	}
}

void PropertyChangeSupport::firePropertyChange($PropertyChangeEvent* event) {
	$var($Object, oldValue, $nc(event)->getOldValue());
	$var($Object, newValue, event->getNewValue());
	if (oldValue == nullptr || newValue == nullptr || !$nc($of(oldValue))->equals(newValue)) {
		$var($String, name, event->getPropertyName());
		$var($PropertyChangeListenerArray, common, $fcast($PropertyChangeListenerArray, $nc(this->map)->get(nullptr)));
		$var($PropertyChangeListenerArray, named, (name != nullptr) ? $fcast($PropertyChangeListenerArray, $nc(this->map)->get(name)) : ($PropertyChangeListenerArray*)nullptr);
		fire(common, event);
		fire(named, event);
	}
}

void PropertyChangeSupport::fire($PropertyChangeListenerArray* listeners, $PropertyChangeEvent* event) {
	$init(PropertyChangeSupport);
	if (listeners != nullptr) {
		{
			$var($PropertyChangeListenerArray, arr$, listeners);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($PropertyChangeListener, listener, arr$->get(i$));
				{
					$nc(listener)->propertyChange(event);
				}
			}
		}
	}
}

void PropertyChangeSupport::fireIndexedPropertyChange($String* propertyName, int32_t index, Object$* oldValue, Object$* newValue) {
	if (oldValue == nullptr || newValue == nullptr || !$nc($of(oldValue))->equals(newValue)) {
		firePropertyChange($$new($IndexedPropertyChangeEvent, this->source, propertyName, oldValue, newValue, index));
	}
}

void PropertyChangeSupport::fireIndexedPropertyChange($String* propertyName, int32_t index, int32_t oldValue, int32_t newValue) {
	if (oldValue != newValue) {
		$var($String, var$0, propertyName);
		int32_t var$1 = index;
		$var($Object, var$2, $of($Integer::valueOf(oldValue)));
		fireIndexedPropertyChange(var$0, var$1, var$2, $($of($Integer::valueOf(newValue))));
	}
}

void PropertyChangeSupport::fireIndexedPropertyChange($String* propertyName, int32_t index, bool oldValue, bool newValue) {
	if (oldValue != newValue) {
		$var($String, var$0, propertyName);
		int32_t var$1 = index;
		$var($Object, var$2, $of($Boolean::valueOf(oldValue)));
		fireIndexedPropertyChange(var$0, var$1, var$2, $($of($Boolean::valueOf(newValue))));
	}
}

bool PropertyChangeSupport::hasListeners($String* propertyName) {
	return $nc(this->map)->hasListeners(propertyName);
}

void PropertyChangeSupport::writeObject($ObjectOutputStream* s) {
	$var($Hashtable, children, nullptr);
	$var($PropertyChangeListenerArray, listeners, nullptr);
	$synchronized(this->map) {
		{
			$var($Iterator, i$, $nc($($nc(this->map)->getEntries()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, property, $cast($String, $nc(entry)->getKey()));
					if (property == nullptr) {
						$assign(listeners, $cast($PropertyChangeListenerArray, entry->getValue()));
					} else {
						if (children == nullptr) {
							$assign(children, $new($Hashtable));
						}
						$var(PropertyChangeSupport, pcs, $new(PropertyChangeSupport, this->source));
						$nc(pcs->map)->set(nullptr, $fcast($EventListenerArray, $cast($PropertyChangeListenerArray, $(entry->getValue()))));
						$nc(children)->put(property, pcs);
					}
				}
			}
		}
	}
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("children"_s, $of(children));
	fields->put("source"_s, this->source);
	fields->put("propertyChangeSupportSerializedDataVersion"_s, 2);
	s->writeFields();
	if (listeners != nullptr) {
		{
			$var($PropertyChangeListenerArray, arr$, listeners);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($PropertyChangeListener, l, arr$->get(i$));
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

void PropertyChangeSupport::readObject($ObjectInputStream* s) {
	$set(this, map, $new($PropertyChangeSupport$PropertyChangeListenerMap));
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Hashtable, children, $cast($Hashtable, $nc(fields)->get("children"_s, ($Object*)nullptr)));
	$set(this, source, fields->get("source"_s, ($Object*)nullptr));
	fields->get("propertyChangeSupportSerializedDataVersion"_s, 2);
	$var($Object, listenerOrNull, nullptr);
	while (nullptr != ($assign(listenerOrNull, s->readObject()))) {
		$nc(this->map)->add(nullptr, $cast($PropertyChangeListener, listenerOrNull));
	}
	if (children != nullptr) {
		{
			$var($Iterator, i$, $nc($(children->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					{
						$var($PropertyChangeListenerArray, arr$, $nc(($cast(PropertyChangeSupport, $($nc(entry)->getValue()))))->getPropertyChangeListeners());
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($PropertyChangeListener, listener, arr$->get(i$));
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

void clinit$PropertyChangeSupport($Class* class$) {
		$load($Hashtable);
		$load($Object);
		$init($Integer);
	$assignStatic(PropertyChangeSupport::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "children"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "source"_s, $Object::class$),
		$$new($ObjectStreamField, "propertyChangeSupportSerializedDataVersion"_s, $Integer::TYPE)
	}));
}

PropertyChangeSupport::PropertyChangeSupport() {
}

$Class* PropertyChangeSupport::load$($String* name, bool initialize) {
	$loadClass(PropertyChangeSupport, name, initialize, &_PropertyChangeSupport_ClassInfo_, clinit$PropertyChangeSupport, allocate$PropertyChangeSupport);
	return class$;
}

$Class* PropertyChangeSupport::class$ = nullptr;

	} // beans
} // java