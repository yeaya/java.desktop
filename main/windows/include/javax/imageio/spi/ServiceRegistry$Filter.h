#ifndef _javax_imageio_spi_ServiceRegistry$Filter_h_
#define _javax_imageio_spi_ServiceRegistry$Filter_h_
//$ interface javax.imageio.spi.ServiceRegistry$Filter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace imageio {
		namespace spi {

class $import ServiceRegistry$Filter : public ::java::lang::Object {
	$interface(ServiceRegistry$Filter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool filter(Object$* provider) {return false;}
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_ServiceRegistry$Filter_h_