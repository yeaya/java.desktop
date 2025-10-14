#include <java/beans/MetaData$java_util_AbstractList_PersistenceDelegate.h>

#include <java/beans/MetaData$java_util_List_PersistenceDelegate.h>
#include <java/beans/MetaData.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MetaData = ::java::beans::MetaData;
using $MetaData$java_util_List_PersistenceDelegate = ::java::beans::MetaData$java_util_List_PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_util_AbstractList_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_util_AbstractList_PersistenceDelegate::*)()>(&MetaData$java_util_AbstractList_PersistenceDelegate::init$))},
	{}
};

$InnerClassInfo _MetaData$java_util_AbstractList_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_util_AbstractList_PersistenceDelegate", "java.beans.MetaData", "java_util_AbstractList_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_List_PersistenceDelegate", "java.beans.MetaData", "java_util_List_PersistenceDelegate", $STATIC},
	{}
};

$ClassInfo _MetaData$java_util_AbstractList_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_util_AbstractList_PersistenceDelegate",
	"java.beans.MetaData$java_util_List_PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_util_AbstractList_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_util_AbstractList_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_util_AbstractList_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_util_AbstractList_PersistenceDelegate));
}

void MetaData$java_util_AbstractList_PersistenceDelegate::init$() {
	$MetaData$java_util_List_PersistenceDelegate::init$();
}

MetaData$java_util_AbstractList_PersistenceDelegate::MetaData$java_util_AbstractList_PersistenceDelegate() {
}

$Class* MetaData$java_util_AbstractList_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_util_AbstractList_PersistenceDelegate, name, initialize, &_MetaData$java_util_AbstractList_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_util_AbstractList_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_util_AbstractList_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java