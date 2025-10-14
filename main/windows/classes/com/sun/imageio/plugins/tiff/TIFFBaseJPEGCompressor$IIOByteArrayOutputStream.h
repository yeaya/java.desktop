#ifndef _com_sun_imageio_plugins_tiff_TIFFBaseJPEGCompressor$IIOByteArrayOutputStream_h_
#define _com_sun_imageio_plugins_tiff_TIFFBaseJPEGCompressor$IIOByteArrayOutputStream_h_
//$ class com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor$IIOByteArrayOutputStream
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>

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

class TIFFBaseJPEGCompressor$IIOByteArrayOutputStream : public ::java::io::ByteArrayOutputStream {
	$class(TIFFBaseJPEGCompressor$IIOByteArrayOutputStream, $NO_CLASS_INIT, ::java::io::ByteArrayOutputStream)
public:
	TIFFBaseJPEGCompressor$IIOByteArrayOutputStream();
	void init$();
	void init$(int32_t size);
	using ::java::io::ByteArrayOutputStream::write;
	using ::java::io::ByteArrayOutputStream::writeTo;
	virtual void writeTo(::javax::imageio::stream::ImageOutputStream* ios);
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFBaseJPEGCompressor$IIOByteArrayOutputStream_h_