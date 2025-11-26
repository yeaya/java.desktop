#ifndef _javax_imageio_ImageTypeSpecifier$Packed_h_
#define _javax_imageio_ImageTypeSpecifier$Packed_h_
//$ class javax.imageio.ImageTypeSpecifier$Packed
//$ extends javax.imageio.ImageTypeSpecifier

#include <javax/imageio/ImageTypeSpecifier.h>

namespace java {
	namespace awt {
		namespace color {
			class ColorSpace;
		}
	}
}

namespace javax {
	namespace imageio {

class $export ImageTypeSpecifier$Packed : public ::javax::imageio::ImageTypeSpecifier {
	$class(ImageTypeSpecifier$Packed, $NO_CLASS_INIT, ::javax::imageio::ImageTypeSpecifier)
public:
	ImageTypeSpecifier$Packed();
	void init$(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied);
	::java::awt::color::ColorSpace* colorSpace = nullptr;
	int32_t redMask = 0;
	int32_t greenMask = 0;
	int32_t blueMask = 0;
	int32_t alphaMask = 0;
	int32_t transferType = 0;
	bool isAlphaPremultiplied = false;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageTypeSpecifier$Packed_h_