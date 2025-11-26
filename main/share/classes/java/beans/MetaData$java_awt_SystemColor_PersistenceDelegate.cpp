#include <java/beans/MetaData$java_awt_SystemColor_PersistenceDelegate.h>

#include <java/beans/MetaData$StaticFieldsPersistenceDelegate.h>
#include <java/beans/MetaData.h>
#include <jcpp.h>

using $MetaData = ::java::beans::MetaData;
using $MetaData$StaticFieldsPersistenceDelegate = ::java::beans::MetaData$StaticFieldsPersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_SystemColor_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_SystemColor_PersistenceDelegate::*)()>(&MetaData$java_awt_SystemColor_PersistenceDelegate::init$))},
	{}
};

$InnerClassInfo _MetaData$java_awt_SystemColor_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_SystemColor_PersistenceDelegate", "java.beans.MetaData", "java_awt_SystemColor_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$StaticFieldsPersistenceDelegate", "java.beans.MetaData", "StaticFieldsPersistenceDelegate", $STATIC},
	{}
};

$ClassInfo _MetaData$java_awt_SystemColor_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_SystemColor_PersistenceDelegate",
	"java.beans.MetaData$StaticFieldsPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_SystemColor_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_SystemColor_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_SystemColor_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_SystemColor_PersistenceDelegate));
}

void MetaData$java_awt_SystemColor_PersistenceDelegate::init$() {
	$MetaData$StaticFieldsPersistenceDelegate::init$();
}

MetaData$java_awt_SystemColor_PersistenceDelegate::MetaData$java_awt_SystemColor_PersistenceDelegate() {
}

$Class* MetaData$java_awt_SystemColor_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_SystemColor_PersistenceDelegate, name, initialize, &_MetaData$java_awt_SystemColor_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_SystemColor_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_SystemColor_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java