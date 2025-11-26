#ifndef _com_sun_imageio_plugins_tiff_TIFFDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFDecompressor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {
					class TIFFColorConverter;
				}
			}
		}
	}
}
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
			class SampleModel;
			class WritableRaster;
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageReader;
		class ImageTypeSpecifier;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadata;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFDecompressor : public ::java::lang::Object {
	$class(TIFFDecompressor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TIFFDecompressor();
	void init$();
	static bool areIntArraysEqual($ints* a, $ints* b);
	static bool areSampleSizesEqual(::java::awt::image::SampleModel* sm);
	virtual void beginDecoding();
	static ::java::awt::image::ColorModel* createComponentCM(::java::awt::color::ColorSpace* colorSpace, int32_t numBands, $ints* bitsPerSample, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);
	static ::java::awt::image::SampleModel* createInterleavedSM(int32_t dataType, int32_t numBands);
	static int32_t createMask($ints* bitsPerSample, int32_t band);
	virtual ::java::awt::image::BufferedImage* createRawImage();
	virtual void decode();
	virtual void decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {}
	virtual void decodeRaw($shorts* s, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride);
	virtual void decodeRaw($ints* i, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride);
	virtual void decodeRaw($floats* f, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride);
	virtual void decodeRaw($doubles* d, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride);
	static int32_t getBitsPerPixel(::java::awt::image::SampleModel* sm);
	static int32_t getDataTypeFromNumBits(int32_t numBits, bool isSigned);
	static int32_t getDataTypeSize(int32_t dataType);
	virtual ::javax::imageio::ImageTypeSpecifier* getRawImageType();
	static ::javax::imageio::ImageTypeSpecifier* getRawImageTypeSpecifier(int32_t photometricInterpretation, int32_t compression, int32_t samplesPerPixel, $ints* bitsPerSample, $ints* sampleFormat, $ints* extraSamples, $chars* colorMap);
	static bool isDataBufferBitContiguous(::java::awt::image::SampleModel* sm, $ints* bitsPerSample);
	static void reformatData($bytes* buf, int32_t bytesPerRow, int32_t numRows, $shorts* shortData, $ints* intData, int32_t outOffset, int32_t outStride);
	static void reformatDiscontiguousData($bytes* buf, $ints* bitsPerSample, int32_t stride, int32_t w, int32_t h, ::java::awt::image::WritableRaster* raster);
	virtual void setActiveSrcHeight(int32_t activeSrcHeight);
	virtual void setActiveSrcMinX(int32_t activeSrcMinX);
	virtual void setActiveSrcMinY(int32_t activeSrcMinY);
	virtual void setActiveSrcWidth(int32_t activeSrcWidth);
	virtual void setBitsPerSample($ints* bitsPerSample);
	virtual void setByteCount(int32_t byteCount);
	virtual void setColorConverter(::com::sun::imageio::plugins::tiff::TIFFColorConverter* colorConverter);
	virtual void setColorMap($chars* colorMap);
	virtual void setCompression(int32_t compression);
	virtual void setDestinationBands($ints* destinationBands);
	virtual void setDstHeight(int32_t dstHeight);
	virtual void setDstMinX(int32_t dstMinX);
	virtual void setDstMinY(int32_t dstMinY);
	virtual void setDstWidth(int32_t dstWidth);
	virtual void setDstXOffset(int32_t dstXOffset);
	virtual void setDstYOffset(int32_t dstYOffset);
	virtual void setExtraSamples($ints* extraSamples);
	virtual void setImage(::java::awt::image::BufferedImage* image);
	virtual void setMetadata(::javax::imageio::metadata::IIOMetadata* metadata);
	virtual void setOffset(int64_t offset);
	virtual void setPhotometricInterpretation(int32_t photometricInterpretation);
	virtual void setPlanar(bool planar);
	virtual void setPlanarBand(int32_t planarBand);
	virtual void setReader(::javax::imageio::ImageReader* reader);
	virtual void setSampleFormat($ints* sampleFormat);
	virtual void setSamplesPerPixel(int32_t samplesPerPixel);
	virtual void setSourceBands($ints* sourceBands);
	virtual void setSourceXOffset(int32_t sourceXOffset);
	virtual void setSourceYOffset(int32_t sourceYOffset);
	virtual void setSrcHeight(int32_t srcHeight);
	virtual void setSrcMinX(int32_t srcMinX);
	virtual void setSrcMinY(int32_t srcMinY);
	virtual void setSrcWidth(int32_t srcWidth);
	virtual void setStream(::javax::imageio::stream::ImageInputStream* stream);
	virtual void setSubsampleX(int32_t subsampleX);
	virtual void setSubsampleY(int32_t subsampleY);
	::javax::imageio::ImageReader* reader = nullptr;
	::javax::imageio::metadata::IIOMetadata* metadata = nullptr;
	int32_t photometricInterpretation = 0;
	int32_t compression = 0;
	bool planar = false;
	int32_t planarBand = 0;
	int32_t samplesPerPixel = 0;
	$ints* bitsPerSample = nullptr;
	$ints* sampleFormat = nullptr;
	$ints* extraSamples = nullptr;
	$chars* colorMap = nullptr;
	::javax::imageio::stream::ImageInputStream* stream = nullptr;
	int64_t offset = 0;
	int32_t byteCount = 0;
	int32_t srcMinX = 0;
	int32_t srcMinY = 0;
	int32_t srcWidth = 0;
	int32_t srcHeight = 0;
	int32_t sourceXOffset = 0;
	int32_t dstXOffset = 0;
	int32_t sourceYOffset = 0;
	int32_t dstYOffset = 0;
	int32_t subsampleX = 0;
	int32_t subsampleY = 0;
	$ints* sourceBands = nullptr;
	$ints* destinationBands = nullptr;
	::java::awt::image::BufferedImage* rawImage = nullptr;
	::java::awt::image::BufferedImage* image = nullptr;
	int32_t dstMinX = 0;
	int32_t dstMinY = 0;
	int32_t dstWidth = 0;
	int32_t dstHeight = 0;
	int32_t activeSrcMinX = 0;
	int32_t activeSrcMinY = 0;
	int32_t activeSrcWidth = 0;
	int32_t activeSrcHeight = 0;
	::com::sun::imageio::plugins::tiff::TIFFColorConverter* colorConverter = nullptr;
	bool isBilevel = false;
	bool isContiguous = false;
	bool isImageSimple = false;
	bool adjustBitDepths = false;
	$Array<int32_t, 2>* bitDepthScale = nullptr;
	bool isFirstBitDepthTable = false;
	bool planarCache = false;
	$ints* destBitsPerSampleCache = nullptr;
	$ints* sourceBandsCache = nullptr;
	$ints* bitsPerSampleCache = nullptr;
	$ints* destinationBandsCache = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFDecompressor_h_