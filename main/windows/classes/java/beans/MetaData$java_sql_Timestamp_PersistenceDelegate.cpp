#include <java/beans/MetaData$java_sql_Timestamp_PersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/MetaData$java_util_Date_PersistenceDelegate.h>
#include <java/beans/MetaData.h>
#include <java/beans/Statement.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $MetaData$java_util_Date_PersistenceDelegate = ::java::beans::MetaData$java_util_Date_PersistenceDelegate;
using $Statement = ::java::beans::Statement;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace beans {

$FieldInfo _MetaData$java_sql_Timestamp_PersistenceDelegate_FieldInfo_[] = {
	{"getNanosMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetaData$java_sql_Timestamp_PersistenceDelegate, getNanosMethod$)},
	{}
};

$MethodInfo _MetaData$java_sql_Timestamp_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_sql_Timestamp_PersistenceDelegate::*)()>(&MetaData$java_sql_Timestamp_PersistenceDelegate::init$))},
	{"getNanos", "(Ljava/lang/Object;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(Object$*)>(&MetaData$java_sql_Timestamp_PersistenceDelegate::getNanos))},
	{"getNanosMethod", "()Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Method*(*)()>(&MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_sql_Timestamp_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_sql_Timestamp_PersistenceDelegate", "java.beans.MetaData", "java_sql_Timestamp_PersistenceDelegate", $STATIC | $FINAL},
	{"java.beans.MetaData$java_util_Date_PersistenceDelegate", "java.beans.MetaData", "java_util_Date_PersistenceDelegate", $STATIC},
	{}
};

$ClassInfo _MetaData$java_sql_Timestamp_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_sql_Timestamp_PersistenceDelegate",
	"java.beans.MetaData$java_util_Date_PersistenceDelegate",
	nullptr,
	_MetaData$java_sql_Timestamp_PersistenceDelegate_FieldInfo_,
	_MetaData$java_sql_Timestamp_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_sql_Timestamp_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_sql_Timestamp_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_sql_Timestamp_PersistenceDelegate));
}

$Method* MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod$ = nullptr;

void MetaData$java_sql_Timestamp_PersistenceDelegate::init$() {
	$MetaData$java_util_Date_PersistenceDelegate::init$();
}

$Method* MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod() {
	$init(MetaData$java_sql_Timestamp_PersistenceDelegate);
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName("java.sql.Timestamp"_s, true, $($ClassLoader::getPlatformClassLoader()));
		return $nc(c)->getMethod("getNanos"_s, $$new($ClassArray, 0));
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e, $catch());
		return nullptr;
	} catch ($NoSuchMethodException&) {
		$var($NoSuchMethodException, e, $catch());
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

int32_t MetaData$java_sql_Timestamp_PersistenceDelegate::getNanos(Object$* obj) {
	$init(MetaData$java_sql_Timestamp_PersistenceDelegate);
	$beforeCallerSensitive();
	if (MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod$ == nullptr) {
		$throwNew($AssertionError, $of("Should not get here"_s));
	}
	try {
		return $nc(($cast($Integer, $($nc(MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod$)->invoke(obj, $$new($ObjectArray, 0))))))->intValue();
	} catch ($InvocationTargetException&) {
		$var($InvocationTargetException, e, $catch());
		$var($Throwable, cause, e->getCause());
		if ($instanceOf($RuntimeException, cause)) {
			$throw($cast($RuntimeException, cause));
		}
		if ($instanceOf($Error, cause)) {
			$throw($cast($Error, cause));
		}
		$throwNew($AssertionError, $of(e));
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		$throwNew($AssertionError, $of(iae));
	}
	$shouldNotReachHere();
}

void MetaData$java_sql_Timestamp_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	int32_t nanos = getNanos(oldInstance);
	if (nanos != getNanos(newInstance)) {
		$nc(out)->writeStatement($$new($Statement, oldInstance, "setNanos"_s, $$new($ObjectArray, {$($of($Integer::valueOf(nanos)))})));
	}
}

void clinit$MetaData$java_sql_Timestamp_PersistenceDelegate($Class* class$) {
	$assignStatic(MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod$, MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod());
}

MetaData$java_sql_Timestamp_PersistenceDelegate::MetaData$java_sql_Timestamp_PersistenceDelegate() {
}

$Class* MetaData$java_sql_Timestamp_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_sql_Timestamp_PersistenceDelegate, name, initialize, &_MetaData$java_sql_Timestamp_PersistenceDelegate_ClassInfo_, clinit$MetaData$java_sql_Timestamp_PersistenceDelegate, allocate$MetaData$java_sql_Timestamp_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_sql_Timestamp_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java