#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageReader$CallBackLock_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageReader$CallBackLock_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JPEGImageReader$CallBackLock$State;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageReader$CallBackLock : public ::java::lang::Object {
	$class(JPEGImageReader$CallBackLock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JPEGImageReader$CallBackLock();
	void init$();
	virtual void check();
	void lock();
	void unlock();
	::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State* lockState = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageReader$CallBackLock_h_