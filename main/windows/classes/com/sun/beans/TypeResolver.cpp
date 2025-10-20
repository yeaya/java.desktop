#include <com/sun/beans/TypeResolver.h>

#include <com/sun/beans/WeakCache.h>
#include <com/sun/beans/WildcardTypeImpl.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/lang/reflect/WildcardType.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/reflect/generics/reflectiveObjects/GenericArrayTypeImpl.h>
#include <sun/reflect/generics/reflectiveObjects/ParameterizedTypeImpl.h>
#include <jcpp.h>

#undef CACHE

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $WeakCache = ::com::sun::beans::WeakCache;
using $WildcardTypeImpl = ::com::sun::beans::WildcardTypeImpl;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $WildcardType = ::java::lang::reflect::WildcardType;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $GenericArrayTypeImpl = ::sun::reflect::generics::reflectiveObjects::GenericArrayTypeImpl;
using $ParameterizedTypeImpl = ::sun::reflect::generics::reflectiveObjects::ParameterizedTypeImpl;

namespace com {
	namespace sun {
		namespace beans {

$FieldInfo _TypeResolver_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeResolver, $assertionsDisabled)},
	{"CACHE", "Lcom/sun/beans/WeakCache;", "Lcom/sun/beans/WeakCache<Ljava/lang/reflect/Type;Ljava/util/Map<Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(TypeResolver, CACHE)},
	{}
};

$MethodInfo _TypeResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeResolver::*)()>(&TypeResolver::init$))},
	{"erase", "(Ljava/lang/reflect/Type;)Ljava/lang/Class;", "(Ljava/lang/reflect/Type;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($Type*)>(&TypeResolver::erase))},
	{"erase", "([Ljava/lang/reflect/Type;)[Ljava/lang/Class;", "([Ljava/lang/reflect/Type;)[Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$ClassArray*(*)($TypeArray*)>(&TypeResolver::erase))},
	{"fixGenericArray", "(Ljava/lang/reflect/Type;)Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Type*(*)($Type*)>(&TypeResolver::fixGenericArray))},
	{"getActualType", "(Ljava/lang/Class;)Ljava/lang/reflect/Type;", "(Ljava/lang/Class<*>;)Ljava/lang/reflect/Type;", $PRIVATE | $STATIC, $method(static_cast<$Type*(*)($Class*)>(&TypeResolver::getActualType))},
	{"prepare", "(Ljava/util/Map;Ljava/lang/reflect/Type;)V", "(Ljava/util/Map<Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;>;Ljava/lang/reflect/Type;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Map*,$Type*)>(&TypeResolver::prepare))},
	{"resolve", "(Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;)Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Type*(*)($Type*,$Type*)>(&TypeResolver::resolve))},
	{"resolve", "(Ljava/lang/reflect/Type;[Ljava/lang/reflect/Type;)[Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TypeArray*(*)($Type*,$TypeArray*)>(&TypeResolver::resolve))},
	{"resolveInClass", "(Ljava/lang/Class;Ljava/lang/reflect/Type;)Ljava/lang/reflect/Type;", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Type;)Ljava/lang/reflect/Type;", $PUBLIC | $STATIC, $method(static_cast<$Type*(*)($Class*,$Type*)>(&TypeResolver::resolveInClass))},
	{"resolveInClass", "(Ljava/lang/Class;[Ljava/lang/reflect/Type;)[Ljava/lang/reflect/Type;", "(Ljava/lang/Class<*>;[Ljava/lang/reflect/Type;)[Ljava/lang/reflect/Type;", $PUBLIC | $STATIC, $method(static_cast<$TypeArray*(*)($Class*,$TypeArray*)>(&TypeResolver::resolveInClass))},
	{}
};

$ClassInfo _TypeResolver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.TypeResolver",
	"java.lang.Object",
	nullptr,
	_TypeResolver_FieldInfo_,
	_TypeResolver_MethodInfo_
};

$Object* allocate$TypeResolver($Class* clazz) {
	return $of($alloc(TypeResolver));
}

bool TypeResolver::$assertionsDisabled = false;
$WeakCache* TypeResolver::CACHE = nullptr;

void TypeResolver::init$() {
}

$Type* TypeResolver::resolveInClass($Class* inClass, $Type* type) {
	$init(TypeResolver);
	return resolve($(getActualType(inClass)), type);
}

$TypeArray* TypeResolver::resolveInClass($Class* inClass, $TypeArray* types) {
	$init(TypeResolver);
	return resolve($(getActualType(inClass)), types);
}

$Type* TypeResolver::resolve($Type* actual, $Type* formal) {
	$init(TypeResolver);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Class, formal)) {
		return formal;
	}
	if ($instanceOf($GenericArrayType, formal)) {
		$var($Type, comp, $nc(($cast($GenericArrayType, formal)))->getGenericComponentType());
		$assign(comp, resolve(actual, comp));
		return ($instanceOf($Class, comp)) ? static_cast<$Type*>($of($($1Array::newInstance($cast($Class, comp), 0)))->getClass()) : static_cast<$Type*>($GenericArrayTypeImpl::make(comp));
	}
	if ($instanceOf($ParameterizedType, formal)) {
		$var($ParameterizedType, fpt, $cast($ParameterizedType, formal));
		$var($TypeArray, actuals, resolve(actual, $($nc(fpt)->getActualTypeArguments())));
		$Class* var$0 = $cast($Class, $nc(fpt)->getRawType());
		$var($TypeArray, var$1, actuals);
		return $ParameterizedTypeImpl::make(var$0, var$1, $(fpt->getOwnerType()));
	}
	if ($instanceOf($WildcardType, formal)) {
		$var($WildcardType, fwt, $cast($WildcardType, formal));
		$var($TypeArray, upper, resolve(actual, $($nc(fwt)->getUpperBounds())));
		$var($TypeArray, lower, resolve(actual, $($nc(fwt)->getLowerBounds())));
		return $new($WildcardTypeImpl, upper, lower);
	}
	if ($instanceOf($TypeVariable, formal)) {
		$var($Map, map, nullptr);
		$synchronized(TypeResolver::CACHE) {
			$assign(map, $cast($Map, $nc(TypeResolver::CACHE)->get(actual)));
			if (map == nullptr) {
				$assign(map, $new($HashMap));
				prepare(map, actual);
				$nc(TypeResolver::CACHE)->put(actual, map);
			}
		}
		$var($Type, result, $cast($Type, $nc(map)->get(formal)));
		if (result == nullptr || $nc($of(result))->equals(formal)) {
			return formal;
		}
		$assign(result, fixGenericArray(result));
		return resolve(actual, result);
	}
	$throwNew($IllegalArgumentException, $$str({"Bad Type kind: "_s, $nc($of(formal))->getClass()}));
}

$TypeArray* TypeResolver::resolve($Type* actual, $TypeArray* formals) {
	$init(TypeResolver);
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(formals)->length;
	$var($TypeArray, actuals, $new($TypeArray, length));
	for (int32_t i = 0; i < length; ++i) {
		actuals->set(i, $(resolve(actual, formals->get(i))));
	}
	return actuals;
}

$Class* TypeResolver::erase($Type* type) {
	$init(TypeResolver);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Class, type)) {
		return $cast($Class, type);
	}
	if ($instanceOf($ParameterizedType, type)) {
		$var($ParameterizedType, pt, $cast($ParameterizedType, type));
		return $cast($Class, $nc(pt)->getRawType());
	}
	if ($instanceOf($TypeVariable, type)) {
		$var($TypeVariable, tv, $cast($TypeVariable, type));
		$var($TypeArray, bounds, $nc(tv)->getBounds());
		$load($Object);
		return (0 < $nc(bounds)->length) ? erase($nc(bounds)->get(0)) : $Object::class$;
	}
	if ($instanceOf($WildcardType, type)) {
		$var($WildcardType, wt, $cast($WildcardType, type));
		$var($TypeArray, bounds, $nc(wt)->getUpperBounds());
		$load($Object);
		return (0 < $nc(bounds)->length) ? erase($nc(bounds)->get(0)) : $Object::class$;
	}
	if ($instanceOf($GenericArrayType, type)) {
		$var($GenericArrayType, gat, $cast($GenericArrayType, type));
		return $of($($1Array::newInstance(erase($($nc(gat)->getGenericComponentType())), 0)))->getClass();
	}
	$throwNew($IllegalArgumentException, $$str({"Unknown Type kind: "_s, $nc($of(type))->getClass()}));
}

