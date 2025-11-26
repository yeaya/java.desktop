#ifndef _java_awt_image_TileObserver_h_
#define _java_awt_image_TileObserver_h_
//$ interface java.awt.image.TileObserver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace image {
			class WritableRenderedImage;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import TileObserver : public ::java::lang::Object {
	$interface(TileObserver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void tileUpdate(::java::awt::image::WritableRenderedImage* source, int32_t tileX, int32_t tileY, bool willBeWritable) {}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_TileObserver_h_