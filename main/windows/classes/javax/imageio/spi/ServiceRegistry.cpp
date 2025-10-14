#include <javax/imageio/spi/ServiceRegistry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <javax/imageio/spi/FilterIterator.h>
#include <javax/imageio/spi/ImageInputStreamSpi.h>
#include <javax/imageio/spi/ImageOutputStreamSpi.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ImageTranscoderSpi.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/spi/ServiceRegistry$Filter.h>
#include <javax/imageio/spi/SubRegistry.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $FilterIterator = ::javax::imageio::spi::FilterIterator;
using $ImageInputStreamSpi = ::javax::imageio::spi::ImageInputStreamSpi;
using $ImageOutputStreamSpi = ::javax::imageio::spi::ImageOutputStreamSpi;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageTranscoderSpi = ::javax::imageio::spi::ImageTranscoderSpi;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ServiceRegistry$Filter = ::javax::imageio::spi::ServiceRegistry$Filter;
using $SubRegistry = ::javax::imageio::spi::SubRegistry;

namespace javax {
	namespace imageio {
		namespace spi {

$NamedAttribute ServiceRegistry_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _ServiceRegistry_MethodAnnotations_finalize7[] = {
	{"Ljava/lang/Deprecated;", ServiceRegistry_Attribute_var$0},
	{}
};

$FieldInfo _ServiceRegistry_FieldInfo_[] = {
	{"categoryMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljavax/imageio/spi/SubRegistry;>;", $PRIVATE, $field(ServiceRegistry, categoryMap)},
	{}
};

$MethodInfo _ServiceRegistry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljava/lang/Class<*>;>;)V", $PUBLIC, $method(static_cast<void(ServiceRegistry::*)($Iterator*)>(&ServiceRegistry::init$))},
	{"checkClassAllowed", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&ServiceRegistry::checkClassAllowed))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"deregisterAll", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC},
	{"deregisterAll", "()V", nullptr, $PUBLIC},
	{"deregisterServiceProvider", "(Ljava/lang/Object;Ljava/lang/Class;)Z", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;)Z", $PUBLIC},
	{"deregisterServiceProvider", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.lang.Throwable", nullptr, _ServiceRegistry_MethodAnnotations_finalize7},
	{"getCategories", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/Class<*>;>;", $PUBLIC},
	{"getServiceProviderByClass", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"getServiceProviders", "(Ljava/lang/Class;Z)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Z)Ljava/util/Iterator<TT;>;", $PUBLIC},
	{"getServiceProviders", "(Ljava/lang/Class;Ljavax/imageio/spi/ServiceRegistry$Filter;Z)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljavax/imageio/spi/ServiceRegistry$Filter;Z)Ljava/util/Iterator<TT;>;", $PUBLIC},
	{"getSubRegistries", "(Ljava/lang/Object;)Ljava/util/Iterator;", "(Ljava/lang/Object;)Ljava/util/Iterator<Ljavax/imageio/spi/SubRegistry;>;", $PRIVATE, $method(static_cast<$Iterator*(ServiceRegistry::*)(Object$*)>(&ServiceRegistry::getSubRegistries))},
	{"lookupProviders", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/ClassLoader;)Ljava/util/Iterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($Class*,$ClassLoader*)>(&ServiceRegistry::lookupProviders))},
	{"lookupProviders", "(Ljava/lang/Class;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/util/Iterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($Class*)>(&ServiceRegistry::lookupProviders))},
	{"registerServiceProvider", "(Ljava/lang/Object;Ljava/lang/Class;)Z", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;)Z", $PUBLIC},
	{"registerServiceProvider", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"registerServiceProviders", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<*>;)V", $PUBLIC},
	{"setOrdering", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;)Z", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;TT;TT;)Z", $PUBLIC},
	{"unsetOrdering", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;)Z", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;TT;TT;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _ServiceRegistry_InnerClassesInfo_[] = {
	{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ServiceRegistry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.spi.ServiceRegistry",
	"java.lang.Object",
	nullptr,
	_ServiceRegistry_FieldInfo_,
	_ServiceRegistry_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceRegistry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.spi.ServiceRegistry$Filter"
};