$ClassArray* TypeResolver::erase($TypeArray* types) {
	$init(TypeResolver);
	int32_t length = $nc(types)->length;
	$var($ClassArray, classes, $new($ClassArray, length));
	for (int32_t i = 0; i < length; ++i) {
		classes->set(i, TypeResolver::erase(types->get(i)));
	}
	return classes;
}

void TypeResolver::prepare($Map* map, $Type* type) {
	$init(TypeResolver);
	$useLocalCurrentObjectStackCache();
	$Class* raw = ($cast($Class, (($instanceOf($Class, type)) ? type : $nc(($cast($ParameterizedType, type)))->getRawType())));
	$var($TypeVariableArray, formals, $nc(raw)->getTypeParameters());
	$var($TypeArray, actuals, ($instanceOf($Class, type)) ? $fcast($TypeArray, formals) : ($cast($ParameterizedType, type))->getActualTypeArguments());
	if (!TypeResolver::$assertionsDisabled && !($nc(formals)->length == $nc(actuals)->length)) {
		$throwNew($AssertionError);
	}
	for (int32_t i = 0; i < $nc(formals)->length; ++i) {
		$nc(map)->put(formals->get(i), $nc(actuals)->get(i));
	}
	$var($Type, gSuperclass, raw->getGenericSuperclass());
	if (gSuperclass != nullptr) {
		prepare(map, gSuperclass);
	}
	{
		$var($TypeArray, arr$, raw->getGenericInterfaces());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Type, gInterface, arr$->get(i$));
			{
				prepare(map, gInterface);
			}
		}
	}
	if ($instanceOf($Class, type) && $nc(formals)->length > 0) {
		{
			$var($Iterator, i$, $nc($($nc(map)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$nc(entry)->setValue(erase($cast($Type, $(entry->getValue()))));
				}
			}
		}
	}
}

