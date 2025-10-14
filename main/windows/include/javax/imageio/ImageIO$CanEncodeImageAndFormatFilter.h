#ifndef _javax_imageio_ImageIO$CanEncodeImageAndFormatFilter_h_
#define _javax_imageio_ImageIO$CanEncodeImageAndFormatFilter_h_
//$ class javax.imageio.ImageIO$CanEncodeImageAndFormatFilter
//$ extends javax.imageio.spi.ServiceRegistry$Filter

#include <javax/imageio/spi/ServiceRegistry$Filter.h>

namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}

namespace javax {
	namespace imageio {

class $import ImageIO$CanEncodeImageAndFormatFilter : public ::javax::imageio::spi::ServiceRegistry$Filter {
	$class(ImageIO$CanEncodeImageAndFormatFilter, $NO_CLASS_INIT, ::javax::imageio::spi::ServiceRegistry$Filter)
public:
	ImageIO$CanEncodeImageAndFormatFilter();
	void init$(::javax::imageio::ImageTypeSpecifier* type, $String* formatName);
	virtual bool filter(Object$* elt) override;
	::javax::imageio::ImageTypeSpecifier* type = nullptr;
	$String* formatName = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO$CanEncodeImageAndFormatFilter_h_