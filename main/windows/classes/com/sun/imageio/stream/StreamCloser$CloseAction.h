#ifndef _com_sun_imageio_stream_StreamCloser$CloseAction_h_
#define _com_sun_imageio_stream_StreamCloser$CloseAction_h_
//$ class com.sun.imageio.stream.StreamCloser$CloseAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

class StreamCloser$CloseAction : public ::java::lang::Object {
	$class(StreamCloser$CloseAction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StreamCloser$CloseAction();
	void init$(::javax::imageio::stream::ImageInputStream* iis);
	void performAction();
	::javax::imageio::stream::ImageInputStream* iis = nullptr;
};

			} // stream
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_stream_StreamCloser$CloseAction_h_