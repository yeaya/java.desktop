#include <java/beans/MetaData$java_util_Collections.h>

#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_util_Collections_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetaData$java_util_Collections::*)()>(&MetaData$java_util_Collections::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_util_Collections_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_util_Collections", "java.beans.MetaData", "java_util_Collections", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.beans.MetaData$java_util_Collections$SynchronizedSortedMap_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SynchronizedSortedMap_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$SynchronizedMap_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SynchronizedMap_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$SynchronizedSortedSet_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SynchronizedSortedSet_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$SynchronizedSet_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SynchronizedSet_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$SynchronizedRandomAccessList_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SynchronizedRandomAccessList_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$SynchronizedList_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SynchronizedList_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$SynchronizedCollection_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SynchronizedCollection_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$UnmodifiableSortedMap_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "UnmodifiableSortedMap_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "UnmodifiableMap_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "UnmodifiableSortedSet_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$UnmodifiableSet_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "UnmodifiableSet_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$UnmodifiableRandomAccessList_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "UnmodifiableRandomAccessList_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$UnmodifiableList_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "UnmodifiableList_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$UnmodifiableCollection_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "UnmodifiableCollection_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$SingletonMap_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SingletonMap_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$SingletonSet_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SingletonSet_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$SingletonList_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SingletonList_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$EmptyMap_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "EmptyMap_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$EmptySet_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "EmptySet_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Collections$EmptyList_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "EmptyList_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_util_Collections_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.beans.MetaData$java_util_Collections",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_util_Collections_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_util_Collections_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_util_Collections($Class* clazz) {
	return $of($alloc(MetaData$java_util_Collections));
}

void MetaData$java_util_Collections::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_util_Collections::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	if (!$PersistenceDelegate::mutatesTo(oldInstance, newInstance)) {
		return false;
	}
	if (($instanceOf($List, oldInstance)) || ($instanceOf($Set, oldInstance)) || ($instanceOf($Map, oldInstance))) {
		return $nc($of(oldInstance))->equals(newInstance);
	}
	$var($Collection, oldC, $cast($Collection, oldInstance));
	$var($Collection, newC, $cast($Collection, newInstance));
	int32_t var$1 = $nc(oldC)->size();
	bool var$0 = (var$1 == $nc(newC)->size());
	return var$0 && oldC->containsAll(newC);
}

void MetaData$java_util_Collections::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
}

MetaData$java_util_Collections::MetaData$java_util_Collections() {
}

$Class* MetaData$java_util_Collections::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_util_Collections, name, initialize, &_MetaData$java_util_Collections_ClassInfo_, allocate$MetaData$java_util_Collections);
	return class$;
}

$Class* MetaData$java_util_Collections::class$ = nullptr;

	} // beans
} // java