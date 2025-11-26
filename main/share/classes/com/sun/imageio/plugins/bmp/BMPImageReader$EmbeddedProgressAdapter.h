#ifndef _com_sun_imageio_plugins_bmp_BMPImageReader$EmbeddedProgressAdapter_h_
#define _com_sun_imageio_plugins_bmp_BMPImageReader$EmbeddedProgressAdapter_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter
//$ extends javax.imageio.event.IIOReadProgressListener

#include <javax/imageio/event/IIOReadProgressListener.h>

namespace javax {
	namespace imageio {
		class ImageReader;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPImageReader$EmbeddedProgressAdapter : public ::javax::imageio::event::IIOReadProgressListener {
	$class(BMPImageReader$EmbeddedProgressAdapter, $NO_CLASS_INIT, ::javax::imageio::event::IIOReadProgressListener)
public:
	BMPImageReader$EmbeddedProgressAdapter();
	void init$();
	virtual void imageComplete(::javax::imageio::ImageReader* src) override;
	virtual void imageProgress(::javax::imageio::ImageReader* src, float percentageDone) override;
	virtual void imageStarted(::javax::imageio::ImageReader* src, int32_t imageIndex) override;
	virtual void readAborted(::javax::imageio::ImageReader* src) override;
	virtual void sequenceComplete(::javax::imageio::ImageReader* src) override;
	virtual void sequenceStarted(::javax::imageio::ImageReader* src, int32_t minIndex) override;
	virtual void thumbnailComplete(::javax::imageio::ImageReader* src) override;
	virtual void thumbnailProgress(::javax::imageio::ImageReader* src, float percentageDone) override;
	virtual void thumbnailStarted(::javax::imageio::ImageReader* src, int32_t iIdx, int32_t tIdx) override;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageReader$EmbeddedProgressAdapter_h_