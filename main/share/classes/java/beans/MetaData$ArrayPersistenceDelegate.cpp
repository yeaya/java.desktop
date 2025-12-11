#include <java/beans/MetaData$ArrayPersistenceDelegate.h>

#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/ExceptionListener.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/reflect/Array.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ExceptionListener = ::java::beans::ExceptionListener;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $Objects = ::java::util::Objects;

namespace java {
	namespace beans {

$MethodInfo _MetaData$ArrayPersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$ArrayPersistenceDelegate::*)()>(&MetaData$ArrayPersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$ArrayPersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$ArrayPersistenceDelegate", "java.beans.MetaData", "ArrayPersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$ArrayPersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$ArrayPersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$ArrayPersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$ArrayPersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$ArrayPersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$ArrayPersistenceDelegate));
}

void MetaData$ArrayPersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$ArrayPersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	bool var$1 = newInstance != nullptr;
	if (var$1) {
		var$1 = $nc($of(oldInstance))->getClass() == $of(newInstance)->getClass();
	}
	bool var$0 = var$1;
	if (var$0) {
		int32_t var$2 = $1Array::getLength(oldInstance);
		var$0 = var$2 == $1Array::getLength(newInstance);
	}
	return (var$0);
}

$Expression* MetaData$ArrayPersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$Class* oldClass = $nc($of(oldInstance))->getClass();
	$load($1Array);
	return $new($Expression, oldInstance, $1Array::class$, "newInstance"_s, $$new($ObjectArray, {
		$of($nc(oldClass)->getComponentType()),
		$($of($Integer::valueOf($1Array::getLength(oldInstance))))
	}));
}

void MetaData$ArrayPersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	int32_t n = $1Array::getLength(oldInstance);
	for (int32_t i = 0; i < n; ++i) {
		$var($Object, index, $Integer::valueOf(i));
		$var($Expression, oldGetExp, $new($Expression, oldInstance, "get"_s, $$new($ObjectArray, {index})));
		$var($Expression, newGetExp, $new($Expression, newInstance, "get"_s, $$new($ObjectArray, {index})));
		try {
			$var($Object, oldValue, oldGetExp->getValue());
			$var($Object, newValue, newGetExp->getValue());
			$nc(out)->writeExpression(oldGetExp);
			if (!$Objects::equals(newValue, $(out->get(oldValue)))) {
				$DefaultPersistenceDelegate::invokeStatement(oldInstance, "set"_s, $$new($ObjectArray, {
					index,
					oldValue
				}), out);
			}
		} catch ($Exception& e) {
			$nc($($nc(out)->getExceptionListener()))->exceptionThrown(e);
		}
	}
}

MetaData$ArrayPersistenceDelegate::MetaData$ArrayPersistenceDelegate() {
}

$Class* MetaData$ArrayPersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$ArrayPersistenceDelegate, name, initialize, &_MetaData$ArrayPersistenceDelegate_ClassInfo_, allocate$MetaData$ArrayPersistenceDelegate);
	return class$;
}

$Class* MetaData$ArrayPersistenceDelegate::class$ = nullptr;

	} // beans
} // java