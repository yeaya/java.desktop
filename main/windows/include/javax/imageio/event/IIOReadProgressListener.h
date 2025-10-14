#ifndef _javax_imageio_event_IIOReadProgressListener_h_
#define _javax_imageio_event_IIOReadProgressListener_h_
//$ interface javax.imageio.event.IIOReadProgressListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace imageio {
		class ImageReader;
	}
}

namespace javax {
	namespace imageio {
		namespace event {

class $import IIOReadProgressListener : public ::java::util::EventListener {
	$interface(IIOReadProgressListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void imageComplete(::javax::imageio::ImageReader* source) {}
	virtual void imageProgress(::javax::imageio::ImageReader* source, float percentageDone) {}
	virtual void imageStarted(::javax::imageio::ImageReader* source, int32_t imageIndex) {}
	virtual void readAborted(::javax::imageio::ImageReader* source) {}
	virtual void sequenceComplete(::javax::imageio::ImageReader* source) {}
	virtual void sequenceStarted(::javax::imageio::ImageReader* source, int32_t minIndex) {}
	virtual void thumbnailComplete(::javax::imageio::ImageReader* source) {}
	virtual void thumbnailProgress(::javax::imageio::ImageReader* source, float percentageDone) {}
	virtual void thumbnailStarted(::javax::imageio::ImageReader* source, int32_t imageIndex, int32_t thumbnailIndex) {}
};

		} // event
	} // imageio
} // javax

#endif // _javax_imageio_event_IIOReadProgressListener_h_