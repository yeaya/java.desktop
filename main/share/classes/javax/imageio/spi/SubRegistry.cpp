#include <javax/imageio/spi/SubRegistry.h>

#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <javax/imageio/spi/PartiallyOrderedSet.h>
#include <javax/imageio/spi/RegisterableService.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $PartiallyOrderedSet = ::javax::imageio::spi::PartiallyOrderedSet;
using $RegisterableService = ::javax::imageio::spi::RegisterableService;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;

namespace javax {
	namespace imageio {
		namespace spi {

class SubRegistry$$Lambda$lambda$clear$0 : public $PrivilegedAction {
	$class(SubRegistry$$Lambda$lambda$clear$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(SubRegistry* inst, $RegisterableService* rs) {
		$set(this, inst$, inst);
		$set(this, rs, rs);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$clear$0(rs));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SubRegistry$$Lambda$lambda$clear$0>());
	}
	SubRegistry* inst$ = nullptr;
	$RegisterableService* rs = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SubRegistry$$Lambda$lambda$clear$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SubRegistry$$Lambda$lambda$clear$0, inst$)},
	{"rs", "Ljavax/imageio/spi/RegisterableService;", nullptr, $PUBLIC, $field(SubRegistry$$Lambda$lambda$clear$0, rs)},
	{}
};
$MethodInfo SubRegistry$$Lambda$lambda$clear$0::methodInfos[3] = {
	{"<init>", "(Ljavax/imageio/spi/SubRegistry;Ljavax/imageio/spi/RegisterableService;)V", nullptr, $PUBLIC, $method(static_cast<void(SubRegistry$$Lambda$lambda$clear$0::*)(SubRegistry*,$RegisterableService*)>(&SubRegistry$$Lambda$lambda$clear$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SubRegistry$$Lambda$lambda$clear$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.imageio.spi.SubRegistry$$Lambda$lambda$clear$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SubRegistry$$Lambda$lambda$clear$0::load$($String* name, bool initialize) {
	$loadClass(SubRegistry$$Lambda$lambda$clear$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SubRegistry$$Lambda$lambda$clear$0::class$ = nullptr;

$FieldInfo _SubRegistry_FieldInfo_[] = {
	{"registry", "Ljavax/imageio/spi/ServiceRegistry;", nullptr, 0, $field(SubRegistry, registry)},
	{"category", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", 0, $field(SubRegistry, category)},
	{"poset", "Ljavax/imageio/spi/PartiallyOrderedSet;", "Ljavax/imageio/spi/PartiallyOrderedSet<Ljava/lang/Object;>;", $FINAL, $field(SubRegistry, poset)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Object;>;", $FINAL, $field(SubRegistry, map)},
	{"accMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/security/AccessControlContext;>;", $FINAL, $field(SubRegistry, accMap)},
	{}
};

$MethodInfo _SubRegistry_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(SubRegistry::*)($ServiceRegistry*,$Class*)>(&SubRegistry::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"deregisterServiceProvider", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"finalize", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getServiceProviderByClass", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $SYNCHRONIZED},
	{"getServiceProviders", "(Z)Ljava/util/Iterator;", "(Z)Ljava/util/Iterator<Ljava/lang/Object;>;", $PUBLIC | $SYNCHRONIZED},
	{"lambda$clear$0", "(Ljavax/imageio/spi/RegisterableService;)Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(SubRegistry::*)($RegisterableService*)>(&SubRegistry::lambda$clear$0))},
	{"registerServiceProvider", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"unsetOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _SubRegistry_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.spi.SubRegistry",
	"java.lang.Object",
	nullptr,
	_SubRegistry_FieldInfo_,
	_SubRegistry_MethodInfo_
};

$Object* allocate$SubRegistry($Class* clazz) {
	return $of($alloc(SubRegistry));
}

void SubRegistry::init$($ServiceRegistry* registry, $Class* category) {
	$set(this, poset, $new($PartiallyOrderedSet));
	$set(this, map, $new($HashMap));
	$set(this, accMap, $new($HashMap));
	$set(this, registry, registry);
	$set(this, category, category);
}

bool SubRegistry::registerServiceProvider(Object$* provider) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Object, oprovider, $nc(this->map)->get($nc($of(provider))->getClass()));
		bool present = oprovider != nullptr;
		if (present) {
			deregisterServiceProvider(oprovider);
		}
		$nc(this->map)->put($nc($of(provider))->getClass(), provider);
		$var($Object, var$0, $of($nc($of(provider))->getClass()));
		$nc(this->accMap)->put(var$0, $($AccessController::getContext()));
		$nc(this->poset)->add(provider);
		if ($instanceOf($RegisterableService, provider)) {
			$var($RegisterableService, rs, $cast($RegisterableService, provider));
			try {
				$nc(rs)->onRegistration(this->registry, this->category);
			} catch ($Throwable& t) {
				$nc($System::err)->println("Caught and handled this exception :"_s);
				t->printStackTrace();
			}
		}
		return !present;
	}
}

bool SubRegistry::deregisterServiceProvider(Object$* provider) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Object, oprovider, $nc(this->map)->get($nc($of(provider))->getClass()));
		if ($equals(provider, oprovider)) {
			$nc(this->map)->remove($nc($of(provider))->getClass());
			$nc(this->accMap)->remove($nc($of(provider))->getClass());
			$nc(this->poset)->remove(provider);
			if ($instanceOf($RegisterableService, provider)) {
				$var($RegisterableService, rs, $cast($RegisterableService, provider));
				$nc(rs)->onDeregistration(this->registry, this->category);
			}
			return true;
		}
		return false;
	}
}

bool SubRegistry::contains(Object$* provider) {
	$synchronized(this) {
		$var($Object, oprovider, $nc(this->map)->get($nc($of(provider))->getClass()));
		return $equals(oprovider, provider);
	}
}

bool SubRegistry::setOrdering(Object$* firstProvider, Object$* secondProvider) {
	$synchronized(this) {
		return $nc(this->poset)->setOrdering(firstProvider, secondProvider);
	}
}

bool SubRegistry::unsetOrdering(Object$* firstProvider, Object$* secondProvider) {
	$synchronized(this) {
		return $nc(this->poset)->unsetOrdering(firstProvider, secondProvider);
	}
}

$Iterator* SubRegistry::getServiceProviders(bool useOrdering) {
	$synchronized(this) {
		if (useOrdering) {
			return $nc(this->poset)->iterator();
		} else {
			return $nc($($nc(this->map)->values()))->iterator();
		}
	}
}

$Object* SubRegistry::getServiceProviderByClass($Class* providerClass) {
	$synchronized(this) {
		return $of($nc(this->map)->get(providerClass));
	}
}

void SubRegistry::clear() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		$var($Iterator, iter, $nc($($nc(this->map)->values()))->iterator());
		while ($nc(iter)->hasNext()) {
			$var($Object, provider, iter->next());
			iter->remove();
			if ($instanceOf($RegisterableService, provider)) {
				$var($RegisterableService, rs, $cast($RegisterableService, provider));
				$var($AccessControlContext, acc, $cast($AccessControlContext, $nc(this->accMap)->get($nc($of(provider))->getClass())));
				if (acc != nullptr || $System::getSecurityManager() == nullptr) {
					$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SubRegistry$$Lambda$lambda$clear$0, this, rs)), acc);
				}
			}
		}
		$nc(this->poset)->clear();
		$nc(this->accMap)->clear();
	}
}

void SubRegistry::finalize() {
	$synchronized(this) {
		clear();
	}
}

$Void* SubRegistry::lambda$clear$0($RegisterableService* rs) {
	$nc(rs)->onDeregistration(this->registry, this->category);
	return nullptr;
}

SubRegistry::SubRegistry() {
}

$Class* SubRegistry::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SubRegistry$$Lambda$lambda$clear$0::classInfo$.name)) {
			return SubRegistry$$Lambda$lambda$clear$0::load$(name, initialize);
		}
	}
	$loadClass(SubRegistry, name, initialize, &_SubRegistry_ClassInfo_, allocate$SubRegistry);
	return class$;
}

$Class* SubRegistry::class$ = nullptr;

		} // spi
	} // imageio
} // javax