#ifndef _javax_imageio_stream_FileCacheImageInputStream_h_
#define _javax_imageio_stream_FileCacheImageInputStream_h_
//$ class javax.imageio.stream.FileCacheImageInputStream
//$ extends javax.imageio.stream.ImageInputStreamImpl

#include <java/lang/Array.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>

#pragma push_macro("BUFFER_LENGTH")
#undef BUFFER_LENGTH

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
		class InputStream;
		class RandomAccessFile;
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

class $import FileCacheImageInputStream : public ::javax::imageio::stream::ImageInputStreamImpl {
	$class(FileCacheImageInputStream, $HAS_FINALIZE | $NO_CLASS_INIT, ::javax::imageio::stream::ImageInputStreamImpl)
public:
	FileCacheImageInputStream();
	void init$(::java::io::InputStream* stream, ::java::io::File* cacheDir);
	virtual void close() override;
	virtual void finalize() override;
	virtual bool isCached() override;
	virtual bool isCachedFile() override;
	virtual bool isCachedMemory() override;
	using ::javax::imageio::stream::ImageInputStreamImpl::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	int64_t readUntil(int64_t pos);
	::java::io::InputStream* stream = nullptr;
	::java::io::File* cacheFile = nullptr;
	::java::io::RandomAccessFile* cache = nullptr;
	static const int32_t BUFFER_LENGTH = 1024;
	$bytes* buf = nullptr;
	int64_t length$ = 0;
	bool foundEOF = false;
	$Object* disposerReferent = nullptr;
	::sun::java2d::DisposerRecord* disposerRecord = nullptr;
	::com::sun::imageio::stream::StreamCloser$CloseAction* closeAction = nullptr;
};

		} // stream
	} // imageio
} // javax

#pragma pop_macro("BUFFER_LENGTH")

#endif // _javax_imageio_stream_FileCacheImageInputStream_h_