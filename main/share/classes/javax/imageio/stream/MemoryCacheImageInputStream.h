#ifndef _javax_imageio_stream_MemoryCacheImageInputStream_h_
#define _javax_imageio_stream_MemoryCacheImageInputStream_h_
//$ class javax.imageio.stream.MemoryCacheImageInputStream
//$ extends javax.imageio.stream.ImageInputStreamImpl

#include <java/lang/Array.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class MemoryCache;
		}
	}
}
namespace sun {
	namespace java2d {
		class DisposerRecord;
	}
}

namespace javax {
	namespace imageio {
		namespace stream {

class $export MemoryCacheImageInputStream : public ::javax::imageio::stream::ImageInputStreamImpl {
	$class(MemoryCacheImageInputStream, $HAS_FINALIZE | $NO_CLASS_INIT, ::javax::imageio::stream::ImageInputStreamImpl)
public:
	MemoryCacheImageInputStream();
	void init$(::java::io::InputStream* stream);
	virtual void close() override;
	virtual void finalize() override;
	virtual void flushBefore(int64_t pos) override;
	virtual bool isCached() override;
	virtual bool isCachedFile() override;
	virtual bool isCachedMemory() override;
	using ::javax::imageio::stream::ImageInputStreamImpl::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::java::io::InputStream* stream = nullptr;
	::javax::imageio::stream::MemoryCache* cache = nullptr;
	$Object* disposerReferent = nullptr;
	::sun::java2d::DisposerRecord* disposerRecord = nullptr;
};

		} // stream
	} // imageio
} // javax

#endif // _javax_imageio_stream_MemoryCacheImageInputStream_h_