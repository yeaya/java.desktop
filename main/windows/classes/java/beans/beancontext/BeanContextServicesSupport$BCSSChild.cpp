#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild.h>

#include <java/beans/beancontext/BeanContextServiceProvider.h>
#include <java/beans/beancontext/BeanContextServiceRevokedEvent.h>
#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>
#include <java/beans/beancontext/BeanContextServices.h>
#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef.h>
#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceRef.h>
#include <java/beans/beancontext/BeanContextServicesSupport.h>
#include <java/beans/beancontext/BeanContextSupport$BCSChild.h>
#include <java/beans/beancontext/BeanContextSupport.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $BeanContextServiceProvider = ::java::beans::beancontext::BeanContextServiceProvider;
using $BeanContextServiceRevokedEvent = ::java::beans::beancontext::BeanContextServiceRevokedEvent;
using $BeanContextServiceRevokedListener = ::java::beans::beancontext::BeanContextServiceRevokedListener;
using $BeanContextServices = ::java::beans::beancontext::BeanContextServices;
using $BeanContextServicesSupport = ::java::beans::beancontext::BeanContextServicesSupport;
using $BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef = ::java::beans::beancontext::BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef;
using $BeanContextServicesSupport$BCSSChild$BCSSCServiceRef = ::java::beans::beancontext::BeanContextServicesSupport$BCSSChild$BCSSCServiceRef;
using $BeanContextSupport = ::java::beans::beancontext::BeanContextSupport;
using $BeanContextSupport$BCSChild = ::java::beans::beancontext::BeanContextSupport$BCSChild;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextServicesSupport$BCSSChild_FieldInfo_[] = {
	{"this$0", "Ljava/beans/beancontext/BeanContextServicesSupport;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextServicesSupport$BCSSChild, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextServicesSupport$BCSSChild, serialVersionUID)},
	{"serviceClasses", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef;>;", $PRIVATE | $TRANSIENT, $field(BeanContextServicesSupport$BCSSChild, serviceClasses)},
	{"serviceRequestors", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Object;Ljava/util/Map<Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceRef;>;>;", $PRIVATE | $TRANSIENT, $field(BeanContextServicesSupport$BCSSChild, serviceRequestors)},
	{}
};

$MethodInfo _BeanContextServicesSupport$BCSSChild_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContextServicesSupport;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(BeanContextServicesSupport$BCSSChild::*)($BeanContextServicesSupport*,Object$*,Object$*)>(&BeanContextServicesSupport$BCSSChild::init$))},
	{"cleanupReferences", "()V", nullptr, 0},
	{"releaseService", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $SYNCHRONIZED},
	{"revokeAllDelegatedServicesNow", "()V", nullptr, 0},
	{"revokeService", "(Ljava/lang/Class;ZZ)V", "(Ljava/lang/Class<*>;ZZ)V", $SYNCHRONIZED},
	{"usingService", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;ZLjava/beans/beancontext/BeanContextServiceRevokedListener;)V", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;ZLjava/beans/beancontext/BeanContextServiceRevokedListener;)V", $SYNCHRONIZED, nullptr, "java.util.TooManyListenersException,java.lang.UnsupportedOperationException"},
	{}
};

$InnerClassInfo _BeanContextServicesSupport$BCSSChild_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSChild", "java.beans.beancontext.BeanContextServicesSupport", "BCSSChild", $PROTECTED},
	{"java.beans.beancontext.BeanContextSupport$BCSChild", "java.beans.beancontext.BeanContextSupport", "BCSChild", $PROTECTED},
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceRef", "java.beans.beancontext.BeanContextServicesSupport$BCSSChild", "BCSSCServiceRef", 0},
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef", "java.beans.beancontext.BeanContextServicesSupport$BCSSChild", "BCSSCServiceClassRef", 0},
	{}
};

$ClassInfo _BeanContextServicesSupport$BCSSChild_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextServicesSupport$BCSSChild",
	"java.beans.beancontext.BeanContextSupport$BCSChild",
	nullptr,
	_BeanContextServicesSupport$BCSSChild_FieldInfo_,
	_BeanContextServicesSupport$BCSSChild_MethodInfo_,
	nullptr,
	nullptr,
	_BeanContextServicesSupport$BCSSChild_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextServicesSupport"
};

$Object* allocate$BeanContextServicesSupport$BCSSChild($Class* clazz) {
	return $of($alloc(BeanContextServicesSupport$BCSSChild));
}

void BeanContextServicesSupport$BCSSChild::init$($BeanContextServicesSupport* this$0, Object$* bcc, Object$* peer) {
	$set(this, this$0, this$0);
	$BeanContextSupport$BCSChild::init$(this$0, bcc, peer);
}

