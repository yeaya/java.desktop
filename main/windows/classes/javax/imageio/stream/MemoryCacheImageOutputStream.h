#ifndef _javax_imageio_stream_MemoryCacheImageOutputStream_h_
#define _javax_imageio_stream_MemoryCacheImageOutputStream_h_
//$ class javax.imageio.stream.MemoryCacheImageOutputStream
//$ extends javax.imageio.stream.ImageOutputStreamImpl

#include <java/lang/Array.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class MemoryCache;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace stream {

class $export MemoryCacheImageOutputStream : public ::javax::imageio::stream::ImageOutputStreamImpl {
	$class(MemoryCacheImageOutputStream, $NO_CLASS_INIT, ::javax::imageio::stream::ImageOutputStreamImpl)
public:
	MemoryCacheImageOutputStream();
	void init$(::java::io::OutputStream* stream);
	virtual void close() override;
	virtual void flushBefore(int64_t pos) override;
	virtual bool isCached() override;
	virtual bool isCachedFile() override;
	virtual bool isCachedMemory() override;
	virtual int64_t length() override;
	using ::javax::imageio::stream::ImageOutputStreamImpl::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	using ::javax::imageio::stream::ImageOutputStreamImpl::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::io::OutputStream* stream = nullptr;
	::javax::imageio::stream::MemoryCache* cache = nullptr;
};

		} // stream
	} // imageio
} // javax

#endif // _javax_imageio_stream_MemoryCacheImageOutputStream_h_