$Type* TypeResolver::fixGenericArray($Type* type) {
	$init(TypeResolver);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($GenericArrayType, type)) {
		$var($Type, comp, $nc(($cast($GenericArrayType, type)))->getGenericComponentType());
		$assign(comp, fixGenericArray(comp));
		if ($instanceOf($Class, comp)) {
			return $of($($1Array::newInstance($cast($Class, comp), 0)))->getClass();
		}
	}
	return type;
}

$Type* TypeResolver::getActualType($Class* inClass) {
	$init(TypeResolver);
	$beforeCallerSensitive();
	$var($TypeArray, params, $fcast($TypeArray, $nc(inClass)->getTypeParameters()));
	return ($nc(params)->length == 0) ? static_cast<$Type*>(inClass) : static_cast<$Type*>($ParameterizedTypeImpl::make(inClass, params, inClass->getEnclosingClass()));
}

void clinit$TypeResolver($Class* class$) {
	TypeResolver::$assertionsDisabled = !TypeResolver::class$->desiredAssertionStatus();
	$assignStatic(TypeResolver::CACHE, $new($WeakCache));
}

TypeResolver::TypeResolver() {
}

$Class* TypeResolver::load$($String* name, bool initialize) {
	$loadClass(TypeResolver, name, initialize, &_TypeResolver_ClassInfo_, clinit$TypeResolver, allocate$TypeResolver);
	return class$;
}

$Class* TypeResolver::class$ = nullptr;

		} // beans
	} // sun
} // com