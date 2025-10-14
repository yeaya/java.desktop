#ifndef _com_sun_imageio_plugins_png_ChunkStream_h_
#define _com_sun_imageio_plugins_png_ChunkStream_h_
//$ class com.sun.imageio.plugins.png.ChunkStream
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

class ChunkStream : public ::javax::imageio::stream::ImageOutputStreamImpl {
	$class(ChunkStream, $HAS_FINALIZE | $NO_CLASS_INIT, ::javax::imageio::stream::ImageOutputStreamImpl)
public:
	ChunkStream();
	void init$(int32_t type, ::javax::imageio::stream::ImageOutputStream* stream);
	virtual void finalize() override;
	void finish();
	using ::javax::imageio::stream::ImageOutputStreamImpl::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	using ::javax::imageio::stream::ImageOutputStreamImpl::write;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void write(int32_t b) override;
	::javax::imageio::stream::ImageOutputStream* stream = nullptr;
	int64_t startPos = 0;
	::com::sun::imageio::plugins::png::CRC* crc = nullptr;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_png_ChunkStream_h_