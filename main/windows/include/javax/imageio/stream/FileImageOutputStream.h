#ifndef _javax_imageio_stream_FileImageOutputStream_h_
#define _javax_imageio_stream_FileImageOutputStream_h_
//$ class javax.imageio.stream.FileImageOutputStream
//$ extends javax.imageio.stream.ImageOutputStreamImpl

#include <java/lang/Array.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {
				class CloseableDisposerRecord;
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
		class RandomAccessFile;
	}
}

namespace javax {
	namespace imageio {
		namespace stream {

class $import FileImageOutputStream : public ::javax::imageio::stream::ImageOutputStreamImpl {
	$class(FileImageOutputStream, $HAS_FINALIZE | $NO_CLASS_INIT, ::javax::imageio::stream::ImageOutputStreamImpl)
public:
	FileImageOutputStream();
	void init$(::java::io::File* f);
	void init$(::java::io::RandomAccessFile* raf);
	virtual void close() override;
	virtual void finalize() override;
	virtual int64_t length() override;
	using ::javax::imageio::stream::ImageOutputStreamImpl::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void seek(int64_t pos) override;
	using ::javax::imageio::stream::ImageOutputStreamImpl::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::io::RandomAccessFile* raf = nullptr;
	$Object* disposerReferent = nullptr;
	::com::sun::imageio::stream::CloseableDisposerRecord* disposerRecord = nullptr;
};

		} // stream
	} // imageio
} // javax

#endif // _javax_imageio_stream_FileImageOutputStream_h_