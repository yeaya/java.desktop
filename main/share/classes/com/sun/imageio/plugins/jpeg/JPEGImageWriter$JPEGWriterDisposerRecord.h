#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageWriter$JPEGWriterDisposerRecord_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageWriter$JPEGWriterDisposerRecord_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageWriter$JPEGWriterDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageWriter$JPEGWriterDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(JPEGImageWriter$JPEGWriterDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	JPEGImageWriter$JPEGWriterDisposerRecord();
	void init$(int64_t pData);
	virtual void dispose() override;
	int64_t pData = 0;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageWriter$JPEGWriterDisposerRecord_h_