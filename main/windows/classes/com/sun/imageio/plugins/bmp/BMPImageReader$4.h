#ifndef _com_sun_imageio_plugins_bmp_BMPImageReader$4_h_
#define _com_sun_imageio_plugins_bmp_BMPImageReader$4_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageReader$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPImageReader$4 : public ::java::security::PrivilegedAction {
	$class(BMPImageReader$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BMPImageReader$4();
	void init$();
	virtual $Object* run() override;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageReader$4_h_