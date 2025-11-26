#ifndef _javax_imageio_ImageTypeSpecifier$Grayscale_h_
#define _javax_imageio_ImageTypeSpecifier$Grayscale_h_
//$ class javax.imageio.ImageTypeSpecifier$Grayscale
//$ extends javax.imageio.ImageTypeSpecifier

#include <javax/imageio/ImageTypeSpecifier.h>

namespace javax {
	namespace imageio {

class $export ImageTypeSpecifier$Grayscale : public ::javax::imageio::ImageTypeSpecifier {
	$class(ImageTypeSpecifier$Grayscale, $NO_CLASS_INIT, ::javax::imageio::ImageTypeSpecifier)
public:
	ImageTypeSpecifier$Grayscale();
	void init$(int32_t bits, int32_t dataType, bool isSigned, bool hasAlpha, bool isAlphaPremultiplied);
	int32_t bits = 0;
	int32_t dataType = 0;
	bool isSigned = false;
	bool hasAlpha = false;
	bool isAlphaPremultiplied = false;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageTypeSpecifier$Grayscale_h_