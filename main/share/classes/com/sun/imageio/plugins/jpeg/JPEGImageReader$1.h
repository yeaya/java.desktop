#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageReader$1_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageReader$1_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageReader$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageReader$1 : public ::java::security::PrivilegedAction {
	$class(JPEGImageReader$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JPEGImageReader$1();
	void init$();
	virtual $Object* run() override;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageReader$1_h_