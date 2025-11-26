#ifndef _java_awt_Image$1_h_
#define _java_awt_Image$1_h_
//$ class java.awt.Image$1
//$ extends sun.awt.image.SurfaceManager$ImageAccessor

#include <sun/awt/image/SurfaceManager$ImageAccessor.h>

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

namespace java {
	namespace awt {

class Image$1 : public ::sun::awt::image::SurfaceManager$ImageAccessor {
	$class(Image$1, $NO_CLASS_INIT, ::sun::awt::image::SurfaceManager$ImageAccessor)
public:
	Image$1();
	void init$();
	virtual ::sun::awt::image::SurfaceManager* getSurfaceManager(::java::awt::Image* img) override;
	virtual void setSurfaceManager(::java::awt::Image* img, ::sun::awt::image::SurfaceManager* mgr) override;
};

	} // awt
} // java

#endif // _java_awt_Image$1_h_