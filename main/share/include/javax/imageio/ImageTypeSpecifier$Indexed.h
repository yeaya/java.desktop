#ifndef _javax_imageio_ImageTypeSpecifier$Indexed_h_
#define _javax_imageio_ImageTypeSpecifier$Indexed_h_
//$ class javax.imageio.ImageTypeSpecifier$Indexed
//$ extends javax.imageio.ImageTypeSpecifier

#include <java/lang/Array.h>
#include <javax/imageio/ImageTypeSpecifier.h>

namespace javax {
	namespace imageio {

class $import ImageTypeSpecifier$Indexed : public ::javax::imageio::ImageTypeSpecifier {
	$class(ImageTypeSpecifier$Indexed, $NO_CLASS_INIT, ::javax::imageio::ImageTypeSpecifier)
public:
	ImageTypeSpecifier$Indexed();
	void init$($bytes* redLUT, $bytes* greenLUT, $bytes* blueLUT, $bytes* alphaLUT, int32_t bits, int32_t dataType);
	$bytes* redLUT = nullptr;
	$bytes* greenLUT = nullptr;
	$bytes* blueLUT = nullptr;
	$bytes* alphaLUT = nullptr;
	int32_t bits = 0;
	int32_t dataType = 0;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageTypeSpecifier$Indexed_h_