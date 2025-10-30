#include <java/beans/MetaData$ProxyPersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/EventHandler.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $EventHandler = ::java::beans::EventHandler;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;
using $Vector = ::java::util::Vector;

namespace java {
	namespace beans {

$MethodInfo _MetaData$ProxyPersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$ProxyPersistenceDelegate::*)()>(&MetaData$ProxyPersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$ProxyPersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$ProxyPersistenceDelegate", "java.beans.MetaData", "ProxyPersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$ProxyPersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$ProxyPersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$ProxyPersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$ProxyPersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$ProxyPersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$ProxyPersistenceDelegate));
}

void MetaData$ProxyPersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

$Expression* MetaData$ProxyPersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* type = $nc($of(oldInstance))->getClass();
	$var($Proxy, p, $cast($Proxy, oldInstance));
	$var($InvocationHandler, ih, $Proxy::getInvocationHandler(p));
	if ($instanceOf($EventHandler, ih)) {
		$var($EventHandler, eh, $cast($EventHandler, ih));
		$var($Vector, args, $new($Vector));
		args->add($($nc(type)->getInterfaces())->get(0));
		args->add($($nc(eh)->getTarget()));
		args->add($($nc(eh)->getAction()));
		if ($nc(eh)->getEventPropertyName() != nullptr) {
			args->add($(eh->getEventPropertyName()));
		}
		if ($nc(eh)->getListenerMethodName() != nullptr) {
			args->setSize(4);
			args->add($(eh->getListenerMethodName()));
		}
		return $new($Expression, oldInstance, $EventHandler::class$, "create"_s, $(args->toArray()));
	}
	return $new($Expression, oldInstance, $Proxy::class$, "newProxyInstance"_s, $$new($ObjectArray, {
		$($of($nc(type)->getClassLoader())),
		$($of(type->getInterfaces())),
		$of(ih)
	}));
}

MetaData$ProxyPersistenceDelegate::MetaData$ProxyPersistenceDelegate() {
}

$Class* MetaData$ProxyPersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$ProxyPersistenceDelegate, name, initialize, &_MetaData$ProxyPersistenceDelegate_ClassInfo_, allocate$MetaData$ProxyPersistenceDelegate);
	return class$;
}

$Class* MetaData$ProxyPersistenceDelegate::class$ = nullptr;

	} // beans
} // java