void BeanContextServicesSupport$BCSSChild::usingService(Object$* requestor, Object$* service, $Class* serviceClass, $BeanContextServiceProvider* bcsp, bool isDelegated, $BeanContextServiceRevokedListener* bcsrl) {
	$synchronized(this) {
		$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, serviceClassRef, nullptr);
		if (this->serviceClasses == nullptr) {
			$set(this, serviceClasses, $new($HashMap, 1));
		} else {
			$assign(serviceClassRef, $cast($BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, $nc(this->serviceClasses)->get(serviceClass)));
		}
		if (serviceClassRef == nullptr) {
			$assign(serviceClassRef, $new($BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, this, serviceClass, bcsp, isDelegated));
			$nc(this->serviceClasses)->put(serviceClass, serviceClassRef);
		} else {
			$nc(serviceClassRef)->verifyAndMaybeSetProvider(bcsp, isDelegated);
			serviceClassRef->verifyRequestor(requestor, bcsrl);
		}
		$nc(serviceClassRef)->addRequestor(requestor, bcsrl);
		serviceClassRef->addRef(isDelegated);
		$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, serviceRef, nullptr);
		$var($Map, services, nullptr);
		if (this->serviceRequestors == nullptr) {
			$set(this, serviceRequestors, $new($HashMap, 1));
		} else {
			$assign(services, $cast($Map, $nc(this->serviceRequestors)->get(requestor)));
		}
		if (services == nullptr) {
			$assign(services, $new($HashMap, 1));
			$nc(this->serviceRequestors)->put(requestor, services);
		} else {
			$assign(serviceRef, $cast($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, $nc(services)->get(service)));
		}
		if (serviceRef == nullptr) {
			$assign(serviceRef, $new($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, this, serviceClassRef, isDelegated));
			$nc(services)->put(service, serviceRef);
		} else {
			$nc(serviceRef)->addRef();
		}
	}
}

void BeanContextServicesSupport$BCSSChild::releaseService(Object$* requestor, Object$* service) {
	$synchronized(this) {
		if (this->serviceRequestors == nullptr) {
			return;
		}
		$var($Map, services, $cast($Map, $nc(this->serviceRequestors)->get(requestor)));
		if (services == nullptr) {
			return;
		}
		$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, serviceRef, $cast($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, $nc(services)->get(service)));
		if (serviceRef == nullptr) {
			return;
		}
		$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, serviceClassRef, $nc(serviceRef)->getServiceClassRef());
		bool isDelegated = serviceRef->isDelegated();
		$var($BeanContextServiceProvider, bcsp, isDelegated ? $nc(serviceClassRef)->getDelegateProvider() : serviceClassRef->getServiceProvider());
		$nc(bcsp)->releaseService($(this->this$0->getBeanContextServicesPeer()), requestor, service);
		serviceClassRef->releaseRef(isDelegated);
		serviceClassRef->removeRequestor(requestor);
		if (serviceRef->release() == 0) {
			services->remove(service);
			if (services->isEmpty()) {
				$nc(this->serviceRequestors)->remove(requestor);
				serviceClassRef->removeRequestor(requestor);
			}
			if ($nc(this->serviceRequestors)->isEmpty()) {
				$set(this, serviceRequestors, nullptr);
			}
			if (serviceClassRef->isEmpty()) {
				$nc(this->serviceClasses)->remove(serviceClassRef->getServiceClass());
			}
			if ($nc(this->serviceClasses)->isEmpty()) {
				$set(this, serviceClasses, nullptr);
			}
		}
	}
}

void BeanContextServicesSupport$BCSSChild::revokeService($Class* serviceClass, bool isDelegated, bool revokeNow) {
	$synchronized(this) {
		if (this->serviceClasses == nullptr) {
			return;
		}
		$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, serviceClassRef, $cast($BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, $nc(this->serviceClasses)->get(serviceClass)));
		if (serviceClassRef == nullptr) {
			return;
		}
		$var($Iterator, i, $nc(serviceClassRef)->cloneOfEntries());
		$var($BeanContextServiceRevokedEvent, bcsre, $new($BeanContextServiceRevokedEvent, $(this->this$0->getBeanContextServicesPeer()), serviceClass, revokeNow));
		bool noMoreRefs = false;
		while ($nc(i)->hasNext() && this->serviceRequestors != nullptr) {
			$var($Map$Entry, entry, $cast($Map$Entry, i->next()));
			$var($BeanContextServiceRevokedListener, listener, $cast($BeanContextServiceRevokedListener, $nc(entry)->getValue()));
			if (revokeNow) {
				$var($Object, requestor, entry->getKey());
				$var($Map, services, $cast($Map, $nc(this->serviceRequestors)->get(requestor)));
				if (services != nullptr) {
					$var($Iterator, i1, $nc($(services->entrySet()))->iterator());
					while ($nc(i1)->hasNext()) {
						$var($Map$Entry, tmp, $cast($Map$Entry, i1->next()));
						$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, serviceRef, $cast($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, $nc(tmp)->getValue()));
						bool var$0 = $nc($of($($nc(serviceRef)->getServiceClassRef())))->equals(serviceClassRef);
						if (var$0 && isDelegated == serviceRef->isDelegated()) {
							i1->remove();
						}
					}
					if (noMoreRefs = services->isEmpty()) {
						$nc(this->serviceRequestors)->remove(requestor);
					}
				}
				if (noMoreRefs) {
					serviceClassRef->removeRequestor(requestor);
				}
			}
			$nc(listener)->serviceRevoked(bcsre);
		}
		if (revokeNow && this->serviceClasses != nullptr) {
			if (serviceClassRef->isEmpty()) {
				$nc(this->serviceClasses)->remove(serviceClass);
			}
			if ($nc(this->serviceClasses)->isEmpty()) {
				$set(this, serviceClasses, nullptr);
			}
		}
		if (this->serviceRequestors != nullptr && $nc(this->serviceRequestors)->isEmpty()) {
			$set(this, serviceRequestors, nullptr);
		}
	}
}

