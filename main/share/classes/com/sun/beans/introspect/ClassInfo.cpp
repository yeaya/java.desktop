#include <com/sun/beans/introspect/ClassInfo.h>

#include <com/sun/beans/introspect/ClassInfo$1.h>
#include <com/sun/beans/introspect/EventSetInfo.h>
#include <com/sun/beans/introspect/MethodInfo.h>
#include <com/sun/beans/introspect/PropertyInfo.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/SecurityException.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef CACHE
#undef DEFAULT
#undef SOFT

using $ClassInfo$1 = ::com::sun::beans::introspect::ClassInfo$1;
using $EventSetInfo = ::com::sun::beans::introspect::EventSetInfo;
using $1MethodInfo = ::com::sun::beans::introspect::MethodInfo;
using $PropertyInfo = ::com::sun::beans::introspect::PropertyInfo;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

$FieldInfo _ClassInfo_FieldInfo_[] = {
	{"DEFAULT", "Lcom/sun/beans/introspect/ClassInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassInfo, DEFAULT)},
	{"CACHE", "Lcom/sun/beans/util/Cache;", "Lcom/sun/beans/util/Cache<Ljava/lang/Class<*>;Lcom/sun/beans/introspect/ClassInfo;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ClassInfo, CACHE)},
	{"mutex", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ClassInfo, mutex)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ClassInfo, type)},
	{"methods", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/reflect/Method;>;", $PRIVATE, $field(ClassInfo, methods)},
	{"properties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/PropertyInfo;>;", $PRIVATE, $field(ClassInfo, properties)},
	{"eventSets", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/EventSetInfo;>;", $PRIVATE, $field(ClassInfo, eventSets)},
	{}
};

$MethodInfo _ClassInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(ClassInfo::*)($Class*)>(&ClassInfo::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ClassInfo::clear))},
	{"get", "(Ljava/lang/Class;)Lcom/sun/beans/introspect/ClassInfo;", "(Ljava/lang/Class<*>;)Lcom/sun/beans/introspect/ClassInfo;", $PUBLIC | $STATIC, $method(static_cast<ClassInfo*(*)($Class*)>(&ClassInfo::get))},
	{"getEventSets", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/EventSetInfo;>;", $PUBLIC, $method(static_cast<$Map*(ClassInfo::*)()>(&ClassInfo::getEventSets))},
	{"getMethods", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/reflect/Method;>;", $PUBLIC, $method(static_cast<$List*(ClassInfo::*)()>(&ClassInfo::getMethods))},
	{"getProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/PropertyInfo;>;", $PUBLIC, $method(static_cast<$Map*(ClassInfo::*)()>(&ClassInfo::getProperties))},
	{"remove", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*)>(&ClassInfo::remove))},
	{}
};

$InnerClassInfo _ClassInfo_InnerClassesInfo_[] = {
	{"com.sun.beans.introspect.ClassInfo$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.introspect.ClassInfo",
	"java.lang.Object",
	nullptr,
	_ClassInfo_FieldInfo_,
	_ClassInfo_MethodInfo_,
	nullptr,
	nullptr,
	_ClassInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.beans.introspect.ClassInfo$1"
};

$Object* allocate$ClassInfo($Class* clazz) {
	return $of($alloc(ClassInfo));
}

ClassInfo* ClassInfo::DEFAULT = nullptr;
$Cache* ClassInfo::CACHE = nullptr;

ClassInfo* ClassInfo::get($Class* type) {
	$init(ClassInfo);
	if (type == nullptr) {
		return ClassInfo::DEFAULT;
	}
	try {
		$ReflectUtil::checkPackageAccess(type);
		return $cast(ClassInfo, $nc(ClassInfo::CACHE)->get(type));
	} catch ($SecurityException& exception) {
		return ClassInfo::DEFAULT;
	}
	$shouldNotReachHere();
}

void ClassInfo::clear() {
	$init(ClassInfo);
	$nc(ClassInfo::CACHE)->clear();
}

void ClassInfo::remove($Class* clz) {
	$init(ClassInfo);
	$nc(ClassInfo::CACHE)->remove(clz);
}

void ClassInfo::init$($Class* type) {
	$set(this, mutex, $new($Object));
	$set(this, type, type);
}

$List* ClassInfo::getMethods() {
	if (this->methods == nullptr) {
		$synchronized(this->mutex) {
			if (this->methods == nullptr) {
				$set(this, methods, $1MethodInfo::get(this->type));
			}
		}
	}
	return this->methods;
}

$Map* ClassInfo::getProperties() {
	if (this->properties == nullptr) {
		$synchronized(this->mutex) {
			if (this->properties == nullptr) {
				$set(this, properties, $PropertyInfo::get(this->type));
			}
		}
	}
	return this->properties;
}

$Map* ClassInfo::getEventSets() {
	if (this->eventSets == nullptr) {
		$synchronized(this->mutex) {
			if (this->eventSets == nullptr) {
				$set(this, eventSets, $EventSetInfo::get(this->type));
			}
		}
	}
	return this->eventSets;
}

void clinit$ClassInfo($Class* class$) {
	$assignStatic(ClassInfo::DEFAULT, $new(ClassInfo, nullptr));
	$init($Cache$Kind);
	$assignStatic(ClassInfo::CACHE, $new($ClassInfo$1, $Cache$Kind::SOFT, $Cache$Kind::SOFT));
}

ClassInfo::ClassInfo() {
}

$Class* ClassInfo::load$($String* name, bool initialize) {
	$loadClass(ClassInfo, name, initialize, &_ClassInfo_ClassInfo_, clinit$ClassInfo, allocate$ClassInfo);
	return class$;
}

$Class* ClassInfo::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com