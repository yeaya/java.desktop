#ifndef _com_sun_imageio_plugins_png_IDATOutputStream_h_
#define _com_sun_imageio_plugins_png_IDATOutputStream_h_
//$ class com.sun.imageio.plugins.png.IDATOutputStream
//$ extends javax.imageio.stream.ImageOutputStreamImpl

#include <java/lang/Array.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {
					class CRC;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Deflater;
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
				namespace png {

class IDATOutputStream : public ::javax::imageio::stream::ImageOutputStreamImpl {
	$class(IDATOutputStream, $HAS_FINALIZE, ::javax::imageio::stream::ImageOutputStreamImpl)
public:
	IDATOutputStream();
	void init$(::javax::imageio::stream::ImageOutputStream* stream, int32_t chunkLength, int32_t deflaterLevel);
	void deflate();
	virtual void finalize() override;
	void finish();
	void finishChunk();
	using ::javax::imageio::stream::ImageOutputStreamImpl::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	void startChunk();
	using ::javax::imageio::stream::ImageOutputStreamImpl::write;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void write(int32_t b) override;
	static $bytes* chunkType;
	::javax::imageio::stream::ImageOutputStream* stream = nullptr;
	int32_t chunkLength = 0;
	int64_t startPos = 0;
	::com::sun::imageio::plugins::png::CRC* crc = nullptr;
	::java::util::zip::Deflater* def = nullptr;
	$bytes* buf = nullptr;
	$bytes* wbuf1 = nullptr;
	int32_t bytesRemaining = 0;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_png_IDATOutputStream_h_