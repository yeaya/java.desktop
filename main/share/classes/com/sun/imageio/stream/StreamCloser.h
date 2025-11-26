#ifndef _com_sun_imageio_stream_StreamCloser_h_
#define _com_sun_imageio_stream_StreamCloser_h_
//$ class com.sun.imageio.stream.StreamCloser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {
				class StreamCloser$CloseAction;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace util {
		class WeakHashMap;
	}
}
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

class StreamCloser : public ::java::lang::Object {
	$class(StreamCloser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StreamCloser();
	void init$();
	static void addToQueue(::com::sun::imageio::stream::StreamCloser$CloseAction* ca);
	static ::com::sun::imageio::stream::StreamCloser$CloseAction* createCloseAction(::javax::imageio::stream::ImageInputStream* iis);
	static $Object* lambda$addToQueue$0(::java::lang::Runnable* streamCloserRunnable);
	static void removeFromQueue(::com::sun::imageio::stream::StreamCloser$CloseAction* ca);
	static ::java::util::WeakHashMap* toCloseQueue;
	static $Thread* streamCloser;
};

			} // stream
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_stream_StreamCloser_h_