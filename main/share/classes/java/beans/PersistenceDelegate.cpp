#include <java/beans/PersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PersistenceDelegate::*)()>(&PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED | $ABSTRACT},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{"writeObject", "(Ljava/lang/Object;Ljava/beans/Encoder;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PersistenceDelegate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.beans.PersistenceDelegate",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PersistenceDelegate_MethodInfo_
};

$Object* allocate$PersistenceDelegate($Class* clazz) {
	return $of($alloc(PersistenceDelegate));
}

void PersistenceDelegate::init$() {
}

void PersistenceDelegate::writeObject(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($Object, newInstance, $nc(out)->get(oldInstance));
	if (!mutatesTo(oldInstance, newInstance)) {
		out->remove(oldInstance);
		out->writeExpression($(instantiate(oldInstance, out)));
	} else {
		initialize($nc($of(oldInstance))->getClass(), oldInstance, newInstance, out);
	}
}

bool PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	bool var$0 = newInstance != nullptr && oldInstance != nullptr;
	if (var$0) {
		var$0 = $of(oldInstance)->getClass() == $of(newInstance)->getClass();
	}
	return (var$0);
}

void PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$Class* superType = $nc(type)->getSuperclass();
	$var(PersistenceDelegate, info, $nc(out)->getPersistenceDelegate(superType));
	$nc(info)->initialize(superType, oldInstance, newInstance, out);
}

PersistenceDelegate::PersistenceDelegate() {
}

$Class* PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(PersistenceDelegate, name, initialize, &_PersistenceDelegate_ClassInfo_, allocate$PersistenceDelegate);
	return class$;
}

$Class* PersistenceDelegate::class$ = nullptr;

	} // beans
} // java