$Object* allocate$ServiceRegistry($Class* clazz) {
	return $of($alloc(ServiceRegistry));
}

void ServiceRegistry::init$($Iterator* categories) {
	$set(this, categoryMap, $new($HashMap));
	if (categories == nullptr) {
		$throwNew($IllegalArgumentException, "categories == null!"_s);
	}
	while ($nc(categories)->hasNext()) {
		$Class* category = $cast($Class, categories->next());
		checkClassAllowed(category);
		$var($SubRegistry, reg, $new($SubRegistry, this, category));
		$nc(this->categoryMap)->put(category, reg);
	}
}

$Iterator* ServiceRegistry::lookupProviders($Class* providerClass, $ClassLoader* loader) {
	$load(ServiceRegistry);
	$beforeCallerSensitive();
	if (providerClass == nullptr) {
		$throwNew($IllegalArgumentException, "providerClass == null!"_s);
	}
	checkClassAllowed(providerClass);
	return $nc($($ServiceLoader::load(providerClass, loader)))->iterator();
}

$Iterator* ServiceRegistry::lookupProviders($Class* providerClass) {
	$load(ServiceRegistry);
	$beforeCallerSensitive();
	if (providerClass == nullptr) {
		$throwNew($IllegalArgumentException, "providerClass == null!"_s);
	}
	checkClassAllowed(providerClass);
	return $nc($($ServiceLoader::load(providerClass)))->iterator();
}

$Iterator* ServiceRegistry::getCategories() {
	$var($Set, keySet, $nc(this->categoryMap)->keySet());
	return $nc(keySet)->iterator();
}

