#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef.h>

#include <java/beans/beancontext/BeanContextServiceProvider.h>
#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>
#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/TooManyListenersException.h>
#include <jcpp.h>

using $BeanContextServiceProvider = ::java::beans::beancontext::BeanContextServiceProvider;
using $BeanContextServiceRevokedListener = ::java::beans::beancontext::BeanContextServiceRevokedListener;
using $BeanContextServicesSupport$BCSSChild = ::java::beans::beancontext::BeanContextServicesSupport$BCSSChild;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $TooManyListenersException = ::java::util::TooManyListenersException;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_FieldInfo_[] = {
	{"this$1", "Ljava/beans/beancontext/BeanContextServicesSupport$BCSSChild;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, this$1)},
	{"serviceClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", 0, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, serviceClass)},
	{"serviceProvider", "Ljava/beans/beancontext/BeanContextServiceProvider;", nullptr, 0, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, serviceProvider)},
	{"serviceRefs", "I", nullptr, 0, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, serviceRefs)},
	{"delegateProvider", "Ljava/beans/beancontext/BeanContextServiceProvider;", nullptr, 0, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, delegateProvider)},
	{"delegateRefs", "I", nullptr, 0, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, delegateRefs)},
	{"requestors", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServiceRevokedListener;>;", 0, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, requestors)},
	{}
};

$MethodInfo _BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContextServicesSupport$BCSSChild;Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;Z)V", "(Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;Z)V", 0, $method(static_cast<void(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::*)($BeanContextServicesSupport$BCSSChild*,$Class*,$BeanContextServiceProvider*,bool)>(&BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::init$))},
	{"addRef", "(Z)V", nullptr, 0},
	{"addRequestor", "(Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServiceRevokedListener;)V", nullptr, 0, nullptr, "java.util.TooManyListenersException"},
	{"cloneOfEntries", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServiceRevokedListener;>;>;", 0},
	{"entries", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServiceRevokedListener;>;>;", 0},
	{"getDelegateProvider", "()Ljava/beans/beancontext/BeanContextServiceProvider;", nullptr, 0},
	{"getDelegateRefs", "()I", nullptr, 0},
	{"getRefs", "()I", nullptr, 0},
	{"getServiceClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0},
	{"getServiceProvider", "()Ljava/beans/beancontext/BeanContextServiceProvider;", nullptr, 0},
	{"getServiceRefs", "()I", nullptr, 0},
	{"isDelegated", "()Z", nullptr, 0},
	{"isEmpty", "()Z", nullptr, 0},
	{"releaseRef", "(Z)V", nullptr, 0},
	{"removeRequestor", "(Ljava/lang/Object;)V", nullptr, 0},
	{"verifyAndMaybeSetProvider", "(Ljava/beans/beancontext/BeanContextServiceProvider;Z)V", nullptr, 0},
	{"verifyRequestor", "(Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServiceRevokedListener;)V", nullptr, 0, nullptr, "java.util.TooManyListenersException"},
	{}
};

$InnerClassInfo _BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSChild", "java.beans.beancontext.BeanContextServicesSupport", "BCSSChild", $PROTECTED},
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef", "java.beans.beancontext.BeanContextServicesSupport$BCSSChild", "BCSSCServiceClassRef", 0},
	{}
};

$ClassInfo _BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef",
	"java.lang.Object",
	nullptr,
	_BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_FieldInfo_,
	_BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_MethodInfo_,
	nullptr,
	nullptr,
	_BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextServicesSupport"
};

$Object* allocate$BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef($Class* clazz) {
	return $of($alloc(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef));
}

void BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::init$($BeanContextServicesSupport$BCSSChild* this$1, $Class* sc, $BeanContextServiceProvider* bcsp, bool delegated) {
	$set(this, this$1, this$1);
	$set(this, requestors, $new($HashMap, 1));
	$set(this, serviceClass, sc);
	if (delegated) {
		$set(this, delegateProvider, bcsp);
	} else {
		$set(this, serviceProvider, bcsp);
	}
}

void BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::addRequestor(Object$* requestor, $BeanContextServiceRevokedListener* bcsrl) {
	$var($BeanContextServiceRevokedListener, cbcsrl, $cast($BeanContextServiceRevokedListener, $nc(this->requestors)->get(requestor)));
	if (cbcsrl != nullptr && !$of(cbcsrl)->equals(bcsrl)) {
		$throwNew($TooManyListenersException);
	}
	$nc(this->requestors)->put(requestor, bcsrl);
}

void BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::removeRequestor(Object$* requestor) {
	$nc(this->requestors)->remove(requestor);
}

void BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::verifyRequestor(Object$* requestor, $BeanContextServiceRevokedListener* bcsrl) {
	$var($BeanContextServiceRevokedListener, cbcsrl, $cast($BeanContextServiceRevokedListener, $nc(this->requestors)->get(requestor)));
	if (cbcsrl != nullptr && !$of(cbcsrl)->equals(bcsrl)) {
		$throwNew($TooManyListenersException);
	}
}

void BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::verifyAndMaybeSetProvider($BeanContextServiceProvider* bcsp, bool isDelegated) {
	$var($BeanContextServiceProvider, current, nullptr);
	if (isDelegated) {
		$assign(current, this->delegateProvider);
		if (current == nullptr || bcsp == nullptr) {
			$set(this, delegateProvider, bcsp);
			return;
		}
	} else {
		$assign(current, this->serviceProvider);
		if (current == nullptr || bcsp == nullptr) {
			$set(this, serviceProvider, bcsp);
			return;
		}
	}
	if (!$nc($of(current))->equals(bcsp)) {
		$throwNew($UnsupportedOperationException, "existing service reference obtained from different BeanContextServiceProvider not supported"_s);
	}
}

$Iterator* BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::cloneOfEntries() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(($cast($HashMap, $($nc(this->requestors)->clone()))))->entrySet()))->iterator();
}

$Iterator* BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::entries() {
	return $nc($($nc(this->requestors)->entrySet()))->iterator();
}

bool BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::isEmpty() {
	return $nc(this->requestors)->isEmpty();
}

$Class* BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::getServiceClass() {
	return this->serviceClass;
}

$BeanContextServiceProvider* BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::getServiceProvider() {
	return this->serviceProvider;
}

$BeanContextServiceProvider* BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::getDelegateProvider() {
	return this->delegateProvider;
}

bool BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::isDelegated() {
	return this->delegateProvider != nullptr;
}

void BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::addRef(bool delegated) {
	if (delegated) {
		++this->delegateRefs;
	} else {
		++this->serviceRefs;
	}
}

void BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::releaseRef(bool delegated) {
	if (delegated) {
		if (--this->delegateRefs == 0) {
			$set(this, delegateProvider, nullptr);
		}
	} else if (--this->serviceRefs <= 0) {
		$set(this, serviceProvider, nullptr);
	}
}

int32_t BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::getRefs() {
	return this->serviceRefs + this->delegateRefs;
}

int32_t BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::getDelegateRefs() {
	return this->delegateRefs;
}

int32_t BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::getServiceRefs() {
	return this->serviceRefs;
}

BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef() {
}

$Class* BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::load$($String* name, bool initialize) {
	$loadClass(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, name, initialize, &_BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_ClassInfo_, allocate$BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef);
	return class$;
}

$Class* BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef::class$ = nullptr;

		} // beancontext
	} // beans
} // java