#include <java/beans/ChangeListenerMap.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/EventListener.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $EventListener = ::java::util::EventListener;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

$FieldInfo _ChangeListenerMap_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[TL;>;", $PRIVATE, $field(ChangeListenerMap, map)},
	{}
};

$MethodInfo _ChangeListenerMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ChangeListenerMap::*)()>(&ChangeListenerMap::init$))},
	{"add", "(Ljava/lang/String;Ljava/util/EventListener;)V", "(Ljava/lang/String;TL;)V", $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(ChangeListenerMap::*)($String*,$EventListener*)>(&ChangeListenerMap::add))},
	{"extract", "(Ljava/util/EventListener;)Ljava/util/EventListener;", "(TL;)TL;", $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/lang/String;)[Ljava/util/EventListener;", "(Ljava/lang/String;)[TL;", $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$EventListenerArray*(ChangeListenerMap::*)($String*)>(&ChangeListenerMap::get))},
	{"getEntries", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;[TL;>;>;", $PUBLIC | $FINAL, $method(static_cast<$Set*(ChangeListenerMap::*)()>(&ChangeListenerMap::getEntries))},
	{"getListeners", "()[Ljava/util/EventListener;", "()[TL;", $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$EventListenerArray*(ChangeListenerMap::*)()>(&ChangeListenerMap::getListeners))},
	{"getListeners", "(Ljava/lang/String;)[Ljava/util/EventListener;", "(Ljava/lang/String;)[TL;", $PUBLIC | $FINAL, $method(static_cast<$EventListenerArray*(ChangeListenerMap::*)($String*)>(&ChangeListenerMap::getListeners))},
	{"hasListeners", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<bool(ChangeListenerMap::*)($String*)>(&ChangeListenerMap::hasListeners))},
	{"newArray", "(I)[Ljava/util/EventListener;", "(I)[TL;", $PROTECTED | $ABSTRACT},
	{"newProxy", "(Ljava/lang/String;Ljava/util/EventListener;)Ljava/util/EventListener;", "(Ljava/lang/String;TL;)TL;", $PROTECTED | $ABSTRACT},
	{"remove", "(Ljava/lang/String;Ljava/util/EventListener;)V", "(Ljava/lang/String;TL;)V", $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(ChangeListenerMap::*)($String*,$EventListener*)>(&ChangeListenerMap::remove))},
	{"set", "(Ljava/lang/String;[Ljava/util/EventListener;)V", "(Ljava/lang/String;[TL;)V", $PUBLIC | $FINAL, $method(static_cast<void(ChangeListenerMap::*)($String*,$EventListenerArray*)>(&ChangeListenerMap::set))},
	{}
};

$ClassInfo _ChangeListenerMap_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.beans.ChangeListenerMap",
	"java.lang.Object",
	nullptr,
	_ChangeListenerMap_FieldInfo_,
	_ChangeListenerMap_MethodInfo_,
	"<L::Ljava/util/EventListener;>Ljava/lang/Object;"
};

$Object* allocate$ChangeListenerMap($Class* clazz) {
	return $of($alloc(ChangeListenerMap));
}

void ChangeListenerMap::init$() {
}

void ChangeListenerMap::add($String* name, $EventListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->map == nullptr) {
			$set(this, map, $new($HashMap));
		}
		$var($EventListenerArray, array, $cast($EventListenerArray, $nc(this->map)->get(name)));
		int32_t size = (array != nullptr) ? $nc(array)->length : 0;
		$var($EventListenerArray, clone, newArray(size + 1));
		$nc(clone)->set(size, listener);
		if (array != nullptr) {
			$System::arraycopy(array, 0, clone, 0, size);
		}
		$nc(this->map)->put(name, clone);
	}
}

void ChangeListenerMap::remove($String* name, $EventListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->map != nullptr) {
			$var($EventListenerArray, array, $cast($EventListenerArray, $nc(this->map)->get(name)));
			if (array != nullptr) {
				for (int32_t i = 0; i < array->length; ++i) {
					if ($nc($of(listener))->equals(array->get(i))) {
						int32_t size = array->length - 1;
						if (size > 0) {
							$var($EventListenerArray, clone, newArray(size));
							$System::arraycopy(array, 0, clone, 0, i);
							$System::arraycopy(array, i + 1, clone, i, size - i);
							$nc(this->map)->put(name, clone);
						} else {
							$nc(this->map)->remove(name);
							if ($nc(this->map)->isEmpty()) {
								$set(this, map, nullptr);
							}
						}
						break;
					}
				}
			}
		}
	}
}

$EventListenerArray* ChangeListenerMap::get($String* name) {
	$synchronized(this) {
		return (this->map != nullptr) ? $cast($EventListenerArray, $nc(this->map)->get(name)) : ($EventListenerArray*)nullptr;
	}
}

void ChangeListenerMap::set($String* name, $EventListenerArray* listeners) {
	if (listeners != nullptr) {
		if (this->map == nullptr) {
			$set(this, map, $new($HashMap));
		}
		$nc(this->map)->put(name, listeners);
	} else if (this->map != nullptr) {
		$nc(this->map)->remove(name);
		if ($nc(this->map)->isEmpty()) {
			$set(this, map, nullptr);
		}
	}
}

$EventListenerArray* ChangeListenerMap::getListeners() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->map == nullptr) {
			return newArray(0);
		}
		$var($List, list, $new($ArrayList));
		$var($EventListenerArray, listeners, $cast($EventListenerArray, $nc(this->map)->get(nullptr)));
		if (listeners != nullptr) {
			{
				$var($EventListenerArray, arr$, listeners);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($EventListener, listener, arr$->get(i$));
					{
						list->add(listener);
					}
				}
			}
		}
		{
			$var($Iterator, i$, $nc($($nc(this->map)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, name, $cast($String, $nc(entry)->getKey()));
					if (name != nullptr) {
						{
							$var($EventListenerArray, arr$, $cast($EventListenerArray, entry->getValue()));
							int32_t len$ = $nc(arr$)->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($EventListener, listener, arr$->get(i$));
								{
									list->add($(newProxy(name, listener)));
								}
							}
						}
					}
				}
			}
		}
		return $fcast($EventListenerArray, list->toArray($(newArray(list->size()))));
	}
}

$EventListenerArray* ChangeListenerMap::getListeners($String* name) {
	if (name != nullptr) {
		$var($EventListenerArray, listeners, get(name));
		if (listeners != nullptr) {
			return $cast($EventListenerArray, listeners->clone());
		}
	}
	return newArray(0);
}

bool ChangeListenerMap::hasListeners($String* name) {
	$synchronized(this) {
		if (this->map == nullptr) {
			return false;
		}
		$var($EventListenerArray, array, $cast($EventListenerArray, $nc(this->map)->get(nullptr)));
		return (array != nullptr) || ((name != nullptr) && (nullptr != $nc(this->map)->get(name)));
	}
}

$Set* ChangeListenerMap::getEntries() {
	return (this->map != nullptr) ? $nc(this->map)->entrySet() : $Collections::emptySet();
}

ChangeListenerMap::ChangeListenerMap() {
}

$Class* ChangeListenerMap::load$($String* name, bool initialize) {
	$loadClass(ChangeListenerMap, name, initialize, &_ChangeListenerMap_ClassInfo_, allocate$ChangeListenerMap);
	return class$;
}

$Class* ChangeListenerMap::class$ = nullptr;

	} // beans
} // java