#include <java/beans/MetaData$NullPersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
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

$MethodInfo _MetaData$NullPersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$NullPersistenceDelegate::*)()>(&MetaData$NullPersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"writeObject", "(Ljava/lang/Object;Ljava/beans/Encoder;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetaData$NullPersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$NullPersistenceDelegate", "java.beans.MetaData", "NullPersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$NullPersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$NullPersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$NullPersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$NullPersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$NullPersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$NullPersistenceDelegate));
}

void MetaData$NullPersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

void MetaData$NullPersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
}

$Expression* MetaData$NullPersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	return nullptr;
}

void MetaData$NullPersistenceDelegate::writeObject(Object$* oldInstance, $Encoder* out) {
}

MetaData$NullPersistenceDelegate::MetaData$NullPersistenceDelegate() {
}

$Class* MetaData$NullPersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$NullPersistenceDelegate, name, initialize, &_MetaData$NullPersistenceDelegate_ClassInfo_, allocate$MetaData$NullPersistenceDelegate);
	return class$;
}

$Class* MetaData$NullPersistenceDelegate::class$ = nullptr;

	} // beans
} // java