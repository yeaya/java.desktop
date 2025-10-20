#include <com/sun/beans/introspect/EventSetInfo.h>

#include <com/sun/beans/introspect/ClassInfo.h>
#include <com/sun/beans/introspect/MethodInfo.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EventListener.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/TooManyListenersException.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

#undef TYPE

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassInfo = ::com::sun::beans::introspect::ClassInfo;
using $MethodInfo = ::com::sun::beans::introspect::MethodInfo;
using $1ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $1MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Type = ::java::lang::reflect::Type;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EventListener = ::java::util::EventListener;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $TooManyListenersException = ::java::util::TooManyListenersException;
using $TreeMap = ::java::util::TreeMap;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

$FieldInfo _EventSetInfo_FieldInfo_[] = {
	{"add", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(EventSetInfo, add)},
	{"remove", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(EventSetInfo, remove)},
	{"get", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(EventSetInfo, get$)},
	{}
};

$1MethodInfo _EventSetInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(EventSetInfo::*)()>(&EventSetInfo::init$))},
	{"get", "(Ljava/lang/Class;)Ljava/util/Map;", "(Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/EventSetInfo;>;", $PUBLIC | $STATIC, $method(static_cast<$Map*(*)($Class*)>(&EventSetInfo::get))},
	{"getAddMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(static_cast<$Method*(EventSetInfo::*)()>(&EventSetInfo::getAddMethod))},
	{"getGetMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(static_cast<$Method*(EventSetInfo::*)()>(&EventSetInfo::getGetMethod))},
	{"getInfo", "(Lcom/sun/beans/introspect/MethodInfo;Ljava/lang/reflect/Method;II)Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodInfo*(*)($MethodInfo*,$Method*,int32_t,int32_t)>(&EventSetInfo::getInfo))},
	{"getInfo", "(Ljava/util/Map;Ljava/lang/String;)Lcom/sun/beans/introspect/EventSetInfo;", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/EventSetInfo;>;Ljava/lang/String;)Lcom/sun/beans/introspect/EventSetInfo;", $PRIVATE | $STATIC, $method(static_cast<EventSetInfo*(*)($Map*,$String*)>(&EventSetInfo::getInfo))},
	{"getListenerType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(EventSetInfo::*)()>(&EventSetInfo::getListenerType))},
	{"getRemoveMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(static_cast<$Method*(EventSetInfo::*)()>(&EventSetInfo::getRemoveMethod))},
	{"initialize", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(EventSetInfo::*)()>(&EventSetInfo::initialize))},
	{"isUnicast", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(EventSetInfo::*)()>(&EventSetInfo::isUnicast))},
	{}
};

$1ClassInfo _EventSetInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.introspect.EventSetInfo",
	"java.lang.Object",
	nullptr,
	_EventSetInfo_FieldInfo_,
	_EventSetInfo_MethodInfo_
};

$Object* allocate$EventSetInfo($Class* clazz) {
	return $of($alloc(EventSetInfo));
}

void EventSetInfo::init$() {
}

bool EventSetInfo::initialize() {
	if ((this->add == nullptr) || (this->remove == nullptr) || ($nc(this->remove)->type != $nc(this->add)->type)) {
		return false;
	}
	if ((this->get$ != nullptr) && ($nc(this->get$)->type != $nc(this->add)->type)) {
		$set(this, get$, nullptr);
	}
	return true;
}

$Class* EventSetInfo::getListenerType() {
	return $nc(this->add)->type;
}

$Method* EventSetInfo::getAddMethod() {
	return $nc(this->add)->method;
}

$Method* EventSetInfo::getRemoveMethod() {
	return $nc(this->remove)->method;
}

$Method* EventSetInfo::getGetMethod() {
	return (this->get$ == nullptr) ? ($Method*)nullptr : $nc(this->get$)->method;
}

bool EventSetInfo::isUnicast() {
	$load($TooManyListenersException);
	return $nc(this->add)->isThrow($TooManyListenersException::class$);
}

$MethodInfo* EventSetInfo::getInfo($MethodInfo* info, $Method* method, int32_t prefix, int32_t postfix) {
	$useLocalCurrentObjectStackCache();
	$Class* type = (postfix > 0) ? $nc($MethodInfo::resolve(method, $($nc(method)->getGenericReturnType())))->getComponentType() : $MethodInfo::resolve(method, $nc($($nc(method)->getGenericParameterTypes()))->get(0));
	$load($EventListener);
	if ((type != nullptr) && $EventListener::class$->isAssignableFrom(type)) {
		$var($String, name, $nc(method)->getName());
		if (prefix + postfix < $nc(name)->length()) {
			if ($nc($(type->getName()))->endsWith($(name->substring(prefix, name->length() - postfix)))) {
				if ((info == nullptr) || $nc($nc(info)->type)->isAssignableFrom(type)) {
					return $new($MethodInfo, method, type);
				}
			}
		}
	}
	return info;
}

EventSetInfo* EventSetInfo::getInfo($Map* map, $String* key) {
	$var(EventSetInfo, info, $cast(EventSetInfo, $nc(map)->get(key)));
	if (info == nullptr) {
		$assign(info, $new(EventSetInfo));
		map->put(key, info);
	}
	return info;
}

$Map* EventSetInfo::get($Class* type) {
	$useLocalCurrentObjectStackCache();
	$var($List, methods, $nc($($ClassInfo::get(type)))->getMethods());
	if ($nc(methods)->isEmpty()) {
		return $Collections::emptyMap();
	}
	$var($Map, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
	{
		$var($Iterator, i$, $nc($($nc($($ClassInfo::get(type)))->getMethods()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, method, $cast($Method, i$->next()));
			{
				if (!$Modifier::isStatic($nc(method)->getModifiers())) {
					$Class* returnType = $nc(method)->getReturnType();
					$var($String, name, method->getName());
					switch (method->getParameterCount()) {
					case 1:
						{
							$init($Void);
							if ((returnType == $Void::TYPE) && $nc(name)->endsWith("Listener"_s)) {
								if (name->startsWith("add"_s)) {
									$var(EventSetInfo, info, getInfo(map, $(name->substring(3, name->length() - 8))));
									$set($nc(info), add, getInfo(info->add, method, 3, 0));
								} else if (name->startsWith("remove"_s)) {
									$var(EventSetInfo, info, getInfo(map, $(name->substring(6, name->length() - 8))));
									$set($nc(info), remove, getInfo(info->remove, method, 6, 0));
								}
							}
							break;
						}
					case 0:
						{
							bool var$1 = $nc(returnType)->isArray();
							bool var$0 = var$1 && $nc(name)->startsWith("get"_s);
							if (var$0 && name->endsWith("Listeners"_s)) {
								$var(EventSetInfo, info, getInfo(map, $(name->substring(3, name->length() - 9))));
								$set($nc(info), get$, getInfo(info->get$, method, 3, 1));
							}
							break;
						}
					}
				}
			}
		}
	}
	$var($Iterator, iterator, $nc($(map->values()))->iterator());
	while ($nc(iterator)->hasNext()) {
		if (!$nc(($cast(EventSetInfo, $(iterator->next()))))->initialize()) {
			iterator->remove();
		}
	}
	return !map->isEmpty() ? $Collections::unmodifiableMap(map) : $Collections::emptyMap();
}

EventSetInfo::EventSetInfo() {
}

$Class* EventSetInfo::load$($String* name, bool initialize) {
	$loadClass(EventSetInfo, name, initialize, &_EventSetInfo_ClassInfo_, allocate$EventSetInfo);
	return class$;
}

$Class* EventSetInfo::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com