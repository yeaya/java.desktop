#ifndef _com_sun_imageio_stream_StreamCloser$1_h_
#define _com_sun_imageio_stream_StreamCloser$1_h_
//$ class com.sun.imageio.stream.StreamCloser$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

class StreamCloser$1 : public ::java::lang::Runnable {
	$class(StreamCloser$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	StreamCloser$1();
	void init$();
	virtual void run() override;
};

			} // stream
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_stream_StreamCloser$1_h_