#include <java/beans/MetaData$java_util_Date_PersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_util_Date_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_util_Date_PersistenceDelegate::*)()>(&MetaData$java_util_Date_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_util_Date_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_util_Date_PersistenceDelegate", "java.beans.MetaData", "java_util_Date_PersistenceDelegate", $STATIC},
	{}
};

$ClassInfo _MetaData$java_util_Date_PersistenceDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.MetaData$java_util_Date_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_util_Date_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_util_Date_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_util_Date_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_util_Date_PersistenceDelegate));
}

void MetaData$java_util_Date_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_util_Date_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	$useLocalCurrentObjectStackCache();
	if (!$PersistenceDelegate::mutatesTo(oldInstance, newInstance)) {
		return false;
	}
	$var($Date, oldDate, $cast($Date, oldInstance));
	$var($Date, newDate, $cast($Date, newInstance));
	int64_t var$0 = $nc(oldDate)->getTime();
	return var$0 == $nc(newDate)->getTime();
}

$Expression* MetaData$java_util_Date_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($Date, date, $cast($Date, oldInstance));
	$var($Object, var$0, $of(date));
	$var($Object, var$1, $of($nc($of(date))->getClass()));
	$var($String, var$2, "new"_s);
	return $new($Expression, var$0, var$1, var$2, $$new($ObjectArray, {$($of($Long::valueOf(date->getTime())))}));
}

MetaData$java_util_Date_PersistenceDelegate::MetaData$java_util_Date_PersistenceDelegate() {
}

$Class* MetaData$java_util_Date_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_util_Date_PersistenceDelegate, name, initialize, &_MetaData$java_util_Date_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_util_Date_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_util_Date_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java