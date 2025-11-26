#ifndef _com_sun_imageio_plugins_bmp_BMPImageWriter$IIOWriteProgressAdapter_h_
#define _com_sun_imageio_plugins_bmp_BMPImageWriter$IIOWriteProgressAdapter_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter
//$ extends javax.imageio.event.IIOWriteProgressListener

#include <javax/imageio/event/IIOWriteProgressListener.h>

namespace javax {
	namespace imageio {
		class ImageWriter;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPImageWriter$IIOWriteProgressAdapter : public ::javax::imageio::event::IIOWriteProgressListener {
	$class(BMPImageWriter$IIOWriteProgressAdapter, $NO_CLASS_INIT, ::javax::imageio::event::IIOWriteProgressListener)
public:
	BMPImageWriter$IIOWriteProgressAdapter();
	void init$();
	virtual void imageComplete(::javax::imageio::ImageWriter* source) override;
	virtual void imageProgress(::javax::imageio::ImageWriter* source, float percentageDone) override;
	virtual void imageStarted(::javax::imageio::ImageWriter* source, int32_t imageIndex) override;
	virtual void thumbnailComplete(::javax::imageio::ImageWriter* source) override;
	virtual void thumbnailProgress(::javax::imageio::ImageWriter* source, float percentageDone) override;
	virtual void thumbnailStarted(::javax::imageio::ImageWriter* source, int32_t imageIndex, int32_t thumbnailIndex) override;
	virtual void writeAborted(::javax::imageio::ImageWriter* source) override;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageWriter$IIOWriteProgressAdapter_h_