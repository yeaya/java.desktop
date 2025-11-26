#ifndef _javax_imageio_ImageIO$ContainsFilter_h_
#define _javax_imageio_ImageIO$ContainsFilter_h_
//$ class javax.imageio.ImageIO$ContainsFilter
//$ extends javax.imageio.spi.ServiceRegistry$Filter

#include <javax/imageio/spi/ServiceRegistry$Filter.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace javax {
	namespace imageio {

class $import ImageIO$ContainsFilter : public ::javax::imageio::spi::ServiceRegistry$Filter {
	$class(ImageIO$ContainsFilter, $NO_CLASS_INIT, ::javax::imageio::spi::ServiceRegistry$Filter)
public:
	ImageIO$ContainsFilter();
	void init$(::java::lang::reflect::Method* method, $String* name);
	virtual bool filter(Object$* elt) override;
	::java::lang::reflect::Method* method = nullptr;
	$String* name = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO$ContainsFilter_h_