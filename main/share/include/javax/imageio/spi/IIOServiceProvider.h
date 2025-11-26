#ifndef _javax_imageio_spi_IIOServiceProvider_h_
#define _javax_imageio_spi_IIOServiceProvider_h_
//$ class javax.imageio.spi.IIOServiceProvider
//$ extends javax.imageio.spi.RegisterableService

#include <javax/imageio/spi/RegisterableService.h>

namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace imageio {
		namespace spi {
			class ServiceRegistry;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class $import IIOServiceProvider : public ::javax::imageio::spi::RegisterableService {
	$class(IIOServiceProvider, $NO_CLASS_INIT, ::javax::imageio::spi::RegisterableService)
public:
	IIOServiceProvider();
	void init$($String* vendorName, $String* version);
	void init$();
	virtual $String* getDescription(::java::util::Locale* locale) {return nullptr;}
	virtual $String* getVendorName();
	virtual $String* getVersion();
	virtual void onDeregistration(::javax::imageio::spi::ServiceRegistry* registry, $Class* category) override;
	virtual void onRegistration(::javax::imageio::spi::ServiceRegistry* registry, $Class* category) override;
	$String* vendorName = nullptr;
	$String* version = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_IIOServiceProvider_h_