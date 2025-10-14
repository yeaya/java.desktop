#include <com/sun/beans/introspect/PropertyInfo.h>

#include <com/sun/beans/finder/ClassFinder.h>
#include <com/sun/beans/introspect/ClassInfo.h>
#include <com/sun/beans/introspect/MethodInfo.h>
#include <com/sun/beans/introspect/PropertyInfo$Name.h>
#include <java/beans/BeanProperty.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE
#undef TYPE
#undef VETO_EXCEPTION
#undef VETO_EXCEPTION_NAME

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $ClassInfo = ::com::sun::beans::introspect::ClassInfo;
using $MethodInfo = ::com::sun::beans::introspect::MethodInfo;
using $PropertyInfo$Name = ::com::sun::beans::introspect::PropertyInfo$Name;
using $BeanProperty = ::java::beans::BeanProperty;
using $Boolean = ::java::lang::Boolean;
using $1ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $1MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Annotation = ::java::lang::annotation::Annotation;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Type = ::java::lang::reflect::Type;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EnumMap = ::java::util::EnumMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $TreeMap = ::java::util::TreeMap;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

$FieldInfo _PropertyInfo_FieldInfo_[] = {
	{"VETO_EXCEPTION_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyInfo, VETO_EXCEPTION_NAME)},
	{"VETO_EXCEPTION", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(PropertyInfo, VETO_EXCEPTION)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(PropertyInfo, type)},
	{"read", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(PropertyInfo, read)},
	{"write", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(PropertyInfo, write)},
	{"indexed", "Lcom/sun/beans/introspect/PropertyInfo;", nullptr, $PRIVATE, $field(PropertyInfo, indexed)},
	{"readList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/beans/introspect/MethodInfo;>;", $PRIVATE, $field(PropertyInfo, readList)},
	{"writeList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/beans/introspect/MethodInfo;>;", $PRIVATE, $field(PropertyInfo, writeList)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/beans/introspect/PropertyInfo$Name;Ljava/lang/Object;>;", $PRIVATE, $field(PropertyInfo, map)},
	{}
};

$1MethodInfo _PropertyInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PropertyInfo::*)()>(&PropertyInfo::init$))},
	{"add", "(Ljava/util/List;Ljava/lang/reflect/Method;Ljava/lang/reflect/Type;)Ljava/util/List;", "(Ljava/util/List<Lcom/sun/beans/introspect/MethodInfo;>;Ljava/lang/reflect/Method;Ljava/lang/reflect/Type;)Ljava/util/List<Lcom/sun/beans/introspect/MethodInfo;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*,$Method*,$Type*)>(&PropertyInfo::add))},
	{"get", "(Lcom/sun/beans/introspect/PropertyInfo$Name;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(PropertyInfo::*)($PropertyInfo$Name*)>(&PropertyInfo::get))},
	{"get", "(Ljava/lang/Class;)Ljava/util/Map;", "(Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/PropertyInfo;>;", $PUBLIC | $STATIC, $method(static_cast<$Map*(*)($Class*)>(&PropertyInfo::get))},
	{"getIndexed", "()Lcom/sun/beans/introspect/PropertyInfo;", nullptr, $PUBLIC, $method(static_cast<PropertyInfo*(PropertyInfo::*)()>(&PropertyInfo::getIndexed))},
	{"getInfo", "(Ljava/util/Map;Ljava/lang/String;Z)Lcom/sun/beans/introspect/PropertyInfo;", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/PropertyInfo;>;Ljava/lang/String;Z)Lcom/sun/beans/introspect/PropertyInfo;", $PRIVATE | $STATIC, $method(static_cast<PropertyInfo*(*)($Map*,$String*,bool)>(&PropertyInfo::getInfo))},
	{"getPropertyType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(PropertyInfo::*)()>(&PropertyInfo::getPropertyType))},
	{"getReadMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(static_cast<$Method*(PropertyInfo::*)()>(&PropertyInfo::getReadMethod))},
	{"getWriteMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(static_cast<$Method*(PropertyInfo::*)()>(&PropertyInfo::getWriteMethod))},
	{"initialize", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(PropertyInfo::*)()>(&PropertyInfo::initialize))},
	{"initialize", "(Lcom/sun/beans/introspect/MethodInfo;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PropertyInfo::*)($MethodInfo*)>(&PropertyInfo::initialize))},
	{"is", "(Lcom/sun/beans/introspect/PropertyInfo$Name;)Z", nullptr, $PUBLIC, $method(static_cast<bool(PropertyInfo::*)($PropertyInfo$Name*)>(&PropertyInfo::is))},
	{"isConstrained", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(PropertyInfo::*)()>(&PropertyInfo::isConstrained))},
	{"isPrefix", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&PropertyInfo::isPrefix))},
	{"put", "(Lcom/sun/beans/introspect/PropertyInfo$Name;Z)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyInfo::*)($PropertyInfo$Name*,bool)>(&PropertyInfo::put))},
	{"put", "(Lcom/sun/beans/introspect/PropertyInfo$Name;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyInfo::*)($PropertyInfo$Name*,$String*)>(&PropertyInfo::put))},
	{"put", "(Lcom/sun/beans/introspect/PropertyInfo$Name;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyInfo::*)($PropertyInfo$Name*,Object$*)>(&PropertyInfo::put))},
	{}
};

$InnerClassInfo _PropertyInfo_InnerClassesInfo_[] = {
	{"com.sun.beans.introspect.PropertyInfo$Name", "com.sun.beans.introspect.PropertyInfo", "Name", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$1ClassInfo _PropertyInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.introspect.PropertyInfo",
	"java.lang.Object",
	nullptr,
	_PropertyInfo_FieldInfo_,
	_PropertyInfo_MethodInfo_,
	nullptr,
	nullptr,
	_PropertyInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.beans.introspect.PropertyInfo$Name"
};

$Object* allocate$PropertyInfo($Class* clazz) {
	return $of($alloc(PropertyInfo));
}

$String* PropertyInfo::VETO_EXCEPTION_NAME = nullptr;
$Class* PropertyInfo::VETO_EXCEPTION = nullptr;

void PropertyInfo::init$() {
}

bool PropertyInfo::initialize() {
	bool isInitedToIsGetter = false;
	if (this->read != nullptr) {
		$set(this, type, $nc(this->read)->type);
		isInitedToIsGetter = isPrefix($($nc($nc(this->read)->method)->getName()), "is"_s);
	}
	if (!isInitedToIsGetter && this->readList != nullptr) {
		{
			$var($Iterator, i$, $nc(this->readList)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MethodInfo, info, $cast($MethodInfo, i$->next()));
				{
					if ((this->read == nullptr) || $nc($nc(this->read)->type)->isAssignableFrom($nc(info)->type)) {
						$set(this, read, info);
						$set(this, type, $nc(info)->type);
					}
				}
			}
		}
		$set(this, readList, nullptr);
	}
	$Class* writeType = this->type;
	if (this->writeList != nullptr) {
		{
			$var($Iterator, i$, $nc(this->writeList)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MethodInfo, info, $cast($MethodInfo, i$->next()));
				{
					if (writeType == nullptr) {
						$set(this, write, info);
						writeType = $nc(info)->type;
					} else if ($nc(writeType)->isAssignableFrom($nc(info)->type)) {
						if ((this->write == nullptr) || $nc($nc(this->write)->type)->isAssignableFrom($nc(info)->type)) {
							$set(this, write, info);
							writeType = $nc(info)->type;
						}
					}
				}
			}
		}
		$set(this, writeList, nullptr);
	}
	if (this->type == nullptr) {
		$set(this, type, writeType);
	}
	if (this->indexed != nullptr) {
		if ((this->type != nullptr) && !$nc(this->type)->isArray()) {
			$set(this, indexed, nullptr);
		} else if (!$nc(this->indexed)->initialize()) {
			$set(this, indexed, nullptr);
		} else if ((this->type != nullptr) && ($nc(this->indexed)->type != $nc(this->type)->getComponentType())) {
			$set(this, indexed, nullptr);
		} else {
			$set(this, map, $nc(this->indexed)->map);
			$set($nc(this->indexed), map, nullptr);
		}
	}
	if ((this->type == nullptr) && (this->indexed == nullptr)) {
		return false;
	}
	bool done = initialize(this->read);
	if (!done) {
		initialize(this->write);
	}
	return true;
}

bool PropertyInfo::initialize($MethodInfo* info) {
	$beforeCallerSensitive();
	if (info != nullptr) {
		$load($BeanProperty);
		$var($BeanProperty, annotation, $cast($BeanProperty, $nc(info->method)->getAnnotation($BeanProperty::class$)));
		if (annotation != nullptr) {
			if (!annotation->bound()) {
				$init($PropertyInfo$Name);
				$init($Boolean);
				put($PropertyInfo$Name::bound, $of($Boolean::FALSE));
			}
			$init($PropertyInfo$Name);
			put($PropertyInfo$Name::expert, annotation->expert());
			put($PropertyInfo$Name::required, annotation->required());
			put($PropertyInfo$Name::hidden, annotation->hidden());
			put($PropertyInfo$Name::preferred, annotation->preferred());
			put($PropertyInfo$Name::visualUpdate, annotation->visualUpdate());
			put($PropertyInfo$Name::description, $(annotation->description()));
			$var($StringArray, values, annotation->enumerationValues());
			try {
				$var($ObjectArray, array, $new($ObjectArray, 3 * $nc(values)->length));
				int32_t index = 0;
				{
					$var($StringArray, arr$, values);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($String, value, arr$->get(i$));
						{
							$Class* type = $nc(info->method)->getDeclaringClass();
							$var($String, name, value);
							int32_t pos = $nc(value)->lastIndexOf((int32_t)u'.');
							if (pos > 0) {
								$assign(name, value->substring(0, pos));
								if (name->indexOf((int32_t)u'.') < 0) {
									$var($String, pkg, $nc(type)->getName());
									int32_t var$1 = 1;
									int32_t var$3 = pkg->lastIndexOf((int32_t)u'.');
									int32_t var$2 = $Math::max(var$3, pkg->lastIndexOf((int32_t)u'$'));
									$var($String, var$0, $($nc(pkg)->substring(0, var$1 + var$2)));
									$assign(name, $concat(var$0, name));
								}
								type = $ClassFinder::findClass(name);
								$assign(name, value->substring(pos + 1));
							}
							$var($Field, field, $nc(type)->getField(name));
							bool var$4 = $Modifier::isStatic($nc(field)->getModifiers());
							if (var$4 && $nc(info->type)->isAssignableFrom($nc(field)->getType())) {
								array->set(index++, name);
								array->set(index++, $($nc(field)->get(nullptr)));
								array->set(index++, value);
							}
						}
					}
				}
				if (index == array->length) {
					put($PropertyInfo$Name::enumerationValues, $of(array));
				}
			} catch ($Exception&) {
				$var($Exception, ignored, $catch());
				ignored->printStackTrace();
			}
			return true;
		}
	}
	return false;
}

$Class* PropertyInfo::getPropertyType() {
	return this->type;
}

$Method* PropertyInfo::getReadMethod() {
	return (this->read == nullptr) ? ($Method*)nullptr : $nc(this->read)->method;
}

$Method* PropertyInfo::getWriteMethod() {
	return (this->write == nullptr) ? ($Method*)nullptr : $nc(this->write)->method;
}

PropertyInfo* PropertyInfo::getIndexed() {
	return this->indexed;
}

bool PropertyInfo::isConstrained() {
	if (this->write != nullptr) {
		if (PropertyInfo::VETO_EXCEPTION == nullptr) {
			{
				$var($ClassArray, arr$, $nc($nc(this->write)->method)->getExceptionTypes());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$Class* type = arr$->get(i$);
					{
						if ($nc($($nc(type)->getName()))->equals(PropertyInfo::VETO_EXCEPTION_NAME)) {
							return true;
						}
					}
				}
			}
		} else if ($nc(this->write)->isThrow(PropertyInfo::VETO_EXCEPTION)) {
			return true;
		}
	}
	return (this->indexed != nullptr) && $nc(this->indexed)->isConstrained();
}

bool PropertyInfo::is($PropertyInfo$Name* name) {
	$var($Object, value, get(name));
	$init($PropertyInfo$Name);
	return ($instanceOf($Boolean, value)) ? $nc(($cast($Boolean, value)))->booleanValue() : $PropertyInfo$Name::bound->equals(name);
}

$Object* PropertyInfo::get($PropertyInfo$Name* name) {
	return $of(this->map == nullptr ? ($Object*)nullptr : $nc(this->map)->get(name));
}

void PropertyInfo::put($PropertyInfo$Name* name, bool value) {
	if (value) {
		$init($Boolean);
		put(name, $of($Boolean::TRUE));
	}
}

void PropertyInfo::put($PropertyInfo$Name* name, $String* value) {
	if (0 < $nc(value)->length()) {
		put(name, $of(value));
	}
}

void PropertyInfo::put($PropertyInfo$Name* name, Object$* value) {
	if (this->map == nullptr) {
		$load($PropertyInfo$Name);
		$set(this, map, $new($EnumMap, $PropertyInfo$Name::class$));
	}
	$nc(this->map)->put(name, value);
}

$List* PropertyInfo::add($List* list$renamed, $Method* method, $Type* type) {
	$init(PropertyInfo);
	$var($List, list, list$renamed);
	if (list == nullptr) {
		$assign(list, $new($ArrayList));
	}
	$nc(list)->add($$new($MethodInfo, method, type));
	return list;
}

bool PropertyInfo::isPrefix($String* name, $String* prefix) {
	$init(PropertyInfo);
	int32_t var$1 = $nc(name)->length();
	bool var$0 = var$1 > $nc(prefix)->length();
	return var$0 && name->startsWith(prefix);
}

PropertyInfo* PropertyInfo::getInfo($Map* map, $String* key, bool indexed) {
	$init(PropertyInfo);
	$var(PropertyInfo, info, $cast(PropertyInfo, $nc(map)->get(key)));
	if (info == nullptr) {
		$assign(info, $new(PropertyInfo));
		map->put(key, info);
	}
	if (!indexed) {
		return info;
	}
	if ($nc(info)->indexed == nullptr) {
		$set(info, indexed, $new(PropertyInfo));
	}
	return $nc(info)->indexed;
}

$Map* PropertyInfo::get($Class* type) {
	$init(PropertyInfo);
	$var($List, methods, $nc($($ClassInfo::get(type)))->getMethods());
	if ($nc(methods)->isEmpty()) {
		return $Collections::emptyMap();
	}
	$var($Map, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
	{
		$var($Iterator, i$, $nc(methods)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, method, $cast($Method, i$->next()));
			{
				if (!$Modifier::isStatic($nc(method)->getModifiers())) {
					$Class* returnType = $nc(method)->getReturnType();
					$var($String, name, method->getName());
					switch (method->getParameterCount()) {
					case 0:
						{
							$init($Boolean);
							bool var$0 = $nc($of(returnType))->equals($Boolean::TYPE);
							if (var$0 && isPrefix(name, "is"_s)) {
								$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(2)), false));
								$set($nc(info), read, $new($MethodInfo, method, $Boolean::TYPE));
							} else {
								$init($Void);
								bool var$2 = !$of(returnType)->equals($Void::TYPE);
								if (var$2 && isPrefix(name, "get"_s)) {
									$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(3)), false));
									$set($nc(info), readList, add(info->readList, method, $(method->getGenericReturnType())));
								}
							}
							break;
						}
					case 1:
						{
							$init($Void);
							bool var$3 = $nc($of(returnType))->equals($Void::TYPE);
							if (var$3 && isPrefix(name, "set"_s)) {
								$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(3)), false));
								$set($nc(info), writeList, add(info->writeList, method, $nc($(method->getGenericParameterTypes()))->get(0)));
							} else {
								bool var$7 = !$of(returnType)->equals($Void::TYPE);
								$init($Integer);
								bool var$6 = var$7 && $nc($of($nc($(method->getParameterTypes()))->get(0)))->equals($Integer::TYPE);
								if (var$6 && isPrefix(name, "get"_s)) {
									$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(3)), true));
									$set($nc(info), readList, add(info->readList, method, $(method->getGenericReturnType())));
								}
							}
							break;
						}
					case 2:
						{
							$init($Void);
							bool var$9 = $nc($of(returnType))->equals($Void::TYPE);
							$init($Integer);
							bool var$8 = var$9 && $nc($of($nc($(method->getParameterTypes()))->get(0)))->equals($Integer::TYPE);
							if (var$8 && isPrefix(name, "set"_s)) {
								$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(3)), true));
								$set($nc(info), writeList, add(info->writeList, method, $nc($(method->getGenericParameterTypes()))->get(1)));
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
		if (!$nc(($cast(PropertyInfo, $(iterator->next()))))->initialize()) {
			iterator->remove();
		}
	}
	return !map->isEmpty() ? $Collections::unmodifiableMap(map) : $Collections::emptyMap();
}

void clinit$PropertyInfo($Class* class$) {
	$assignStatic(PropertyInfo::VETO_EXCEPTION_NAME, "java.beans.PropertyVetoException"_s);
	$beforeCallerSensitive();
	{
		$Class* type = nullptr;
		try {
			type = $Class::forName(PropertyInfo::VETO_EXCEPTION_NAME);
		} catch ($Exception&) {
			$var($Exception, exception, $catch());
			type = nullptr;
		}
		$assignStatic(PropertyInfo::VETO_EXCEPTION, type);
	}
}

PropertyInfo::PropertyInfo() {
}

$Class* PropertyInfo::load$($String* name, bool initialize) {
	$loadClass(PropertyInfo, name, initialize, &_PropertyInfo_ClassInfo_, clinit$PropertyInfo, allocate$PropertyInfo);
	return class$;
}

$Class* PropertyInfo::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com