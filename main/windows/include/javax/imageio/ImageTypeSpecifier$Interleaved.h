#ifndef _javax_imageio_ImageTypeSpecifier$Interleaved_h_
#define _javax_imageio_ImageTypeSpecifier$Interleaved_h_
//$ class javax.imageio.ImageTypeSpecifier$Interleaved
//$ extends javax.imageio.ImageTypeSpecifier

#include <java/lang/Array.h>
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

class $import ImageTypeSpecifier$Interleaved : public ::javax::imageio::ImageTypeSpecifier {
	$class(ImageTypeSpecifier$Interleaved, $NO_CLASS_INIT, ::javax::imageio::ImageTypeSpecifier)
public:
	ImageTypeSpecifier$Interleaved();
	void init$(::java::awt::color::ColorSpace* colorSpace, $ints* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	::java::awt::color::ColorSpace* colorSpace = nullptr;
	$ints* bandOffsets = nullptr;
	int32_t dataType = 0;
	bool hasAlpha = false;
	bool isAlphaPremultiplied = false;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageTypeSpecifier$Interleaved_h_