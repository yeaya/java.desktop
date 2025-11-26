#ifndef _javax_imageio_event_IIOReadWarningListener_h_
#define _javax_imageio_event_IIOReadWarningListener_h_
//$ interface javax.imageio.event.IIOReadWarningListener
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

class $export IIOReadWarningListener : public ::java::util::EventListener {
	$interface(IIOReadWarningListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void warningOccurred(::javax::imageio::ImageReader* source, $String* warning) {}
};

		} // event
	} // imageio
} // javax

#endif // _javax_imageio_event_IIOReadWarningListener_h_