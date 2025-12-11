#include <java/beans/MetaData$java_util_AbstractMap_PersistenceDelegate.h>

#include <java/beans/MetaData$java_util_Map_PersistenceDelegate.h>
#include <java/beans/MetaData.h>
#include <jcpp.h>

using $MetaData$java_util_Map_PersistenceDelegate = ::java::beans::MetaData$java_util_Map_PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_util_AbstractMap_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_util_AbstractMap_PersistenceDelegate::*)()>(&MetaData$java_util_AbstractMap_PersistenceDelegate::init$))},
	{}
};

$InnerClassInfo _MetaData$java_util_AbstractMap_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_util_AbstractMap_PersistenceDelegate", "java.beans.MetaData", "java_util_AbstractMap_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Map_PersistenceDelegate", "java.beans.MetaData", "java_util_Map_PersistenceDelegate", $STATIC},
	{}
};

$ClassInfo _MetaData$java_util_AbstractMap_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_util_AbstractMap_PersistenceDelegate",
	"java.beans.MetaData$java_util_Map_PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_util_AbstractMap_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_util_AbstractMap_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_util_AbstractMap_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_util_AbstractMap_PersistenceDelegate));
}

void MetaData$java_util_AbstractMap_PersistenceDelegate::init$() {
	$MetaData$java_util_Map_PersistenceDelegate::init$();
}

MetaData$java_util_AbstractMap_PersistenceDelegate::MetaData$java_util_AbstractMap_PersistenceDelegate() {
}

$Class* MetaData$java_util_AbstractMap_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_util_AbstractMap_PersistenceDelegate, name, initialize, &_MetaData$java_util_AbstractMap_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_util_AbstractMap_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_util_AbstractMap_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java