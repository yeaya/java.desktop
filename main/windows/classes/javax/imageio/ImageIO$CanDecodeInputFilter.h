#ifndef _javax_imageio_ImageIO$CanDecodeInputFilter_h_
#define _javax_imageio_ImageIO$CanDecodeInputFilter_h_
//$ class javax.imageio.ImageIO$CanDecodeInputFilter
//$ extends javax.imageio.spi.ServiceRegistry$Filter

#include <javax/imageio/spi/ServiceRegistry$Filter.h>

namespace javax {
	namespace imageio {

class $export ImageIO$CanDecodeInputFilter : public ::javax::imageio::spi::ServiceRegistry$Filter {
	$class(ImageIO$CanDecodeInputFilter, $NO_CLASS_INIT, ::javax::imageio::spi::ServiceRegistry$Filter)
public:
	ImageIO$CanDecodeInputFilter();
	void init$(Object$* input);
	virtual bool filter(Object$* elt) override;
	$Object* input = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO$CanDecodeInputFilter_h_