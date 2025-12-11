#ifndef _sun_awt_image_SurfaceManager$ProxiedGraphicsConfig_h_
#define _sun_awt_image_SurfaceManager$ProxiedGraphicsConfig_h_
//$ interface sun.awt.image.SurfaceManager$ProxiedGraphicsConfig
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace image {

class $export SurfaceManager$ProxiedGraphicsConfig : public ::java::lang::Object {
	$interface(SurfaceManager$ProxiedGraphicsConfig, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getProxyKey() {return nullptr;}
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_SurfaceManager$ProxiedGraphicsConfig_h_