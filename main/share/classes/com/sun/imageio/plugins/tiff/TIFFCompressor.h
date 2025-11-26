#ifndef _com_sun_imageio_plugins_tiff_TIFFCompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFCompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFCompressor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace imageio {
		class ImageWriter;
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
			class ImageOutputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFCompressor : public ::java::lang::Object {
	$class(TIFFCompressor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TIFFCompressor();
	void init$($String* compressionType, int32_t compressionTagValue, bool isCompressionLossless);
	virtual int32_t encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {return 0;}
	virtual int32_t getCompressionTagValue();
	virtual $String* getCompressionType();
	virtual ::javax::imageio::metadata::IIOMetadata* getMetadata();
	virtual ::javax::imageio::stream::ImageOutputStream* getStream();
	virtual ::javax::imageio::ImageWriter* getWriter();
	virtual bool isCompressionLossless();
	virtual void setMetadata(::javax::imageio::metadata::IIOMetadata* metadata);
	virtual void setStream(::javax::imageio::stream::ImageOutputStream* stream);
	virtual void setWriter(::javax::imageio::ImageWriter* writer);
	::javax::imageio::ImageWriter* writer = nullptr;
	::javax::imageio::metadata::IIOMetadata* metadata = nullptr;
	$String* compressionType = nullptr;
	int32_t compressionTagValue = 0;
	bool isCompressionLossless$ = false;
	::javax::imageio::stream::ImageOutputStream* stream = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFCompressor_h_