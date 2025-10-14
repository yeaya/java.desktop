#ifndef _com_sun_imageio_plugins_jpeg_JPEGBuffer_h_
#define _com_sun_imageio_plugins_jpeg_JPEGBuffer_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JPEGImageReader;
				}
			}
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
				namespace jpeg {

class JPEGBuffer : public ::java::lang::Object {
	$class(JPEGBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JPEGBuffer();
	void init$(::javax::imageio::stream::ImageInputStream* iis);
	virtual int64_t getStreamPosition();
	virtual void loadBuf(int32_t count);
	virtual void print(int32_t count);
	virtual void pushBack();
	virtual void readData($bytes* data);
	virtual bool scanForFF(::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader);
	virtual void skipData(int32_t count);
	bool debug = false;
	static const int32_t BUFFER_SIZE = 4096;
	$bytes* buf = nullptr;
	int32_t bufAvail = 0;
	int32_t bufPtr = 0;
	::javax::imageio::stream::ImageInputStream* iis = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("BUFFER_SIZE")

#endif // _com_sun_imageio_plugins_jpeg_JPEGBuffer_h_