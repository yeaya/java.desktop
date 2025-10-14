#ifndef _sun_awt_image_SurfaceManager$FlushableCacheData_h_
#define _sun_awt_image_SurfaceManager$FlushableCacheData_h_
//$ interface sun.awt.image.SurfaceManager$FlushableCacheData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace image {

class SurfaceManager$FlushableCacheData : public ::java::lang::Object {
	$interface(SurfaceManager$FlushableCacheData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool flush(bool deaccelerated) {return false;}
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_SurfaceManager$FlushableCacheData_h_