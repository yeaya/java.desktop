#ifndef _com_sun_imageio_plugins_tiff_TIFFYCbCrDecompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFYCbCrDecompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFYCbCrDecompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFDecompressor

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/lang/Array.h>

#pragma push_macro("FRAC_BITS")
#undef FRAC_BITS
#pragma push_macro("FRAC_SCALE")
#undef FRAC_SCALE

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageReader;
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

class TIFFYCbCrDecompressor : public ::com::sun::imageio::plugins::tiff::TIFFDecompressor {
	$class(TIFFYCbCrDecompressor, 0, ::com::sun::imageio::plugins::tiff::TIFFDecompressor)
public:
	TIFFYCbCrDecompressor();
	using ::com::sun::imageio::plugins::tiff::TIFFDecompressor::decodeRaw;
	void init$(::com::sun::imageio::plugins::tiff::TIFFDecompressor* decompressor, bool colorConvert);
	virtual void beginDecoding() override;
	int8_t clamp(int32_t f);
	virtual void decodeRaw($bytes* buf, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) override;
	virtual void setActiveSrcHeight(int32_t activeSrcHeight) override;
	virtual void setActiveSrcMinX(int32_t activeSrcMinX) override;
	virtual void setActiveSrcMinY(int32_t activeSrcMinY) override;
	virtual void setActiveSrcWidth(int32_t activeSrcWidth) override;
	virtual void setBitsPerSample($ints* bitsPerSample) override;
	virtual void setByteCount(int32_t byteCount) override;
	virtual void setColorMap($chars* colorMap) override;
	virtual void setCompression(int32_t compression) override;
	virtual void setDestinationBands($ints* destinationBands) override;
	virtual void setDstHeight(int32_t dstHeight) override;
	virtual void setDstMinX(int32_t dstMinX) override;
	virtual void setDstMinY(int32_t dstMinY) override;
	virtual void setDstWidth(int32_t dstWidth) override;
	virtual void setDstXOffset(int32_t dstXOffset) override;
	virtual void setDstYOffset(int32_t dstYOffset) override;
	virtual void setExtraSamples($ints* extraSamples) override;
	virtual void setImage(::java::awt::image::BufferedImage* image) override;
	virtual void setMetadata(::javax::imageio::metadata::IIOMetadata* metadata) override;
	virtual void setOffset(int64_t offset) override;
	virtual void setPhotometricInterpretation(int32_t photometricInterpretation) override;
	virtual void setPlanar(bool planar) override;
	virtual void setReader(::javax::imageio::ImageReader* reader) override;
	virtual void setSampleFormat($ints* sampleFormat) override;
	virtual void setSamplesPerPixel(int32_t samplesPerPixel) override;
	virtual void setSourceBands($ints* sourceBands) override;
	virtual void setSourceXOffset(int32_t sourceXOffset) override;
	virtual void setSourceYOffset(int32_t sourceYOffset) override;
	virtual void setSrcHeight(int32_t srcHeight) override;
	virtual void setSrcMinX(int32_t srcMinX) override;
	virtual void setSrcMinY(int32_t srcMinY) override;
	virtual void setSrcWidth(int32_t srcWidth) override;
	virtual void setStream(::javax::imageio::stream::ImageInputStream* stream) override;
	void warning($String* message);
	static const int32_t FRAC_BITS = 16;
	static float FRAC_SCALE;
	float lumaRed = 0.0;
	float lumaGreen = 0.0;
	float lumaBlue = 0.0;
	float referenceBlackY = 0.0;
	float referenceWhiteY = 0.0;
	float referenceBlackCb = 0.0;
	float referenceWhiteCb = 0.0;
	float referenceBlackCr = 0.0;
	float referenceWhiteCr = 0.0;
	float codingRangeY = 0.0;
	$ints* iYTab = nullptr;
	$ints* iCbTab = nullptr;
	$ints* iCrTab = nullptr;
	$ints* iGYTab = nullptr;
	$ints* iGCbTab = nullptr;
	$ints* iGCrTab = nullptr;
	int32_t chromaSubsampleH = 0;
	int32_t chromaSubsampleV = 0;
	bool colorConvert = false;
	::com::sun::imageio::plugins::tiff::TIFFDecompressor* decompressor = nullptr;
	::java::awt::image::BufferedImage* tmpImage = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("FRAC_BITS")
#pragma pop_macro("FRAC_SCALE")

#endif // _com_sun_imageio_plugins_tiff_TIFFYCbCrDecompressor_h_