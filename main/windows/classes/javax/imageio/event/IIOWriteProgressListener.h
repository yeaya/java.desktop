#ifndef _javax_imageio_event_IIOWriteProgressListener_h_
#define _javax_imageio_event_IIOWriteProgressListener_h_
//$ interface javax.imageio.event.IIOWriteProgressListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace imageio {
		class ImageWriter;
	}
}

namespace javax {
	namespace imageio {
		namespace event {

class $export IIOWriteProgressListener : public ::java::util::EventListener {
	$interface(IIOWriteProgressListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void imageComplete(::javax::imageio::ImageWriter* source) {}
	virtual void imageProgress(::javax::imageio::ImageWriter* source, float percentageDone) {}
	virtual void imageStarted(::javax::imageio::ImageWriter* source, int32_t imageIndex) {}
	virtual void thumbnailComplete(::javax::imageio::ImageWriter* source) {}
	virtual void thumbnailProgress(::javax::imageio::ImageWriter* source, float percentageDone) {}
	virtual void thumbnailStarted(::javax::imageio::ImageWriter* source, int32_t imageIndex, int32_t thumbnailIndex) {}
	virtual void writeAborted(::javax::imageio::ImageWriter* source) {}
};

		} // event
	} // imageio
} // javax

#endif // _javax_imageio_event_IIOWriteProgressListener_h_