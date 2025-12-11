#include <java/beans/MetaData$java_util_Collection_PersistenceDelegate.h>

#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_util_Collection_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_util_Collection_PersistenceDelegate::*)()>(&MetaData$java_util_Collection_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_util_Collection_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_util_Collection_PersistenceDelegate", "java.beans.MetaData", "java_util_Collection_PersistenceDelegate", $STATIC},
	{}
};

$ClassInfo _MetaData$java_util_Collection_PersistenceDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.MetaData$java_util_Collection_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_util_Collection_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_util_Collection_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_util_Collection_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_util_Collection_PersistenceDelegate));
}

void MetaData$java_util_Collection_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_util_Collection_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($Collection, oldO, $cast($Collection, oldInstance));
	$var($Collection, newO, $cast($Collection, newInstance));
	if ($nc(newO)->size() != 0) {
		invokeStatement(oldInstance, "clear"_s, $$new($ObjectArray, 0), out);
	}
	{
		$var($Iterator, i, $nc(oldO)->iterator());
		for (; $nc(i)->hasNext();) {
			invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {$(i->next())}), out);
		}
	}
}

MetaData$java_util_Collection_PersistenceDelegate::MetaData$java_util_Collection_PersistenceDelegate() {
}

$Class* MetaData$java_util_Collection_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_util_Collection_PersistenceDelegate, name, initialize, &_MetaData$java_util_Collection_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_util_Collection_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_util_Collection_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java