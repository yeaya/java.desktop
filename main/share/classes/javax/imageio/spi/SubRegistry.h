#ifndef _javax_imageio_spi_SubRegistry_h_
#define _javax_imageio_spi_SubRegistry_h_
//$ class javax.imageio.spi.SubRegistry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
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
			class PartiallyOrderedSet;
			class RegisterableService;
			class ServiceRegistry;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class SubRegistry : public ::java::lang::Object {
	$class(SubRegistry, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	SubRegistry();
	void init$(::javax::imageio::spi::ServiceRegistry* registry, $Class* category);
	virtual void clear();
	virtual bool contains(Object$* provider);
	virtual bool deregisterServiceProvider(Object$* provider);
	virtual void finalize() override;
	virtual $Object* getServiceProviderByClass($Class* providerClass);
	virtual ::java::util::Iterator* getServiceProviders(bool useOrdering);
	::java::lang::Void* lambda$clear$0(::javax::imageio::spi::RegisterableService* rs);
	virtual bool registerServiceProvider(Object$* provider);
	virtual bool setOrdering(Object$* firstProvider, Object$* secondProvider);
	virtual bool unsetOrdering(Object$* firstProvider, Object$* secondProvider);
	::javax::imageio::spi::ServiceRegistry* registry = nullptr;
	$Class* category = nullptr;
	::javax::imageio::spi::PartiallyOrderedSet* poset = nullptr;
	::java::util::Map* map = nullptr;
	::java::util::Map* accMap = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_SubRegistry_h_