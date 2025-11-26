#ifndef _javax_imageio_event_IIOWriteWarningListener_h_
#define _javax_imageio_event_IIOWriteWarningListener_h_
//$ interface javax.imageio.event.IIOWriteWarningListener
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

class $export IIOWriteWarningListener : public ::java::util::EventListener {
	$interface(IIOWriteWarningListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void warningOccurred(::javax::imageio::ImageWriter* source, int32_t imageIndex, $String* warning) {}
};

		} // event
	} // imageio
} // javax

#endif // _javax_imageio_event_IIOWriteWarningListener_h_