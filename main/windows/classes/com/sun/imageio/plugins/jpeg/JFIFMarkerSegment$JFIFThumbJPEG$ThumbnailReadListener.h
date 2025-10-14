#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener
//$ extends javax.imageio.event.IIOReadProgressListener

#include <javax/imageio/event/IIOReadProgressListener.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JFIFMarkerSegment$JFIFThumbJPEG;
					class JPEGImageReader;
				}
			}
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageReader;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener : public ::javax::imageio::event::IIOReadProgressListener {
	$class(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, $NO_CLASS_INIT, ::javax::imageio::event::IIOReadProgressListener)
public:
	JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener();
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbJPEG* this$1, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader);
	virtual void imageComplete(::javax::imageio::ImageReader* source) override;
	virtual void imageProgress(::javax::imageio::ImageReader* source, float percentageDone) override;
	virtual void imageStarted(::javax::imageio::ImageReader* source, int32_t imageIndex) override;
	virtual void readAborted(::javax::imageio::ImageReader* source) override;
	virtual void sequenceComplete(::javax::imageio::ImageReader* source) override;
	virtual void sequenceStarted(::javax::imageio::ImageReader* source, int32_t minIndex) override;
	virtual void thumbnailComplete(::javax::imageio::ImageReader* source) override;
	virtual void thumbnailProgress(::javax::imageio::ImageReader* source, float percentageDone) override;
	virtual void thumbnailStarted(::javax::imageio::ImageReader* source, int32_t imageIndex, int32_t thumbnailIndex) override;
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbJPEG* this$1 = nullptr;
	::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_h_