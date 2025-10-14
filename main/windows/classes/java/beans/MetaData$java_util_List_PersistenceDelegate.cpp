#include <java/beans/MetaData$java_util_List_PersistenceDelegate.h>

#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/ExceptionListener.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ExceptionListener = ::java::beans::ExceptionListener;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_util_List_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_util_List_PersistenceDelegate::*)()>(&MetaData$java_util_List_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_util_List_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_util_List_PersistenceDelegate", "java.beans.MetaData", "java_util_List_PersistenceDelegate", $STATIC},
	{}
};

$ClassInfo _MetaData$java_util_List_PersistenceDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.MetaData$java_util_List_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_util_List_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_util_List_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_util_List_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_util_List_PersistenceDelegate));
}

void MetaData$java_util_List_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_util_List_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$var($List, oldO, $cast($List, oldInstance));
	$var($List, newO, $cast($List, newInstance));
	int32_t oldSize = $nc(oldO)->size();
	int32_t newSize = (newO == nullptr) ? 0 : $nc(newO)->size();
	if (oldSize < newSize) {
		invokeStatement(oldInstance, "clear"_s, $$new($ObjectArray, 0), out);
		newSize = 0;
	}
	for (int32_t i = 0; i < newSize; ++i) {
		$var($Object, index, $Integer::valueOf(i));
		$var($Expression, oldGetExp, $new($Expression, oldInstance, "get"_s, $$new($ObjectArray, {index})));
		$var($Expression, newGetExp, $new($Expression, newInstance, "get"_s, $$new($ObjectArray, {index})));
		try {
			$var($Object, oldValue, oldGetExp->getValue());
			$var($Object, newValue, newGetExp->getValue());
			$nc(out)->writeExpression(oldGetExp);
			if (!$Objects::equals(newValue, $(out->get(oldValue)))) {
				invokeStatement(oldInstance, "set"_s, $$new($ObjectArray, {
					index,
					oldValue
				}), out);
			}
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$nc($($nc(out)->getExceptionListener()))->exceptionThrown(e);
		}
	}
	for (int32_t i = newSize; i < oldSize; ++i) {
		invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {$(oldO->get(i))}), out);
	}
}

MetaData$java_util_List_PersistenceDelegate::MetaData$java_util_List_PersistenceDelegate() {
}

$Class* MetaData$java_util_List_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_util_List_PersistenceDelegate, name, initialize, &_MetaData$java_util_List_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_util_List_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_util_List_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java