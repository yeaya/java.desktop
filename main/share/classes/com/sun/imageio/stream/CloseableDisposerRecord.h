#ifndef _com_sun_imageio_stream_CloseableDisposerRecord_h_
#define _com_sun_imageio_stream_CloseableDisposerRecord_h_
//$ class com.sun.imageio.stream.CloseableDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace io {
		class Closeable;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

class CloseableDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(CloseableDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	CloseableDisposerRecord();
	void init$(::java::io::Closeable* closeable);
	virtual void dispose() override;
	::java::io::Closeable* closeable = nullptr;
};

			} // stream
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_stream_CloseableDisposerRecord_h_