#include <java/beans/MetaData$java_util_Collections$EmptyList_PersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData$java_util_Collections.h>
#include <java/util/Collections.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData$java_util_Collections = ::java::beans::MetaData$java_util_Collections;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_util_Collections$EmptyList_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_util_Collections$EmptyList_PersistenceDelegate::*)()>(&MetaData$java_util_Collections$EmptyList_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_util_Collections$EmptyList_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_util_Collections", "java.beans.MetaData", "java_util_Collections", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.beans.MetaData$java_util_Collections$EmptyList_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "EmptyList_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_util_Collections$EmptyList_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_util_Collections$EmptyList_PersistenceDelegate",
	"java.beans.MetaData$java_util_Collections",
	nullptr,
	nullptr,
	_MetaData$java_util_Collections$EmptyList_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_util_Collections$EmptyList_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_util_Collections$EmptyList_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_util_Collections$EmptyList_PersistenceDelegate));
}

void MetaData$java_util_Collections$EmptyList_PersistenceDelegate::init$() {
	$MetaData$java_util_Collections::init$();
}

$Expression* MetaData$java_util_Collections$EmptyList_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$load($Collections);
	return $new($Expression, oldInstance, $Collections::class$, "emptyList"_s, nullptr);
}

MetaData$java_util_Collections$EmptyList_PersistenceDelegate::MetaData$java_util_Collections$EmptyList_PersistenceDelegate() {
}

$Class* MetaData$java_util_Collections$EmptyList_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_util_Collections$EmptyList_PersistenceDelegate, name, initialize, &_MetaData$java_util_Collections$EmptyList_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_util_Collections$EmptyList_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_util_Collections$EmptyList_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java