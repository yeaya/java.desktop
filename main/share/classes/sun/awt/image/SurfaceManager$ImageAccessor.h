#ifndef _sun_awt_image_SurfaceManager$ImageAccessor_h_
#define _sun_awt_image_SurfaceManager$ImageAccessor_h_
//$ class sun.awt.image.SurfaceManager$ImageAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class SurfaceManager;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class SurfaceManager$ImageAccessor : public ::java::lang::Object {
	$class(SurfaceManager$ImageAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SurfaceManager$ImageAccessor();
	void init$();
	virtual ::sun::awt::image::SurfaceManager* getSurfaceManager(::java::awt::Image* img) {return nullptr;}
	virtual void setSurfaceManager(::java::awt::Image* img, ::sun::awt::image::SurfaceManager* mgr) {}
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_SurfaceManager$ImageAccessor_h_