#include <java/beans/MetaData$EnumPersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
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
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$EnumPersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$EnumPersistenceDelegate::*)()>(&MetaData$EnumPersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$EnumPersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$EnumPersistenceDelegate", "java.beans.MetaData", "EnumPersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$EnumPersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$EnumPersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$EnumPersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$EnumPersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$EnumPersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$EnumPersistenceDelegate));
}

void MetaData$EnumPersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$EnumPersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $equals(oldInstance, newInstance);
}

$Expression* MetaData$EnumPersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$var($Enum, e, $cast($Enum, oldInstance));
	$load($Enum);
	return $new($Expression, e, $Enum::class$, "valueOf"_s, $$new($ObjectArray, {
		$of($nc(e)->getDeclaringClass()),
		$($of(e->name()))
	}));
}

MetaData$EnumPersistenceDelegate::MetaData$EnumPersistenceDelegate() {
}

$Class* MetaData$EnumPersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$EnumPersistenceDelegate, name, initialize, &_MetaData$EnumPersistenceDelegate_ClassInfo_, allocate$MetaData$EnumPersistenceDelegate);
	return class$;
}

$Class* MetaData$EnumPersistenceDelegate::class$ = nullptr;

	} // beans
} // java