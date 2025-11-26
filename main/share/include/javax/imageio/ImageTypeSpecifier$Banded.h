#ifndef _javax_imageio_ImageTypeSpecifier$Banded_h_
#define _javax_imageio_ImageTypeSpecifier$Banded_h_
//$ class javax.imageio.ImageTypeSpecifier$Banded
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

class $import ImageTypeSpecifier$Banded : public ::javax::imageio::ImageTypeSpecifier {
	$class(ImageTypeSpecifier$Banded, $NO_CLASS_INIT, ::javax::imageio::ImageTypeSpecifier)
public:
	ImageTypeSpecifier$Banded();
	void init$(::java::awt::color::ColorSpace* colorSpace, $ints* bankIndices, $ints* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	::java::awt::color::ColorSpace* colorSpace = nullptr;
	$ints* bankIndices = nullptr;
	$ints* bandOffsets = nullptr;
	int32_t dataType = 0;
	bool hasAlpha = false;
	bool isAlphaPremultiplied = false;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageTypeSpecifier$Banded_h_