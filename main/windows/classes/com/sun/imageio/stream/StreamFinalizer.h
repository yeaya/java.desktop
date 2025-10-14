#ifndef _com_sun_imageio_stream_StreamFinalizer_h_
#define _com_sun_imageio_stream_StreamFinalizer_h_
//$ class com.sun.imageio.stream.StreamFinalizer
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

class StreamFinalizer : public ::java::lang::Object {
	$class(StreamFinalizer, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	StreamFinalizer();
	void init$(::javax::imageio::stream::ImageInputStream* stream);
	virtual void finalize() override;
	::javax::imageio::stream::ImageInputStream* stream = nullptr;
};

			} // stream
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_stream_StreamFinalizer_h_