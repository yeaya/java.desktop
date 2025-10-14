#ifndef _com_sun_imageio_plugins_tiff_TIFFDeflater_h_
#define _com_sun_imageio_plugins_tiff_TIFFDeflater_h_
//$ class com.sun.imageio.plugins.tiff.TIFFDeflater
//$ extends com.sun.imageio.plugins.tiff.TIFFCompressor

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace zip {
			class Deflater;
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageWriteParam;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFDeflater : public ::com::sun::imageio::plugins::tiff::TIFFCompressor {
	$class(TIFFDeflater, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFCompressor)
public:
	TIFFDeflater();
	void init$($String* compressionType, int32_t compressionTagValue, ::javax::imageio::ImageWriteParam* param, int32_t predictorValue);
	virtual int32_t encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) override;
	::java::util::zip::Deflater* deflater = nullptr;
	int32_t predictor = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFDeflater_h_