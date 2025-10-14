#ifndef _javax_imageio_stream_FileCacheImageOutputStream_h_
#define _javax_imageio_stream_FileCacheImageOutputStream_h_
//$ class javax.imageio.stream.FileCacheImageOutputStream
//$ extends javax.imageio.stream.ImageOutputStreamImpl

#include <java/lang/Array.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {
				class StreamCloser$CloseAction;
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
		class OutputStream;
		class RandomAccessFile;
	}
}

namespace javax {
	namespace imageio {
		namespace stream {

class $import FileCacheImageOutputStream : public ::javax::imageio::stream::ImageOutputStreamImpl {
	$class(FileCacheImageOutputStream, $NO_CLASS_INIT, ::javax::imageio::stream::ImageOutputStreamImpl)
public:
	FileCacheImageOutputStream();
	void init$(::java::io::OutputStream* stream, ::java::io::File* cacheDir);
	virtual void close() override;
	virtual void flushBefore(int64_t pos) override;
	virtual bool isCached() override;
	virtual bool isCachedFile() override;
	virtual bool isCachedMemory() override;
	virtual int64_t length() override;
	using ::javax::imageio::stream::ImageOutputStreamImpl::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void seek(int64_t pos) override;
	using ::javax::imageio::stream::ImageOutputStreamImpl::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::io::OutputStream* stream = nullptr;
	::java::io::File* cacheFile = nullptr;
	::java::io::RandomAccessFile* cache = nullptr;
	int64_t maxStreamPos = 0;
	::com::sun::imageio::stream::StreamCloser$CloseAction* closeAction = nullptr;
};

		} // stream
	} // imageio
} // javax

#endif // _javax_imageio_stream_FileCacheImageOutputStream_h_