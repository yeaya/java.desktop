#ifndef _javax_imageio_spi_ServiceRegistry_h_
#define _javax_imageio_spi_ServiceRegistry_h_
//$ class javax.imageio.spi.ServiceRegistry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
	}
}
namespace javax {
	namespace imageio {
		namespace spi {
			class ServiceRegistry$Filter;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class $import ServiceRegistry : public ::java::lang::Object {
	$class(ServiceRegistry, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	ServiceRegistry();
	void init$(::java::util::Iterator* categories);
	static void checkClassAllowed($Class* clazz);
	virtual bool contains(Object$* provider);
	virtual void deregisterAll($Class* category);
	virtual void deregisterAll();
	virtual bool deregisterServiceProvider(Object$* provider, $Class* category);
	virtual void deregisterServiceProvider(Object$* provider);
	virtual void finalize() override;
	virtual ::java::util::Iterator* getCategories();
	virtual $Object* getServiceProviderByClass($Class* providerClass);
	virtual ::java::util::Iterator* getServiceProviders($Class* category, bool useOrdering);
	virtual ::java::util::Iterator* getServiceProviders($Class* category, ::javax::imageio::spi::ServiceRegistry$Filter* filter, bool useOrdering);
	::java::util::Iterator* getSubRegistries(Object$* provider);
	static ::java::util::Iterator* lookupProviders($Class* providerClass, ::java::lang::ClassLoader* loader);
	static ::java::util::Iterator* lookupProviders($Class* providerClass);
	virtual bool registerServiceProvider(Object$* provider, $Class* category);
	virtual void registerServiceProvider(Object$* provider);
	virtual void registerServiceProviders(::java::util::Iterator* providers);
	virtual bool setOrdering($Class* category, Object$* firstProvider, Object$* secondProvider);
	virtual bool unsetOrdering($Class* category, Object$* firstProvider, Object$* secondProvider);
	::java::util::Map* categoryMap = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_ServiceRegistry_h_