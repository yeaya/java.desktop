#include <java/beans/MetaData$PrimitivePersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$PrimitivePersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$PrimitivePersistenceDelegate::*)()>(&MetaData$PrimitivePersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$PrimitivePersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$PrimitivePersistenceDelegate", "java.beans.MetaData", "PrimitivePersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$PrimitivePersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$PrimitivePersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$PrimitivePersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$PrimitivePersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$PrimitivePersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$PrimitivePersistenceDelegate));
}

void MetaData$PrimitivePersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$PrimitivePersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$PrimitivePersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, oldInstance);
	$var($Object, var$1, $of($nc($of(oldInstance))->getClass()));
	$var($String, var$2, "new"_s);
	return $new($Expression, var$0, var$1, var$2, $$new($ObjectArray, {$($of($of(oldInstance)->toString()))}));
}

MetaData$PrimitivePersistenceDelegate::MetaData$PrimitivePersistenceDelegate() {
}

$Class* MetaData$PrimitivePersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$PrimitivePersistenceDelegate, name, initialize, &_MetaData$PrimitivePersistenceDelegate_ClassInfo_, allocate$MetaData$PrimitivePersistenceDelegate);
	return class$;
}

$Class* MetaData$PrimitivePersistenceDelegate::class$ = nullptr;

	} // beans
} // java