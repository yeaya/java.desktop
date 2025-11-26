#ifndef _javax_imageio_stream_MemoryCacheImageInputStream$StreamDisposerRecord_h_
#define _javax_imageio_stream_MemoryCacheImageInputStream$StreamDisposerRecord_h_
//$ class javax.imageio.stream.MemoryCacheImageInputStream$StreamDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

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

class MemoryCacheImageInputStream$StreamDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(MemoryCacheImageInputStream$StreamDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	MemoryCacheImageInputStream$StreamDisposerRecord();
	void init$(::javax::imageio::stream::MemoryCache* cache);
	virtual void dispose() override;
	::javax::imageio::stream::MemoryCache* cache = nullptr;
};

		} // stream
	} // imageio
} // javax

#endif // _javax_imageio_stream_MemoryCacheImageInputStream$StreamDisposerRecord_h_