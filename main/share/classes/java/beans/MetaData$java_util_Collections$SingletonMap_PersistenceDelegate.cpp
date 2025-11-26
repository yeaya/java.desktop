#include <java/beans/MetaData$java_util_Collections$SingletonMap_PersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData$java_util_Collections.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData$java_util_Collections = ::java::beans::MetaData$java_util_Collections;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_util_Collections$SingletonMap_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_util_Collections$SingletonMap_PersistenceDelegate::*)()>(&MetaData$java_util_Collections$SingletonMap_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_util_Collections$SingletonMap_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_util_Collections", "java.beans.MetaData", "java_util_Collections", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.beans.MetaData$java_util_Collections$SingletonMap_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SingletonMap_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_util_Collections$SingletonMap_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_util_Collections$SingletonMap_PersistenceDelegate",
	"java.beans.MetaData$java_util_Collections",
	nullptr,
	nullptr,
	_MetaData$java_util_Collections$SingletonMap_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_util_Collections$SingletonMap_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_util_Collections$SingletonMap_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_util_Collections$SingletonMap_PersistenceDelegate));
}

void MetaData$java_util_Collections$SingletonMap_PersistenceDelegate::init$() {
	$MetaData$java_util_Collections::init$();
}

$Expression* MetaData$java_util_Collections$SingletonMap_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $cast($Map, oldInstance));
	$var($Object, key, $nc($($nc($($nc(map)->keySet()))->iterator()))->next());
	$load($Collections);
	return $new($Expression, oldInstance, $Collections::class$, "singletonMap"_s, $$new($ObjectArray, {
		key,
		$(map->get(key))
	}));
}

MetaData$java_util_Collections$SingletonMap_PersistenceDelegate::MetaData$java_util_Collections$SingletonMap_PersistenceDelegate() {
}

$Class* MetaData$java_util_Collections$SingletonMap_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_util_Collections$SingletonMap_PersistenceDelegate, name, initialize, &_MetaData$java_util_Collections$SingletonMap_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_util_Collections$SingletonMap_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_util_Collections$SingletonMap_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java