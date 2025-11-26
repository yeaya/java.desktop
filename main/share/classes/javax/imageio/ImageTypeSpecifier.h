#ifndef _javax_imageio_ImageTypeSpecifier_h_
#define _javax_imageio_ImageTypeSpecifier_h_
//$ class javax.imageio.ImageTypeSpecifier
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace color {
			class ColorSpace;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorModel;
			class RenderedImage;
			class SampleModel;
		}
	}
}

namespace javax {
	namespace imageio {

class $export ImageTypeSpecifier : public ::java::lang::Object {
	$class(ImageTypeSpecifier, 0, ::java::lang::Object)
public:
	ImageTypeSpecifier();
	void init$();
	void init$(::java::awt::image::ColorModel* colorModel, ::java::awt::image::SampleModel* sampleModel);
	void init$(::java::awt::image::RenderedImage* image);
	static ::javax::imageio::ImageTypeSpecifier* createBanded(::java::awt::color::ColorSpace* colorSpace, $ints* bankIndices, $ints* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);
	virtual ::java::awt::image::BufferedImage* createBufferedImage(int32_t width, int32_t height);
	static ::java::awt::image::ColorModel* createComponentCM(::java::awt::color::ColorSpace* colorSpace, int32_t numBands, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);
	static ::javax::imageio::ImageTypeSpecifier* createFromBufferedImageType(int32_t bufferedImageType);
	static ::javax::imageio::ImageTypeSpecifier* createFromRenderedImage(::java::awt::image::RenderedImage* image);
	static ::javax::imageio::ImageTypeSpecifier* createGrayscale(int32_t bits, int32_t dataType, bool isSigned);
	static ::javax::imageio::ImageTypeSpecifier* createGrayscale(int32_t bits, int32_t dataType, bool isSigned, bool isAlphaPremultiplied);
	static ::javax::imageio::ImageTypeSpecifier* createIndexed($bytes* redLUT, $bytes* greenLUT, $bytes* blueLUT, $bytes* alphaLUT, int32_t bits, int32_t dataType);
	static ::javax::imageio::ImageTypeSpecifier* createInterleaved(::java::awt::color::ColorSpace* colorSpace, $ints* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);
	static ::javax::imageio::ImageTypeSpecifier* createPacked(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied);
	static ::javax::imageio::ImageTypeSpecifier* createSpecifier(int32_t type);
	virtual bool equals(Object$* o) override;
	virtual int32_t getBitsPerBand(int32_t band);
	virtual int32_t getBufferedImageType();
	virtual ::java::awt::image::ColorModel* getColorModel();
	virtual int32_t getNumBands();
	virtual int32_t getNumComponents();
	virtual ::java::awt::image::SampleModel* getSampleModel();
	virtual ::java::awt::image::SampleModel* getSampleModel(int32_t width, int32_t height);
	static ::javax::imageio::ImageTypeSpecifier* getSpecifier(int32_t type);
	virtual int32_t hashCode() override;
	::java::awt::image::ColorModel* colorModel = nullptr;
	::java::awt::image::SampleModel* sampleModel = nullptr;
	static $Array<::javax::imageio::ImageTypeSpecifier>* BISpecifier;
	static ::java::awt::color::ColorSpace* sRGB;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageTypeSpecifier_h_