$Iterator* ServiceRegistry::getSubRegistries(Object$* provider) {
	$var($List, l, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($($nc(this->categoryMap)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* c = $cast($Class, i$->next());
			{
				if ($nc(c)->isAssignableFrom($nc($of(provider))->getClass())) {
					l->add($cast($SubRegistry, $($nc(this->categoryMap)->get(c))));
				}
			}
		}
	}
	return l->iterator();
}

bool ServiceRegistry::registerServiceProvider(Object$* provider, $Class* category) {
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	if (!$nc(category)->isAssignableFrom($nc($of(provider))->getClass())) {
		$throwNew($ClassCastException);
	}
	return $nc(reg)->registerServiceProvider(provider);
}

void ServiceRegistry::registerServiceProvider(Object$* provider) {
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($Iterator, regs, getSubRegistries(provider));
	while ($nc(regs)->hasNext()) {
		$var($SubRegistry, reg, $cast($SubRegistry, regs->next()));
		$nc(reg)->registerServiceProvider(provider);
	}
}

void ServiceRegistry::registerServiceProviders($Iterator* providers) {
	if (providers == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	while ($nc(providers)->hasNext()) {
		registerServiceProvider($(providers->next()));
	}
}

bool ServiceRegistry::deregisterServiceProvider(Object$* provider, $Class* category) {
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	if (!$nc(category)->isAssignableFrom($nc($of(provider))->getClass())) {
		$throwNew($ClassCastException);
	}
	return $nc(reg)->deregisterServiceProvider(provider);
}

void ServiceRegistry::deregisterServiceProvider(Object$* provider) {
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($Iterator, regs, getSubRegistries(provider));
	while ($nc(regs)->hasNext()) {
		$var($SubRegistry, reg, $cast($SubRegistry, regs->next()));
		$nc(reg)->deregisterServiceProvider(provider);
	}
}

bool ServiceRegistry::contains(Object$* provider) {
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($Iterator, regs, getSubRegistries(provider));
	while ($nc(regs)->hasNext()) {
		$var($SubRegistry, reg, $cast($SubRegistry, regs->next()));
		if ($nc(reg)->contains(provider)) {
			return true;
		}
	}
	return false;
}

$Iterator* ServiceRegistry::getServiceProviders($Class* category, bool useOrdering) {
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	$var($Iterator, it, $nc(reg)->getServiceProviders(useOrdering));
	return it;
}

$Iterator* ServiceRegistry::getServiceProviders($Class* category, $ServiceRegistry$Filter* filter, bool useOrdering) {
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	$var($Iterator, iter, getServiceProviders(category, useOrdering));
	return $new($FilterIterator, iter, filter);
}

$Object* ServiceRegistry::getServiceProviderByClass($Class* providerClass) {
	if (providerClass == nullptr) {
		$throwNew($IllegalArgumentException, "providerClass == null!"_s);
	}
	{
		$var($Iterator, i$, $nc($($nc(this->categoryMap)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* c = $cast($Class, i$->next());
			{
				if ($nc(c)->isAssignableFrom(providerClass)) {
					$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(c)));
					$var($Object, provider, $nc(reg)->getServiceProviderByClass(providerClass));
					if (provider != nullptr) {
						return $of(provider);
					}
				}
			}
		}
	}
	return $of(nullptr);
}

bool ServiceRegistry::setOrdering($Class* category, Object$* firstProvider, Object$* secondProvider) {
	if (firstProvider == nullptr || secondProvider == nullptr) {
		$throwNew($IllegalArgumentException, "provider is null!"_s);
	}
	if ($equals(firstProvider, secondProvider)) {
		$throwNew($IllegalArgumentException, "providers are the same!"_s);
	}
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	bool var$0 = $nc(reg)->contains(firstProvider);
	if (var$0 && reg->contains(secondProvider)) {
		return reg->setOrdering(firstProvider, secondProvider);
	}
	return false;
}

bool ServiceRegistry::unsetOrdering($Class* category, Object$* firstProvider, Object$* secondProvider) {
	if (firstProvider == nullptr || secondProvider == nullptr) {
		$throwNew($IllegalArgumentException, "provider is null!"_s);
	}
	if ($equals(firstProvider, secondProvider)) {
		$throwNew($IllegalArgumentException, "providers are the same!"_s);
	}
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	bool var$0 = $nc(reg)->contains(firstProvider);
	if (var$0 && reg->contains(secondProvider)) {
		return reg->unsetOrdering(firstProvider, secondProvider);
	}
	return false;
}

void ServiceRegistry::deregisterAll($Class* category) {
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	$nc(reg)->clear();
}

void ServiceRegistry::deregisterAll() {
	{
		$var($Iterator, i$, $nc($($nc(this->categoryMap)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SubRegistry, reg, $cast($SubRegistry, i$->next()));
			{
				$nc(reg)->clear();
			}
		}
	}
}

void ServiceRegistry::finalize() {
	deregisterAll();
	$Object::finalize();
}

void ServiceRegistry::checkClassAllowed($Class* clazz) {
	if (clazz == nullptr) {
		$throwNew($IllegalArgumentException, "class must not be null"_s);
	}
	$load($ImageInputStreamSpi);
	$load($ImageOutputStreamSpi);
	$load($ImageReaderSpi);
	$load($ImageTranscoderSpi);
	$load($ImageWriterSpi);
	if (clazz != $ImageInputStreamSpi::class$ && clazz != $ImageOutputStreamSpi::class$ && clazz != $ImageReaderSpi::class$ && clazz != $ImageTranscoderSpi::class$ && clazz != $ImageWriterSpi::class$) {
		$throwNew($IllegalArgumentException, $$str({$($nc(clazz)->getName()), " is not an ImageIO SPI class"_s}));
	}
}

ServiceRegistry::ServiceRegistry() {
}

$Class* ServiceRegistry::load$($String* name, bool initialize) {
	$loadClass(ServiceRegistry, name, initialize, &_ServiceRegistry_ClassInfo_, allocate$ServiceRegistry);
	return class$;
}

$Class* ServiceRegistry::class$ = nullptr;

		} // spi
	} // imageio
} // javax