void BeanContextServicesSupport$BCSSChild::cleanupReferences() {
	if (this->serviceRequestors == nullptr) {
		return;
	}
	$var($Iterator, requestors, $nc($($nc(this->serviceRequestors)->entrySet()))->iterator());
	while ($nc(requestors)->hasNext()) {
		$var($Map$Entry, tmp, $cast($Map$Entry, requestors->next()));
		$var($Object, requestor, $nc(tmp)->getKey());
		$var($Iterator, services, $nc($($nc(($cast($Map, $(tmp->getValue()))))->entrySet()))->iterator());
		requestors->remove();
		while ($nc(services)->hasNext()) {
			$var($Map$Entry, entry, $cast($Map$Entry, services->next()));
			$var($Object, service, $nc(entry)->getKey());
			$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, sref, $cast($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, entry->getValue()));
			$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, scref, $nc(sref)->getServiceClassRef());
			$var($BeanContextServiceProvider, bcsp, sref->isDelegated() ? $nc(scref)->getDelegateProvider() : scref->getServiceProvider());
			scref->removeRequestor(requestor);
			services->remove();
			while (sref->release() >= 0) {
				$nc(bcsp)->releaseService($(this->this$0->getBeanContextServicesPeer()), requestor, service);
			}
		}
	}
	$set(this, serviceRequestors, nullptr);
	$set(this, serviceClasses, nullptr);
}

void BeanContextServicesSupport$BCSSChild::revokeAllDelegatedServicesNow() {
	if (this->serviceClasses == nullptr) {
		return;
	}
	{
		$var($Iterator, i$, $$new($HashSet, $($nc(this->serviceClasses)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, serviceClassRef, $cast($BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, i$->next()));
			{
				if (!$nc(serviceClassRef)->isDelegated()) {
					continue;
				}
				$var($Iterator, i, $nc(serviceClassRef)->cloneOfEntries());
				$var($BeanContextServices, var$0, this->this$0->getBeanContextServicesPeer());
				$var($BeanContextServiceRevokedEvent, bcsre, $new($BeanContextServiceRevokedEvent, var$0, serviceClassRef->getServiceClass(), true));
				bool noMoreRefs = false;
				while ($nc(i)->hasNext()) {
					$var($Map$Entry, entry, $cast($Map$Entry, i->next()));
					$var($BeanContextServiceRevokedListener, listener, $cast($BeanContextServiceRevokedListener, $nc(entry)->getValue()));
					$var($Object, requestor, entry->getKey());
					$var($Map, services, $cast($Map, $nc(this->serviceRequestors)->get(requestor)));
					if (services != nullptr) {
						$var($Iterator, i1, $nc($(services->entrySet()))->iterator());
						while ($nc(i1)->hasNext()) {
							$var($Map$Entry, tmp, $cast($Map$Entry, i1->next()));
							$var($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, serviceRef, $cast($BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, $nc(tmp)->getValue()));
							bool var$1 = $nc($of($($nc(serviceRef)->getServiceClassRef())))->equals(serviceClassRef);
							if (var$1 && serviceRef->isDelegated()) {
								i1->remove();
							}
						}
						if (noMoreRefs = services->isEmpty()) {
							$nc(this->serviceRequestors)->remove(requestor);
						}
					}
					if (noMoreRefs) {
						serviceClassRef->removeRequestor(requestor);
					}
					$nc(listener)->serviceRevoked(bcsre);
					if (serviceClassRef->isEmpty()) {
						$nc(this->serviceClasses)->remove(serviceClassRef->getServiceClass());
					}
				}
			}
		}
	}
	if ($nc(this->serviceClasses)->isEmpty()) {
		$set(this, serviceClasses, nullptr);
	}
	if (this->serviceRequestors != nullptr && $nc(this->serviceRequestors)->isEmpty()) {
		$set(this, serviceRequestors, nullptr);
	}
}

BeanContextServicesSupport$BCSSChild::BeanContextServicesSupport$BCSSChild() {
}

$Class* BeanContextServicesSupport$BCSSChild::load$($String* name, bool initialize) {
	$loadClass(BeanContextServicesSupport$BCSSChild, name, initialize, &_BeanContextServicesSupport$BCSSChild_ClassInfo_, allocate$BeanContextServicesSupport$BCSSChild);
	return class$;
}

$Class* BeanContextServicesSupport$BCSSChild::class$ = nullptr;

		} // beancontext
	} // beans
} // java