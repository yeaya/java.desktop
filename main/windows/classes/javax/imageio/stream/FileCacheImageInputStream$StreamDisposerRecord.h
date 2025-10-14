#ifndef _javax_imageio_stream_FileCacheImageInputStream$StreamDisposerRecord_h_
#define _javax_imageio_stream_FileCacheImageInputStream$StreamDisposerRecord_h_
//$ class javax.imageio.stream.FileCacheImageInputStream$StreamDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace io {
		class File;
		class RandomAccessFile;
	}
}

namespace javax {
	namespace imageio {
		namespace stream {

class FileCacheImageInputStream$StreamDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(FileCacheImageInputStream$StreamDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	FileCacheImageInputStream$StreamDisposerRecord();
	void init$(::java::io::File* cacheFile, ::java::io::RandomAccessFile* cache);
	virtual void dispose() override;
	::java::io::File* cacheFile = nullptr;
	::java::io::RandomAccessFile* cache = nullptr;
};

		} // stream
	} // imageio
} // javax

#endif // _javax_imageio_stream_FileCacheImageInputStream$StreamDisposerRecord_h_