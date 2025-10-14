#ifndef _javax_imageio_spi_RegisterableService_h_
#define _javax_imageio_spi_RegisterableService_h_
//$ interface javax.imageio.spi.RegisterableService
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export RegisterableService : public ::java::lang::Object {
	$interface(RegisterableService, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void onDeregistration(::javax::imageio::spi::ServiceRegistry* registry, $Class* category) {}
	virtual void onRegistration(::javax::imageio::spi::ServiceRegistry* registry, $Class* category) {}
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_RegisterableService_h_