#ifndef _javax_imageio_spi_IIORegistry_h_
#define _javax_imageio_spi_IIORegistry_h_
//$ class javax.imageio.spi.IIORegistry
//$ extends javax.imageio.spi.ServiceRegistry

#include <javax/imageio/spi/ServiceRegistry.h>

namespace java {
	namespace util {
		class Vector;
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class $import IIORegistry : public ::javax::imageio::spi::ServiceRegistry {
	$class(IIORegistry, 0, ::javax::imageio::spi::ServiceRegistry)
public:
	IIORegistry();
	void init$();
	static ::javax::imageio::spi::IIORegistry* getDefaultInstance();
	void registerApplicationClasspathSpis();
	void registerInstalledProviders();
	void registerStandardSpis();
	static ::java::util::Vector* initialCategories;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_IIORegistry_h_