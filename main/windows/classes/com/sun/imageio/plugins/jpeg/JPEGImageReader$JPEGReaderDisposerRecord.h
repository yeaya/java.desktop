#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageReader$JPEGReaderDisposerRecord_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageReader$JPEGReaderDisposerRecord_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageReader$JPEGReaderDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageReader$JPEGReaderDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(JPEGImageReader$JPEGReaderDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	JPEGImageReader$JPEGReaderDisposerRecord();
	void init$(int64_t pData);
	virtual void dispose() override;
	int64_t pData = 0;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageReader$JPEGReaderDisposerRecord_h_