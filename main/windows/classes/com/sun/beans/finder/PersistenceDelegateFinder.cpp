#include <com/sun/beans/finder/PersistenceDelegateFinder.h>

#include <com/sun/beans/finder/InstanceFinder.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $InstanceFinder = ::com::sun::beans::finder::InstanceFinder;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _PersistenceDelegateFinder_FieldInfo_[] = {
	{"registry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/beans/PersistenceDelegate;>;", $PRIVATE | $FINAL, $field(PersistenceDelegateFinder, registry)},
	{}
};

$MethodInfo _PersistenceDelegateFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PersistenceDelegateFinder::*)()>(&PersistenceDelegateFinder::init$))},
	{"find", "(Ljava/lang/Class;)Ljava/beans/PersistenceDelegate;", "(Ljava/lang/Class<*>;)Ljava/beans/PersistenceDelegate;", $PUBLIC},
	{"getPackages", "()[Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"register", "(Ljava/lang/Class;Ljava/beans/PersistenceDelegate;)V", "(Ljava/lang/Class<*>;Ljava/beans/PersistenceDelegate;)V", $PUBLIC, $method(static_cast<void(PersistenceDelegateFinder::*)($Class*,$PersistenceDelegate*)>(&PersistenceDelegateFinder::register$))},
	{"setPackages", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _PersistenceDelegateFinder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.finder.PersistenceDelegateFinder",
	"com.sun.beans.finder.InstanceFinder",
	nullptr,
	_PersistenceDelegateFinder_FieldInfo_,
	_PersistenceDelegateFinder_MethodInfo_,
	"Lcom/sun/beans/finder/InstanceFinder<Ljava/beans/PersistenceDelegate;>;"
};

$Object* allocate$PersistenceDelegateFinder($Class* clazz) {
	return $of($alloc(PersistenceDelegateFinder));
}

void PersistenceDelegateFinder::init$() {
	$load($PersistenceDelegate);
	$InstanceFinder::init$($PersistenceDelegate::class$, true, "PersistenceDelegate"_s, $$new($StringArray, 0));
	$set(this, registry, $new($HashMap));
}

void PersistenceDelegateFinder::register$($Class* type, $PersistenceDelegate* delegate) {
	$synchronized(this->registry) {
		if (delegate != nullptr) {
			$nc(this->registry)->put(type, delegate);
		} else {
			$nc(this->registry)->remove(type);
		}
	}
}

$Object* PersistenceDelegateFinder::find($Class* type) {
	$var($PersistenceDelegate, delegate, nullptr);
	$synchronized(this->registry) {
		$assign(delegate, $cast($PersistenceDelegate, $nc(this->registry)->get(type)));
	}
	return $of((delegate != nullptr) ? delegate : $cast($PersistenceDelegate, $InstanceFinder::find(type)));
}

void PersistenceDelegateFinder::setPackages($StringArray* packages) {
	$InstanceFinder::setPackages(packages);
}

$StringArray* PersistenceDelegateFinder::getPackages() {
	return $InstanceFinder::getPackages();
}

PersistenceDelegateFinder::PersistenceDelegateFinder() {
}

$Class* PersistenceDelegateFinder::load$($String* name, bool initialize) {
	$loadClass(PersistenceDelegateFinder, name, initialize, &_PersistenceDelegateFinder_ClassInfo_, allocate$PersistenceDelegateFinder);
	return class$;
}

$Class* PersistenceDelegateFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com